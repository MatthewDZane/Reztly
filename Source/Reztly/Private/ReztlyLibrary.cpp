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
		UReztlyResponse* UE4NautilusDataResponse = NewObject<UReztlyResponse>();
		UE4NautilusDataResponse->SetDelegate(OnUE4NautilusDataResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			UE4NautilusDataResponse, &UReztlyResponse::OnResponse);

		Request->SetURL(UE4NautilusDataUtilsUrl);

		Request->SetVerb("GET");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");

		UE_LOG(LogTemp, Warning, TEXT("GET %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestNetboxDevicesGet(FString NetboxUrl, FString NetboxToken,
					            FResponseDelegate OnNetboxDataResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[NetboxUrl, NetboxToken, OnNetboxDataResponse] ()
	{
		UReztlyResponse* NetboxDevicesGetResponse = NewObject<UReztlyResponse>();
		NetboxDevicesGetResponse->SetDelegate(OnNetboxDataResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			NetboxDevicesGetResponse, &UReztlyResponse::OnResponse);

		FString URL = NetboxUrl + "/dcim/devices/?limit=0&offset=0";
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

void UReztly::RequestNetboxDevicesPost(TArray<UG2Node*> Nodes,
						        FString NetboxUrl, FString NetboxToken, 
					            FResponseDelegate OnNetboxPostResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[Nodes, NetboxUrl, NetboxToken,	OnNetboxPostResponse] ()
	{
		UReztlyResponse* NetboxDevicesPostResponse = NewObject<UReztlyResponse>();
		NetboxDevicesPostResponse->SetDelegate(OnNetboxPostResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			NetboxDevicesPostResponse, &UReztlyResponse::OnResponse);
		
		Request->SetURL(NetboxUrl + "dcim/devices");

		Request->SetVerb("POST");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		
		FString AuthorizationValue = "Token " + NetboxToken;
		Request->SetHeader("Authorization", AuthorizationValue);

			
		FString RequestBodyString = "[";
		for (int i = 0; i < Nodes.Num(); i++) {
			UG2Node* Node = Nodes[i];
			FString NodeBodyString =  "{\"name\":\"" + Node->Name + "\"device_type\":" +
				FString::FromInt(TBD_DEVICE_TYPE_ID) + ",\"site\":" +
				FString::FromInt(TBD_SITE_ID) + ",\"custom_fields\":{\"node_id\":\"" +
				Node->ID + "\",\"info\":\"" + Node->Info + "\",\"mtu\":" +
				FString::FromInt(Node->MTU) + ",\"primary\":" +
				(Node->Primary ? FString("true") : FString("false")) +
				",\"g2_node_id\":\"" + Node->ID + "\"}}";

			RequestBodyString += NodeBodyString;

			if (i < Nodes.Num() - 1)
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

void UReztly::RequestNetboxDevicesPatch(TArray<UDevice*> Devices,
								 FString NetboxUrl, FString NetboxToken,
								 FResponseDelegate OnNetboxPatchResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[Devices, NetboxUrl, NetboxToken, OnNetboxPatchResponse] ()
	{
		UReztlyResponse* NetboxDevicesPatchResponse = NewObject<UReztlyResponse>();
		NetboxDevicesPatchResponse->SetDelegate(OnNetboxPatchResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			NetboxDevicesPatchResponse, &UReztlyResponse::OnResponse);
		
		Request->SetURL(NetboxUrl + "/dcim/devices/");

		Request->SetVerb("PATCH");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
	
		FString AuthorizationValue = "Token " + NetboxToken;
		Request->SetHeader("Authorization", AuthorizationValue);

		FString RequestBodyString = "[";

		for (int i = 0; i < Devices.Num(); i++)
		{
			UDevice* Device = Devices[i];
			FString NodeBodyString = "{\"id\":" + FString::FromInt(Device->ID) +
					",\"name\":\"" + Device->Name + "\",\"custom_fields\":{\"info\":\"" +
					Device->Info + "\",\"mtu\":" + FString::FromInt(Device->MTU)
					+ ",\"primary\":" + (Device->Primary ? FString("true") : FString("false")) +
					",\"node_ids\":\"" + UDevice::NodeIDsToString(Device->NodeIDs) + "\"}}";

			RequestBodyString += NodeBodyString;

			if (i < Devices.Num() - 1)
			{
				RequestBodyString += ",";
			}
		}
		RequestBodyString += "]";
	
		Request->SetContentAsString(RequestBodyString);

		UE_LOG(LogTemp, Warning, TEXT("PATCH %s"), *Request->GetURL());
		UE_LOG(LogTemp, Warning, TEXT("PATCH %s"), *RequestBodyString);

		Request->ProcessRequest();
	});
}

void UReztly::RequestNetboxSitesGet(FString NetboxUrl, FString NetboxToken,
								FResponseDelegate OnNetboxDataResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[NetboxUrl, NetboxToken, OnNetboxDataResponse] ()
	{
		UReztlyResponse* NetboxSitesGetResponse = NewObject<UReztlyResponse>();
		NetboxSitesGetResponse->SetDelegate(OnNetboxDataResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			NetboxSitesGetResponse, &UReztlyResponse::OnResponse);

		FString URL = NetboxUrl + "/dcim/sites/?limit=0&offset=0";
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

void UReztly::RequestNetboxSitePatch(USite* Site, FString NetboxUrl, FString NetboxToken,
								 FResponseDelegate OnNetboxPatchResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[Site, NetboxUrl, NetboxToken, OnNetboxPatchResponse] ()
	{
		UReztlyResponse* NetboxDevicesPatchResponse = NewObject<UReztlyResponse>();
		NetboxDevicesPatchResponse->SetDelegate(OnNetboxPatchResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			NetboxDevicesPatchResponse, &UReztlyResponse::OnResponse);
		
		Request->SetURL(NetboxUrl + "/dcim/sites/");

		Request->SetVerb("PATCH");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		
		FString AuthorizationValue = "Token " + NetboxToken;
		Request->SetHeader("Authorization", AuthorizationValue);

		FString RequestBodyString = "[{\"id\":" + FString::FromInt(Site->ID) + ",\"latitude\":" +
			    FString::SanitizeFloat(Site->Latitude) + ",\"longitude\":" +
			    FString::SanitizeFloat(Site->Longitude) + "}]";
		
		Request->SetContentAsString(RequestBodyString);

		UE_LOG(LogTemp, Warning, TEXT("PATCH %s"), *Request->GetURL());
		UE_LOG(LogTemp, Warning, TEXT("PATCH %s"), *RequestBodyString);
		
		Request->ProcessRequest();
	});
}
