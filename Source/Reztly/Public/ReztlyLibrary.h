// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Http.h"
#include "JsonParser.h"

#include "ReztlyResponse.h"
#include "G2Node.h"

#include "ReztlyLibrary.generated.h"



/**
 * 
 */
UCLASS()
class REZTLY_API UReztly : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	static const int TBD_DEVICE_TYPE_ID = 83;
	static const int TBD_SITE_ID = 67;
	
	UFUNCTION(BlueprintCallable)
		static void RequestBearerToken(FString G2Username, FString G2Password,
			                           FString G2APIUrl, 
									   FResponseDelegate OnBearerTokenResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestSnapshotRange(FString G2APIUrl, FString G2BearerToken,
								  FResponseDelegate OnSnapshotRangeResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestSnapshot(int SnapshotID, FString G2APIUrl, 
								    FString G2BearerToken,
									FResponseDelegate OnSnapshotResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestUE4NautilusData(
			FString UE4NautilusDataUtilsUrl, 
			FResponseDelegate OnUE4NautliusDataResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestNetboxDevicesGet(FString NetboxUrl, FString NetboxToken,
                                      FResponseDelegate OnNetboxDataResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestNetboxDevicesPost(TArray<UG2Node*> NewNodes, FString NetboxUrl,
									  FString NetboxToken, 
							          FResponseDelegate OnNetboxPostResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestNetboxDevicesPatch(TArray<UG2Node*> Nodes, TArray<int> NetboxIDs,
							           FString NetboxUrl, FString NetboxToken,
							           FResponseDelegate OnNetboxPatchResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestNetboxSitesGet(FString NetboxUrl, FString NetboxToken,
									FResponseDelegate OnNetboxDataResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestNetboxSitePatch(FSite Site, FString NetboxUrl, FString NetboxToken,
								   FResponseDelegate OnNetboxPatchResponse);
						    
};
