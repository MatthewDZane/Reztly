// Fill out your copyright notice in the Description page of Project Settings.

#include "JsonParser.h"
#include <queue>
#include <string>

#include "JsonObjectConverter.h"

TArray<FTimeStampIDPair> UJsonParser::StringToAvailableSnapshots(FString JsonString)
{
	TArray<FTimeStampIDPair> AvailableSnapshots;

	std::string TempJsonString = TCHAR_TO_UTF8(*JsonString);
	int StringLen = TempJsonString.length();
	if (StringLen > 1)
	{
		TempJsonString = TempJsonString.substr(1, StringLen);
		StringLen--;

		int OpenBracketIndex;
		while ((OpenBracketIndex = TempJsonString.find("[")) != -1)
		{
			TempJsonString = TempJsonString.substr(OpenBracketIndex + 1, StringLen);
			int CommaIndex = TempJsonString.find(",");
			if (CommaIndex == -1)
			{
				break;
			}

			FTimeStampIDPair CurrentPair;
			std::string TimeStampString = TempJsonString.substr(0, CommaIndex);

			CurrentPair.TimeStamp = static_cast<int>(FCString::Atoi(*FString(TimeStampString.c_str())));
			TempJsonString = TempJsonString.substr(CommaIndex + 1, TempJsonString.length());
			int ClosedBracketIndex = TempJsonString.find("]");
			if (ClosedBracketIndex == -1)
			{
				CurrentPair.ID = -1;
				break;
			}
			std::string IDString = TempJsonString.substr(0, ClosedBracketIndex);
			CurrentPair.ID = static_cast<int>(FCString::Atof(*FString(IDString.c_str())));

			AvailableSnapshots.Add(CurrentPair);
		}
	}

	return AvailableSnapshots;
}

FG2SnapshotResponse UJsonParser::StringToG2SnapshotResponse(FString JsonString)
{
	FG2SnapshotResponse Response;
	if (FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &Response))
	{
		return Response;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Error: could not parse string"));
		return FG2SnapshotResponse();
	}
}

FJsonObjectWrapper UJsonParser::StructToG2SnapshotObject(FG2SnapshotResponse Response)
{
	FJsonObjectWrapper JsonWrapper = FJsonObjectWrapper();
	JsonWrapper.JsonObject = FJsonObjectConverter::UStructToJsonObject
		<FG2SnapshotResponse>(Response);
	return JsonWrapper;
}


FUE4Response UJsonParser::StringToUE4Response(FString JsonString)
{

	FUE4Response Response;

	// Remove outside parenthesis
	std::string TempJsonString = TCHAR_TO_UTF8(*JsonString);
	int StringLen = TempJsonString.length();
	if (StringLen > 1)
	{
		TempJsonString = TempJsonString.substr(1, StringLen);
	}
	StringLen--;

	// Check for "nodes"
	int NodesIndex;
	if ((NodesIndex = TempJsonString.find("nodes")) == -1)
	{
		return Response;
	}
	TempJsonString = TempJsonString.substr(NodesIndex + 5, StringLen);

	// Parse nodes
	int OpenSquareBracketIndex;
	while ((OpenSquareBracketIndex = TempJsonString.find("[")) != -1 &&
		OpenSquareBracketIndex < TempJsonString.find("edges"))
	{
		FUE4Node Node;
		TempJsonString = TempJsonString.substr(OpenSquareBracketIndex + 1, TempJsonString.length());

		// Parse paths
		while ((OpenSquareBracketIndex = TempJsonString.find("[")) != -1 &&
			OpenSquareBracketIndex < TempJsonString.find("]"))
		{
			FPath Path;
			TempJsonString = TempJsonString.substr(OpenSquareBracketIndex + 1, TempJsonString.length());

			int ClosedSquareBracket = TempJsonString.find("]");
			std::string PathString = TempJsonString.substr(0, ClosedSquareBracket);

			// Parse path IPs
			int ParenthesizeIndex;
			while ((ParenthesizeIndex = PathString.find("\"")) != -1)
			{
				PathString = PathString.substr(ParenthesizeIndex + 1);

				if ((ParenthesizeIndex = PathString.find("\"")) == -1)
				{
					break;
				}

				Path.Path.Add(FString(PathString.substr(0, ParenthesizeIndex).c_str()));
				PathString = PathString.substr(ParenthesizeIndex + 1, TempJsonString.length());

			}
			Node.Paths.Add(Path);

			TempJsonString = TempJsonString.substr(ClosedSquareBracket + 1, TempJsonString.length());
		}

		Node.Hostname = GetStringValue(FString(TempJsonString.c_str()), "hostname");
		Node.Ip = GetStringValue(FString(TempJsonString.c_str()), "ip");
		Node.Latitude = GetFloatValue(FString(TempJsonString.c_str()), "latitude");
		Node.Longitude = GetFloatValue(FString(TempJsonString.c_str()), "longitude");
		Node.Primary = GetBoolValue(FString(TempJsonString.c_str()), "primary");

		Response.Nodes.Add(Node);
	}

	// Check for "edges"
	int EdgesIndex;
	if ((EdgesIndex = TempJsonString.find("edges")) == -1)
	{
		return Response;
	}
	TempJsonString = TempJsonString.substr(EdgesIndex + 5, TempJsonString.length());

	// Parse edges
	while ((OpenSquareBracketIndex = TempJsonString.find("[")) != -1)
	{
		FUE4Edge Edge;
		TempJsonString = TempJsonString.substr(OpenSquareBracketIndex + 1, TempJsonString.length());

		Edge.Source = GetFloatValue(FString(TempJsonString.c_str()), "source");
		Edge.Target = GetFloatValue(FString(TempJsonString.c_str()), "target");
		Edge.Mtu = GetFloatValue(FString(TempJsonString.c_str()), "mtu");
		Edge.Latency = GetFloatValue(FString(TempJsonString.c_str()), "latency");

		// Parse paths
		while ((OpenSquareBracketIndex = TempJsonString.find("[")) != -1 &&
			OpenSquareBracketIndex < TempJsonString.find("]"))
		{
			FPath Path;
			TempJsonString = TempJsonString.substr(OpenSquareBracketIndex + 1, TempJsonString.length());

			int ClosedSquareBracket = TempJsonString.find("]");
			std::string PathString = TempJsonString.substr(0, ClosedSquareBracket);

			// Parse path IPs
			int ParenthesizeIndex;
			while ((ParenthesizeIndex = PathString.find("\"")) != -1)
			{
				PathString = PathString.substr(ParenthesizeIndex + 1, PathString.length());

				if ((ParenthesizeIndex = PathString.find("\"")) == -1)
				{
					break;
				}

				Path.Path.Add(FString(PathString.substr(0, ParenthesizeIndex).c_str()));
				PathString = PathString.substr(ParenthesizeIndex + 1, PathString.length());
			}
			Edge.Paths.Add(Path);

			TempJsonString = TempJsonString.substr(ClosedSquareBracket + 1, TempJsonString.length());
		}

		Response.Edges.Add(Edge);
	}
	return Response;
}

FJsonObjectWrapper UJsonParser::StructToUE4ResponseObject(FUE4Response Response)
{
	FJsonObjectWrapper JsonWrapper = FJsonObjectWrapper();
	JsonWrapper.JsonObject = FJsonObjectConverter::UStructToJsonObject
		<FUE4Response>(Response);
	return JsonWrapper;
}

FNetboxResponse UJsonParser::StringToNetboxResponse(FString JsonString)
{
	FNetboxResponse Response;
	if (FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &Response))
	{
		return Response;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Error: could not parse string"));
		return FNetboxResponse();
	}
}

FJsonObjectWrapper UJsonParser::StructToNetboxResponseObject(FNetboxResponse Response)
{
	FJsonObjectWrapper JsonWrapper = FJsonObjectWrapper();
	JsonWrapper.JsonObject = FJsonObjectConverter::UStructToJsonObject
		<FNetboxResponse>(Response);
	return JsonWrapper;
}

FResult UJsonParser::StringToResult(FString JsonString)
{
	FResult Response;
	if (FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &Response))
	{
		return Response;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Error: could not parse string"));
		return FResult();
	}
}

FJsonObjectWrapper UJsonParser::StructToResultObject(FResult Response)
{
	FJsonObjectWrapper JsonWrapper = FJsonObjectWrapper();
	JsonWrapper.JsonObject = FJsonObjectConverter::UStructToJsonObject
		<FResult>(Response);
	return JsonWrapper;
}


bool UJsonParser::FindFieldPath(FJsonObjectWrapper JsonWrapper,
	FString FieldPath)
{
	// Create queue from field path string
	std::queue<FString> Fields;
	int PeriodIndex;
	FString TempPath = FieldPath;
	while ((PeriodIndex = TempPath.Find(".")) != -1)
	{
		Fields.push(TempPath.Left(PeriodIndex));
		TempPath = TempPath.RightChop(PeriodIndex + 1);
	}
	Fields.push(TempPath);

	return FindField(JsonWrapper.JsonObject, Fields);
}


FString UJsonParser::GetStringValue(FString JsonString, FString Field)
{
	int FieldIndex = JsonString.Find(Field);
	if (FieldIndex != -1)
	{

		JsonString = JsonString.RightChop(FieldIndex + Field.Len() + 1);
		int ParenthesizeIndex = JsonString.Find("\"");
		JsonString = JsonString.RightChop(ParenthesizeIndex + 1);
		ParenthesizeIndex = JsonString.Find("\"");
		return JsonString.Left(ParenthesizeIndex);
	}
	else
	{
		return "";
	}
}

float UJsonParser::GetFloatValue(FString JsonString, FString Field)
{
	int FieldIndex = JsonString.Find(Field);
	if (FieldIndex != -1)
	{
		JsonString = JsonString.RightChop(FieldIndex + Field.Len() + 2);
		int EndOfFloatIndex = FGenericPlatformMath::Min(JsonString.Find(","),
			JsonString.Find("]"));
		return FCString::Atof(*JsonString.Left(EndOfFloatIndex));
	}
	else
	{
		return 0;
	}
}

bool UJsonParser::GetBoolValue(FString JsonString, FString Field)
{
	int FieldIndex = JsonString.Find(Field);
	if (FieldIndex != -1)
	{

		JsonString = JsonString.RightChop(FieldIndex + 1);
		int ParenthesizeIndex = JsonString.Find("\"");

		JsonString = JsonString.RightChop(ParenthesizeIndex + 2);
		int EndOfFloatIndex = FGenericPlatformMath::Min(JsonString.Find(","),
			JsonString.Find("}"));
		FString ValuesString = JsonString.Left(EndOfFloatIndex);
		return ValuesString.Contains("true") || ValuesString.Contains("True");
	}
	else
	{
		return false;
	}
}

bool UJsonParser::FindField(TSharedPtr<FJsonObject> JsonObject,
	std::queue<FString> Fields)
{
	std::string CurrentField = TCHAR_TO_UTF8(*Fields.front());

	// Check if Current field is an array
	unsigned int OpenBracketIndex;
	bool FieldIsArray = (OpenBracketIndex = CurrentField.find("[")) != -1;

	TSharedPtr<FJsonObject> InnerObject = nullptr;
	if (FieldIsArray)
	{
		// Separate Field name from ArrayIndex
		unsigned int CloseBracketIndex = CurrentField.find("]");
		std::string IndexString = CurrentField.substr(OpenBracketIndex + 1, CloseBracketIndex);
		int ArrayIndex = std::atoi(IndexString.c_str());
		CurrentField = CurrentField.substr(0, OpenBracketIndex);

		// Get Array Field
		const TArray<TSharedPtr<FJsonValue>>* JsonArray;
		if (JsonObject->TryGetArrayField(FString(CurrentField.c_str()), JsonArray))
		{
			if (ArrayIndex != -1 && JsonArray->Num() > ArrayIndex)
			{
				InnerObject = (*JsonArray)[ArrayIndex]->AsObject();
			}
		}
	}
	// Non array field
	else if (JsonObject->HasField(FString(CurrentField.c_str())))
	{
		InnerObject = JsonObject->GetObjectField(FString(CurrentField.c_str()));
	}

	Fields.pop();

	if (InnerObject != nullptr)
	{
		if (Fields.size() > 0) {
			return FindField(InnerObject, Fields);
		}
		else
		{
			return true;
		}
	}

	return false;
}