// Fill out your copyright notice in the Description page of Project Settings.


#include "ReztlyLibrary.h"

void UReztly::RequestBearerToken(
	FString G2Username, FString G2Password, FString G2APIUrl,
    FStringResponseDelegate OnBearerTokenResponseDelegate)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[G2Username, G2Password,
		G2APIUrl, OnBearerTokenResponseDelegate] ()
	{
		UReztlyFStringResponse* BearerTokenResponse = NewObject<UReztlyFStringResponse>();
		BearerTokenResponse->SetDelegate(OnBearerTokenResponseDelegate);
		
		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

		FString G2LoginURL = G2APIUrl + "/api/auth/login";
		Request->SetURL(G2LoginURL);

		Request->SetVerb("POST");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		Request->OnProcessRequestComplete().BindUObject(BearerTokenResponse,
												&UReztlyFStringResponse::OnResponse);

		TSharedPtr<FJsonObject> RequestBody = MakeShareable(new FJsonObject);
		RequestBody->SetStringField("username", G2Username);
		RequestBody->SetStringField("password", G2Password);

		FString RequestBodyString;
		TSharedRef<TJsonWriter<>> Writer =
								TJsonWriterFactory<>::Create(&RequestBodyString);
		FJsonSerializer::Serialize(RequestBody.ToSharedRef(), Writer);

		Request->SetContentAsString(RequestBodyString);

		UE_LOG(LogTemp, Log, TEXT("POST %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestSnapshotRange(
	FString G2APIUrl, FString G2BearerToken,
	FStringResponseDelegate OnSnapshotRangeResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[G2APIUrl, G2BearerToken, OnSnapshotRangeResponse] ()
	{
		UReztlyFStringResponse* SnapshotRangeResponse = NewObject<UReztlyFStringResponse>();
		SnapshotRangeResponse->SetDelegate(OnSnapshotRangeResponse);
			
		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

		Request->OnProcessRequestComplete().BindUObject(
			SnapshotRangeResponse,
			&UReztlyFStringResponse::OnResponse);

		FString G2SnapshotRangeURL = G2APIUrl + "api/tsrange/-1/0";
		Request->SetURL(G2SnapshotRangeURL);

		Request->SetVerb("GET");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		Request->SetHeader("Authorization", "Bearer " + G2BearerToken);

		UE_LOG(LogTemp, Log, TEXT("GET %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestSnapshot(
	int SnapshotID, FString G2APIUrl, FString G2BearerToken,
	FStringResponseDelegate OnSnapshotResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[SnapshotID, G2APIUrl, G2BearerToken, OnSnapshotResponse] ()
	{
		UReztlyFStringResponse* SnapshotResponse = NewObject<UReztlyFStringResponse>();
		SnapshotResponse->SetDelegate(OnSnapshotResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

		Request->OnProcessRequestComplete().BindUObject(
			SnapshotResponse, &UReztlyFStringResponse::OnResponse);

		FString SnapshotRequestURL = G2APIUrl + "api/snapshot?id=" + FString::FromInt(SnapshotID);
		Request->SetURL(SnapshotRequestURL);

		Request->SetVerb("GET");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		Request->SetHeader("Authorization", "Bearer " + G2BearerToken);

		UE_LOG(LogTemp, Log, TEXT("GET %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestUE4NautilusData(
	FString UE4NautilusDataUtilsUrl, 
	FStringResponseDelegate OnUE4NautilusDataResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[UE4NautilusDataUtilsUrl, OnUE4NautilusDataResponse] ()
	{
		UReztlyFStringResponse* UE4NautilusDataResponse = NewObject<UReztlyFStringResponse>();
		UE4NautilusDataResponse->SetDelegate(OnUE4NautilusDataResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			UE4NautilusDataResponse, &UReztlyFStringResponse::OnResponse);

		Request->SetURL(UE4NautilusDataUtilsUrl);

		Request->SetVerb("GET");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");

		UE_LOG(LogTemp, Log, TEXT("GET %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestNetboxRegionsGet(
	FString NetboxUrl, FString NetboxToken,
	FStringResponseDelegate OnNetboxRegionsResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[NetboxUrl, NetboxToken, OnNetboxRegionsResponse]()
		{
			UReztlyFStringResponse* NetboxRegionsGetResponse = NewObject<UReztlyFStringResponse>();
			NetboxRegionsGetResponse->SetDelegate(OnNetboxRegionsResponse);

			FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

			Request->OnProcessRequestComplete().BindUObject(
				NetboxRegionsGetResponse, &UReztlyFStringResponse::OnResponse);

			FString URL = NetboxUrl + "/dcim/regions/?limit=0&offset=0";
			Request->SetURL(URL);

			Request->SetVerb("GET");
			Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
			Request->SetHeader("Content-Type", "application/json");

			FString AuthorizationValue = "Token " + NetboxToken;
			Request->SetHeader("Authorization", AuthorizationValue);

			UE_LOG(LogTemp, Log, TEXT("GET %s"), *Request->GetURL());

			Request->ProcessRequest();
		});
}

void UReztly::RequestNetboxRegionPatch(
	FRegionStruct Region, FString NetboxUrl, FString NetboxToken,
	FStringResponseDelegate OnNetboxPatchResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[Region, NetboxUrl, NetboxToken, OnNetboxPatchResponse]()
		{
			UReztlyFStringResponse* NetboxDevicesPatchResponse = NewObject<UReztlyFStringResponse>();
			NetboxDevicesPatchResponse->SetDelegate(OnNetboxPatchResponse);

			FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

			Request->OnProcessRequestComplete().BindUObject(
				NetboxDevicesPatchResponse, &UReztlyFStringResponse::OnResponse);

			Request->SetURL(NetboxUrl + "/dcim/sites/");

			Request->SetVerb("PATCH");
			Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
			Request->SetHeader("Content-Type", "application/json");

			FString AuthorizationValue = "Token " + NetboxToken;
			Request->SetHeader("Authorization", AuthorizationValue);

			FString RequestBodyString = "[{\"id\":" + FString::FromInt(Region.Id) + 
				",\"custom_fields\":{" + 
					"\"region_latitude\":" + Region.Custom_fields.Region_latitude + 
					",\"region_longitude\":" + Region.Custom_fields.Region_longitude + "}}]";

			Request->SetContentAsString(RequestBodyString);

			UE_LOG(LogTemp, Log, TEXT("PATCH %s"), *Request->GetURL());
			UE_LOG(LogTemp, Log, TEXT("PATCH %s"), *RequestBodyString);

			Request->ProcessRequest();
		});
}

void UReztly::RequestNetboxSitesGet(
	FString NetboxUrl, FString NetboxToken,
	FStringResponseDelegate OnNetboxSitesGetResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[NetboxUrl, NetboxToken, OnNetboxSitesGetResponse]()
		{
			UReztlyFStringResponse* NetboxSitesGetResponse = NewObject<UReztlyFStringResponse>();
			NetboxSitesGetResponse->SetDelegate(OnNetboxSitesGetResponse);

			FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

			Request->OnProcessRequestComplete().BindUObject(
				NetboxSitesGetResponse, &UReztlyFStringResponse::OnResponse);

			FString URL = NetboxUrl + "/dcim/sites/?limit=0&offset=0";
			Request->SetURL(URL);

			Request->SetVerb("GET");
			Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
			Request->SetHeader("Content-Type", "application/json");

			FString AuthorizationValue = "Token " + NetboxToken;
			Request->SetHeader("Authorization", AuthorizationValue);

			UE_LOG(LogTemp, Log, TEXT("GET %s"), *Request->GetURL());

			Request->ProcessRequest();
		});
}

void UReztly::RequestNetboxSitePatch(
	FSiteStruct Site, FString NetboxUrl, FString NetboxToken,
	FStringResponseDelegate OnNetboxPatchResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[Site, NetboxUrl, NetboxToken, OnNetboxPatchResponse]()
		{
			UReztlyFStringResponse* NetboxDevicesPatchResponse = NewObject<UReztlyFStringResponse>();
			NetboxDevicesPatchResponse->SetDelegate(OnNetboxPatchResponse);

			FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

			Request->OnProcessRequestComplete().BindUObject(
				NetboxDevicesPatchResponse, &UReztlyFStringResponse::OnResponse);

			Request->SetURL(NetboxUrl + "/dcim/sites/");

			Request->SetVerb("PATCH");
			Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
			Request->SetHeader("Content-Type", "application/json");

			FString AuthorizationValue = "Token " + NetboxToken;
			Request->SetHeader("Authorization", AuthorizationValue);

			FString RequestBodyString = "[{\"id\":" + FString::FromInt(Site.Id) + ",\"latitude\":" +
				FString::SanitizeFloat(Site.Latitude) + ",\"longitude\":" +
				FString::SanitizeFloat(Site.Longitude) + "}]";

			Request->SetContentAsString(RequestBodyString);

			UE_LOG(LogTemp, Log, TEXT("PATCH %s"), *Request->GetURL());
			UE_LOG(LogTemp, Log, TEXT("PATCH %s"), *RequestBodyString);

			Request->ProcessRequest();
		});
}

void UReztly::RequestNetboxDevicesGet(
	FString NetboxUrl, FString NetboxToken,
	FStringResponseDelegate OnNetboxDataResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[NetboxUrl, NetboxToken, OnNetboxDataResponse] ()
	{
		UReztlyFStringResponse* NetboxDevicesGetResponse = NewObject<UReztlyFStringResponse>();
		NetboxDevicesGetResponse->SetDelegate(OnNetboxDataResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			NetboxDevicesGetResponse, &UReztlyFStringResponse::OnResponse);

		FString URL = NetboxUrl + "/dcim/devices/?limit=0&offset=0";
		Request->SetURL(URL);

		Request->SetVerb("GET");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
		
		FString AuthorizationValue = "Token " + NetboxToken;
		Request->SetHeader("Authorization", AuthorizationValue);
		
		UE_LOG(LogTemp, Log, TEXT("GET %s"), *Request->GetURL());

		Request->ProcessRequest();
	});
}

void UReztly::RequestNetboxDevicesPost(
	TArray<FDeviceStruct> Devices, FString NetboxUrl, FString NetboxToken, 
	FStringResponseDelegate OnNetboxPostResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[Devices, NetboxUrl, NetboxToken, OnNetboxPostResponse]()
		{
			UReztlyFStringResponse* NetboxDevicesPostResponse = NewObject<UReztlyFStringResponse>();
			NetboxDevicesPostResponse->SetDelegate(OnNetboxPostResponse);

			FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

			Request->OnProcessRequestComplete().BindUObject(
				NetboxDevicesPostResponse, &UReztlyFStringResponse::OnResponse);

			Request->SetURL(NetboxUrl + "/dcim/devices/");

			Request->SetVerb("POST");
			Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
			Request->SetHeader("Content-Type", "application/json");

			FString AuthorizationValue = "Token " + NetboxToken;
			Request->SetHeader("Authorization", AuthorizationValue);

			FString RequestBodyString = "[";
			for (int i = 0; i < Devices.Num(); i++) {
				FDeviceStruct Device = Devices[i];
				FString NodeBodyString = 
					"{\"name\":\"" + Device.Name + 
					"\",\"device_type\":" + FString::FromInt(TBD_DEVICE_TYPE_ID) + 
					",\"device_role\":" + FString::FromInt(TBD_DEVICE_ROLE) + 
					",\"site\":" + FString::FromInt(Device.Site.Id) +
					",\"custom_fields\":{" + 
						"\"info\":\"" + Device.Custom_fields.Info + 
						"\",\"mtu\":" + FString::FromInt(Device.Custom_fields.Mtu) + 
						",\"primary\":" + (Device.Custom_fields.Primary ? "true" : "false") +
					"}}";

				RequestBodyString += NodeBodyString;

				if (i < Devices.Num() - 1)
				{
					RequestBodyString += ",";
				}
			}
			RequestBodyString += "]";

			Request->SetContentAsString(RequestBodyString);

			UE_LOG(LogTemp, Log, TEXT("POST %s"), *Request->GetURL());
			UE_LOG(LogTemp, Log, TEXT("POST %s"), *RequestBodyString);

			Request->ProcessRequest();
		});
}

void UReztly::RequestNetboxDevicesPatch(
	TArray<FDeviceStruct> Devices, FString NetboxUrl, FString NetboxToken,
	FStringResponseDelegate OnNetboxPatchResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[Devices, NetboxUrl, NetboxToken, OnNetboxPatchResponse] ()
	{
		UReztlyFStringResponse* NetboxDevicesPatchResponse = NewObject<UReztlyFStringResponse>();
		NetboxDevicesPatchResponse->SetDelegate(OnNetboxPatchResponse);

		FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
		
		Request->OnProcessRequestComplete().BindUObject(
			NetboxDevicesPatchResponse, &UReztlyFStringResponse::OnResponse);
		
		Request->SetURL(NetboxUrl + "/dcim/devices/");

		Request->SetVerb("PATCH");
		Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
		Request->SetHeader("Content-Type", "application/json");
	
		FString AuthorizationValue = "Token " + NetboxToken;
		Request->SetHeader("Authorization", AuthorizationValue);

		FString RequestBodyString = "[";

		for (int i = 0; i < Devices.Num(); i++)
		{
			FDeviceStruct Device = Devices[i];
			FString NodeBodyString = 
				"{\"id\":" + FString::FromInt(Device.Id) +
				",\"name\":\"" + Device.Name + 
				"\",\"custom_fields\":{" +
					"\"info\":\"" + Device.Custom_fields.Info + 
					"\",\"mtu\":" + FString::FromInt(Device.Custom_fields.Mtu) + 
					",\"primary\":" + (Device.Custom_fields.Primary ? "true" : "false") +
				"}}";

			RequestBodyString += NodeBodyString;

			if (i < Devices.Num() - 1)
			{
				RequestBodyString += ",";
			}
		}
		RequestBodyString += "]";
	
		Request->SetContentAsString(RequestBodyString);

		UE_LOG(LogTemp, Log, TEXT("PATCH %s"), *Request->GetURL());
		UE_LOG(LogTemp, Log, TEXT("PATCH %s"), *RequestBodyString);

		Request->ProcessRequest();
	});
}

void UReztly::RequestImageGet(
	FString ImageUrl, FImageResponseDelegate OnImageGetResponse)
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask,
		[ImageUrl, OnImageGetResponse]()
		{
			UReztlyImageResponse* ImageGetResponse = NewObject<UReztlyImageResponse>();
			ImageGetResponse->SetDelegate(OnImageGetResponse);

			FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

			Request->OnProcessRequestComplete().BindUObject(
				ImageGetResponse, &UReztlyImageResponse::OnResponse);

			FString URL = ImageUrl;
			Request->SetURL(URL);

			Request->SetVerb("GET");
			Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");

			UE_LOG(LogTemp, Log, TEXT("GET %s"), *Request->GetURL());

			Request->ProcessRequest();
		});
}
