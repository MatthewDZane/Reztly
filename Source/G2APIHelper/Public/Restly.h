// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Http.h"
#include "JsonParser.h"

#include "RestlyResponse.h"
#include "G2Node.h"

#include "Restly.generated.h"



/**
 * 
 */
UCLASS()
class G2APIHELPER_API URestly : public UObject
{
	GENERATED_BODY()
	
public:
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
		static void RequestNetboxData(FString NetboxUrl, FString NetboxToken,
                                      FResponseDelegate OnNetboxDataResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestNetboxPut(TArray<UG2Node*> Nodes,
									 TArray<int> NetboxIDs,
									 FString NetboxUrl, FString NetboxToken,
									 FResponseDelegate OnNetboxPutResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestNetboxPost(TArray<UG2Node*> NewNodes,
									  int HeighestNetboxId, FString NetboxUrl,
									  FString NetboxToken, 
							          FResponseDelegate OnNetboxPostResponse);

	UFUNCTION(BlueprintCallable)
		static void RequestNetboxPatch(UG2Node* Node, int NetboxID,
							           FString NetboxUrl, FString NetboxToken,
							           FResponseDelegate OnNetboxPatchResponse);
						    
};
