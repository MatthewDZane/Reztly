// Fill out your copyright notice in the Description page of Project Settings.


#include "ReztlyLibrary.h"

void UReztly::RequestBearerToken(FString G2Username, FString G2Password,
                                 FString G2APIUrl,
                                 FResponseDelegate OnBearerTokenResponseDelegate)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[G2Username, G2Password,
		G2APIUrl, OnBearerTokenResponseDelegate] ()
	{
		UReztlyResponse* BearerTokenResponse = NewObject<UReztlyResponse>();
		BearerTokenResponse->SetDelegate(OnBearerTokenResponseDelegate);
		
		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

		FString G2LoginURL = G2APIUrl + "/api/auth/login";
		Request->SetURL(G2LoginURL);

		Request->SetVerb("POST");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		Request->OnProcessRequestComplete().BindUObject(BearerTokenResponse,
												&UReztlyResponse::OnResponse);

		TSharedPtr<FJsonObject> RequestBody = MakeShareable(new FJsonObject);
		RequestBody->SetStringField("username", G2Username);
		RequestBody->SetStringField("password", G2Password);

		FString RequestBodyString;
		TSharedRef<TJsonWriter<>> Writer =
								TJsonWriterFactory<>::Create(&RequestBodyString);
		FJsonSerializer::Serialize(RequestBody.ToSharedRef(), Writer);

		Request->SetContentAsString(RequestBodyString);

		UE_LOG(LogTemp, Warning, TEXT("POST %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestSnapshotRange(FString G2APIUrl, FString G2BearerToken,
								   FResponseDelegate OnSnapshotRangeResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[G2APIUrl, G2BearerToken, OnSnapshotRangeResponse] ()
	{
		UReztlyResponse* SnapshotRangeResponse = NewObject<UReztlyResponse>();
		SnapshotRangeResponse->SetDelegate(OnSnapshotRangeResponse);
			
		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

		Request->OnProcessRequestComplete().BindUObject(
			SnapshotRangeResponse,
			&UReztlyResponse::OnResponse);

		FString G2SnapshotRangeURL = G2APIUrl + "api/tsrange/-1/0";
		Request->SetURL(G2SnapshotRangeURL);

		Request->SetVerb("GET");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		Request->SetHeader("Authorization", "Bearer " + G2BearerToken);

		UE_LOG(LogTemp, Warning, TEXT("GET %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestSnapshot(int SnapshotID, FString G2APIUrl, 
							  FString G2BearerToken,
							  FResponseDelegate OnSnapshotResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[SnapshotID, G2APIUrl, G2BearerToken, OnSnapshotResponse] ()
	{
		UReztlyResponse* SnapshotResponse = NewObject<UReztlyResponse>();
		SnapshotResponse->SetDelegate(OnSnapshotResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

		Request->OnProcessRequestComplete().BindUObject(
			SnapshotResponse, &UReztlyResponse::OnResponse);

		FString SnapshotRequestURL = G2APIUrl + "api/snapshot?id=" + FString::FromInt(SnapshotID);
		Request->SetURL(SnapshotRequestURL);

		Request->SetVerb("GET");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		Request->SetHeader("Authorization", "Bearer " + G2BearerToken);

		UE_LOG(LogTemp, Warning, TEXT("GET %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestUE4NautilusData(FString UE4NautilusDataUtilsUrl, 
							         FResponseDelegate OnUE4NautilusDataResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[UE4NautilusDataUtilsUrl, OnUE4NautilusDataResponse] ()
	{
		UReztlyResponse* SnapshotRangeResponse = NewObject<UReztlyResponse>();
		SnapshotRangeResponse->SetDelegate(OnUE4NautilusDataResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			SnapshotRangeResponse, &UReztlyResponse::OnResponse);

		Request->SetURL(UE4NautilusDataUtilsUrl);

		Request->SetVerb("GET");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");

		UE_LOG(LogTemp, Warning, TEXT("GET %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestNetboxData(FString NetboxUrl, FString NetboxToken,
					            FResponseDelegate OnNetboxDataResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[NetboxUrl, NetboxToken, OnNetboxDataResponse] ()
	{
		UReztlyResponse* SnapshotRangeResponse = NewObject<UReztlyResponse>();
		SnapshotRangeResponse->SetDelegate(OnNetboxDataResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			SnapshotRangeResponse, &UReztlyResponse::OnResponse);

		FString URL = NetboxUrl + "?cf_g2_node=true&limit=0&offset=0";
		Request->SetURL(URL);

		Request->SetVerb("GET");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		
		FString AuthorizationValue = "Token " + NetboxToken;
		Request->SetHeader("Authorization", AuthorizationValue);
		
		UE_LOG(LogTemp, Warning, TEXT("GET %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestNetboxPut(TArray<UG2Node*> Nodes, TArray<int> NetboxIDs,
							   FString NetboxUrl, FString NetboxToken,
							   FResponseDelegate OnNetboxPutResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[Nodes, NetboxIDs, NetboxUrl, NetboxToken, OnNetboxPutResponse] ()
	{
		UReztlyResponse* SnapshotRangeResponse = NewObject<UReztlyResponse>();
		SnapshotRangeResponse->SetDelegate(OnNetboxPutResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			SnapshotRangeResponse, &UReztlyResponse::OnResponse);

		FString URL = NetboxUrl;
		Request->SetURL(URL);

		Request->SetVerb("PUT");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		
		FString AuthorizationValue = "Token " + NetboxToken;
		Request->SetHeader("Authorization", AuthorizationValue);

		FString RequestBodyString = "[";

		for (int i = 0; i < Nodes.Num(); i++)
		{
			UG2Node* Node = Nodes[i];
			int NetboxID = NetboxIDs[i];
			FString NodeBodyString = "{\"id\":" + FString::FromInt(NetboxID) +
					",\"name\":\"" + Node->ID + "\",\"slug\":\"" + Node->ID +
					"\",\"custom_fields\":{\"g2_node\":true,\"g2_node_name\":\"" +
					Node->GetName() + "\",\"info\":\"" + Node->Info +
					"\",\"ip\":\"" + Node->IP + "\",\"latitude\":\"" +
					FString::SanitizeFloat(Node->Latitude) +
					"\",\"longitude\":\"" + FString::SanitizeFloat(Node->Longitude) +
					"\",\"mtu\":" + FString::FromInt(Node->MTU) +
					",\"primary\":" +
					(Node->Primary ? FString("true") : FString("false")) +
					",\"node_id\":\"" + Node->ID + "\",\"override_location\":false}}";

			RequestBodyString += NodeBodyString;

			if (i < Nodes.Num() - 1)
			{
				RequestBodyString += ",";
			}
		}
		RequestBodyString += "]";
		
		Request->SetContentAsString(RequestBodyString);

		UE_LOG(LogTemp, Warning, TEXT("PUT %s"), *Request->GetURL());
		UE_LOG(LogTemp, Warning, TEXT("%s"), *RequestBodyString);

		Request->ProcessRequest();
	});
}

void UReztly::RequestNetboxPost(TArray<UG2Node*> NewNodes, int HeighestNetboxId,
						        FString NetboxUrl, FString NetboxToken, 
					            FResponseDelegate OnNetboxPostResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[NewNodes, HeighestNetboxId, NetboxUrl, NetboxToken,
		OnNetboxPostResponse] ()
	{
		UReztlyResponse* SnapshotRangeResponse = NewObject<UReztlyResponse>();
		SnapshotRangeResponse->SetDelegate(OnNetboxPostResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			SnapshotRangeResponse, &UReztlyResponse::OnResponse);
		
		Request->SetURL(NetboxUrl);

		Request->SetVerb("POST");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		
		FString AuthorizationValue = "Token " + NetboxToken;
		Request->SetHeader("Authorization", AuthorizationValue);

			
		FString RequestBodyString = "[";
		for (int i = 0; i < NewNodes.Num(); i++) {
			UG2Node* Node = NewNodes[i];
			FString NodeBodyString =  "{\"site\":" +
				FString::FromInt(HeighestNetboxId + i) + ",\"name\":\"" +
				Node->ID + "\",\"slug\":\"" + Node->ID +
				"\",\"custom_fields\":{\"g2_node\":true,\"node_id\":\"" +
				Node->ID+ "\",\"info\":\"" + Node->Info +  "\",\"ip\":\"" +
				Node->IP+ "\",\"latitude\":\"" +
				FString::SanitizeFloat(Node->Latitude) + "\",\"longitude\":\"" +
				FString::SanitizeFloat(Node->Longitude) + "\",\"mtu\":" +
				FString::FromInt(Node->MTU) + ",\"primary\":" +
				(Node->Primary ? FString("true") : FString("false")) +
				",\"g2_node_name\":\"" + Node->Name + "\"}}";

			RequestBodyString += NodeBodyString;

			if (i < NewNodes.Num() - 1)
			{
				RequestBodyString += ",";
			}
		}
		RequestBodyString += "]";
		
		Request->SetContentAsString(RequestBodyString);

		UE_LOG(LogTemp, Warning, TEXT("POST %s"), *Request->GetURL());
		UE_LOG(LogTemp, Warning, TEXT("POST %s"), *RequestBodyString);
		
		Request->ProcessRequest();
	});
}

void UReztly::RequestNetboxPatch(UG2Node* Node, int NetboxID,
								 FString NetboxUrl, FString NetboxToken,
								 FResponseDelegate OnNetboxPatchResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[Node, NetboxID, NetboxUrl, NetboxToken, OnNetboxPatchResponse] ()
	{
		UReztlyResponse* SnapshotRangeResponse = NewObject<UReztlyResponse>();
		SnapshotRangeResponse->SetDelegate(OnNetboxPatchResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			SnapshotRangeResponse, &UReztlyResponse::OnResponse);
		
		Request->SetURL(NetboxUrl + "/" + FString::FromInt(NetboxID));

		Request->SetVerb("PATCH");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		
		FString AuthorizationValue = "Token " + NetboxToken;
		Request->SetHeader("Authorization", AuthorizationValue);

		FString RequestBodyString = "{\"site\":" +
				FString::FromInt(NetboxID) + ",\"name\":\"" + Node->ID+
				"\",\"slug\":\"" + Node->ID +
				"\",\"custom_fields\":{\"g2_node\":true,\"node_id\":\"" +
				Node->ID+ "\",\"info\":\"" + Node->Info +  "\",\"ip\":\"" +
				Node->IP+ "\",\"latitude\":\"" +
				FString::SanitizeFloat(Node->Latitude) + "\",\"longitude\":\"" +
				FString::SanitizeFloat(Node->Longitude) + "\",\"mtu\":" +
				FString::FromInt(Node->MTU) + ",\"primary\":" +
				(Node->Primary ? FString("true") : FString("false")) +
				",\"g2_node_name\":\"" + Node->Name + "\"}}";
		
		Request->SetContentAsString(RequestBodyString);

		UE_LOG(LogTemp, Warning, TEXT("POST %s"), *Request->GetURL());
		UE_LOG(LogTemp, Warning, TEXT("POST %s"), *RequestBodyString);
		
		Request->ProcessRequest();
	});
}
