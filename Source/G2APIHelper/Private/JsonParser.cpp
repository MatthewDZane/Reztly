// Fill out your copyright notice in the Description page of Project Settings.

#include "JsonParser.h"
#include <queue>

#include "JsonObjectConverter.h"

TArray<FTimeStampIDPair> UJsonParser::StringToAvailableSnapshots(FString JsonString)
{
	TArray<FTimeStampIDPair> AvailableSnapshots;
	
	FString TempJsonString = JsonString;
	if (TempJsonString.Len() > 1)
	{
		TempJsonString = TempJsonString.RightChop(1);
	}

	int OpenBracketIndex;
	while ((OpenBracketIndex = TempJsonString.Find("[")) != -1)
	{
		TempJsonString = TempJsonString.RightChop(OpenBracketIndex + 1);
		int CommaIndex = TempJsonString.Find(",");
		if (CommaIndex == -1)
		{
			break;
		}

		FTimeStampIDPair CurrentPair;
		FString TimeStampString = TempJsonString.Left(CommaIndex);

		CurrentPair.TimeStamp = FCString::Atoi(*TimeStampString);
		TempJsonString = TempJsonString.RightChop(CommaIndex + 1);
		int ClosedBracketIndex = TempJsonString.Find("]");
		if (ClosedBracketIndex == -1)
		{
			CurrentPair.ID =  -1;
			break;
		}
		FString IDString = TempJsonString.Left(ClosedBracketIndex);
		CurrentPair.ID = (int)FCString::Atof(*IDString);

		AvailableSnapshots.Add(CurrentPair);
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

FFlowInfo UJsonParser::StringToFlowInfo(FString JsonString)
{
	FFlowInfo Info;
	if (FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &Info))
	{
		return Info;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Error: could not parse string"));
		return FFlowInfo();
	}
}


FUE4Response UJsonParser::StringToUE4Response(FString JsonString)
{
	
	FUE4Response Response;
	
	// Remove outside parenthesis
	FString TempJsonString = JsonString;
	if (TempJsonString.Len() > 1)
	{
		TempJsonString = TempJsonString.RightChop(1);
	}
	
	// Check for "nodes"
	int NodesIndex;
	if ((NodesIndex = TempJsonString.Find("nodes")) == -1)
	{
		return Response;
	}
	TempJsonString = TempJsonString.RightChop(NodesIndex + 5);
	
	// Parse nodes
	int OpenSquareBracketIndex;
	while ((OpenSquareBracketIndex = TempJsonString.Find("[")) != -1 &&
			OpenSquareBracketIndex < TempJsonString.Find("edges"))
	{
		FUE4Node Node;
		TempJsonString = TempJsonString.RightChop(OpenSquareBracketIndex + 1);
		
		// Parse paths
		while ((OpenSquareBracketIndex = TempJsonString.Find("[")) != -1 &&
			    OpenSquareBracketIndex < TempJsonString.Find("]"))
		{
			FPath Path;
			TempJsonString = TempJsonString.RightChop(OpenSquareBracketIndex + 1);
			
			int ClosedSquareBracket = TempJsonString.Find("]");
			FString PathString = TempJsonString.Left(ClosedSquareBracket);
			
			// Parse path IPs
			int ParenthesizeIndex;
			while ((ParenthesizeIndex = PathString.Find("\"")) != -1)
			{
				PathString = PathString.RightChop(ParenthesizeIndex + 1);
				
				if ((ParenthesizeIndex = PathString.Find("\"")) == -1)
				{
					break;
				}

				Path.Path.Add(PathString.Left(ParenthesizeIndex));
				PathString = PathString.RightChop(ParenthesizeIndex + 1);
				
			}
			Node.Paths.Add(Path);

			TempJsonString = TempJsonString.RightChop(ClosedSquareBracket + 1);
		}
		
		Node.Hostname = GetStringValue(TempJsonString, "hostname");
		Node.Ip = GetStringValue(TempJsonString, "ip");
		Node.Latitude = GetFloatValue(TempJsonString, "latitude");
		Node.Longitude = GetFloatValue(TempJsonString, "longitude");
		Node.Primary = GetBoolValue(TempJsonString, "primary");
		
		Response.Nodes.Add(Node);
	}
	
	// Check for "edges"
	int EdgesIndex;
	if ((EdgesIndex = TempJsonString.Find("edges")) == -1)
	{
		return Response;
	}
	TempJsonString = TempJsonString.RightChop(EdgesIndex + 5);

	// Parse edges
	while ((OpenSquareBracketIndex = TempJsonString.Find("[")) != -1)
	{
		FUE4Edge Edge;
		TempJsonString = TempJsonString.RightChop(OpenSquareBracketIndex + 1);

		Edge.Source = GetFloatValue(TempJsonString, "source");
		Edge.Target = GetFloatValue(TempJsonString, "target");
		Edge.Mtu = GetFloatValue(TempJsonString, "mtu");
		Edge.Latency = GetFloatValue(TempJsonString, "latency");
		
		// Parse paths
		while ((OpenSquareBracketIndex = TempJsonString.Find("[")) != -1 &&
				OpenSquareBracketIndex < TempJsonString.Find("]"))
		{
			FPath Path;
			TempJsonString = TempJsonString.RightChop(OpenSquareBracketIndex + 1);
			
			int ClosedSquareBracket = TempJsonString.Find("]");
			FString PathString = TempJsonString.Left(ClosedSquareBracket);
			
			// Parse path IPs
			int ParenthesizeIndex;
			while ((ParenthesizeIndex = PathString.Find("\"")) != -1)
			{
				PathString = PathString.RightChop(ParenthesizeIndex + 1);
				
				if ((ParenthesizeIndex = PathString.Find("\"")) == -1)
				{
					break;
				}

				Path.Path.Add(PathString.Left(ParenthesizeIndex));
				PathString = PathString.RightChop(ParenthesizeIndex + 1);
			}
			Edge.Paths.Add(Path);

			TempJsonString = TempJsonString.RightChop(ClosedSquareBracket + 1);
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

TArray<FResult> UJsonParser::StringToResult(FString JsonString)
{
	TArray<FResult> Results;
	if (FJsonObjectConverter::JsonArrayStringToUStruct(JsonString, &Results))
	{
		return Results;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Error: could not parse string"));
		return TArray<FResult>();
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
	FString CurrentField = Fields.front();

	// Check if Current field is an array
	unsigned int OpenBracketIndex;
	int ArrayIndex;
	bool FieldIsArray = (OpenBracketIndex = CurrentField.Find("[")) != -1;

	TSharedPtr<FJsonObject> InnerObject = nullptr;
	if (FieldIsArray)
	{
		// Separate Field name from ArrayIndex
		unsigned int CloseBracketIndex = CurrentField.Find("]");
		FString IndexString = CurrentField.Mid(OpenBracketIndex + 1,
									CloseBracketIndex - OpenBracketIndex - 1);
		ArrayIndex = FCString::Atoi(*IndexString);
		CurrentField = CurrentField.Left(OpenBracketIndex);

		// Get Array Field
		const TArray<TSharedPtr<FJsonValue>>* JsonArray;
		if (JsonObject->TryGetArrayField(CurrentField, JsonArray))
		{
			if (ArrayIndex != -1 && JsonArray->Num() > ArrayIndex)
			{
				InnerObject = (*JsonArray)[ArrayIndex]->AsObject();
			}
		}
	}
	// Non array field
	else if (JsonObject->HasField(CurrentField))
	{
		InnerObject = JsonObject->GetObjectField(CurrentField);
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