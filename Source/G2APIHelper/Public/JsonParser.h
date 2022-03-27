// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "G2SnapshotResponse.h"
#include "UE4Response.h"
#include "TimeStampIDPair.h"
#include "FlowInfo.h"

#include <queue>
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "NetboxResponse.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "JsonParser.generated.h"

/**
 * 
 */
UCLASS()
class G2APIHELPER_API UJsonParser : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	// G2 Snapshot Functions
	UFUNCTION(BlueprintCallable)
	static TArray<FTimeStampIDPair> StringToAvailableSnapshots(FString JsonString);
	
	/**
	* Converts a G2 Snapshot Response FString to a FG2SnapshotResponse struct
	*/
	UFUNCTION(BlueprintCallable)
	static FG2SnapshotResponse StringToG2SnapshotResponse(FString JsonString);
	

	/**
	* Converts a FG2SnapshotResponse to a FJsonObjectWrapper
	*/
	UFUNCTION(BlueprintCallable)
	static FJsonObjectWrapper StructToG2SnapshotObject(FG2SnapshotResponse Response);

	/**
	* Converts a G2 Flow Info String to a FFlowInfo struct
	*/
	UFUNCTION(BlueprintCallable)
	static FFlowInfo StringToFlowInfo(FString JsonString);

	// UE4 Response Functions
	/**
	* Converts a UE4 Response FString to a FUE4Response struct
	*/
	UFUNCTION(BlueprintCallable)
	static FUE4Response StringToUE4Response(FString JsonString);
	
	/**
	* Converts a FUE4Response to a FJsonObjectWrapper
	*/
	UFUNCTION(BlueprintCallable)
	static FJsonObjectWrapper StructToUE4ResponseObject(FUE4Response Response);

	// Netbox Response Functions
	/**
	* Converts a Netbox Response FString to a FNetboxResponse struct
	*/
	UFUNCTION(BlueprintCallable)
	static FNetboxResponse StringToNetboxResponse(FString JsonString);
	
	/**
	* Converts a FNetboxResponse to a FJsonObjectWrapper
	*/
	UFUNCTION(BlueprintCallable)
	static FJsonObjectWrapper StructToNetboxResponseObject(FNetboxResponse Response);

	// Post Response Functions
	/**
	* Converts a Netbox Post or Put Response FString to a TArray of
	* FG2SnapshotResponse struct
	*/
	UFUNCTION(BlueprintCallable)
	static TArray<FResult> StringToResult(FString JsonString);
	
	/**
	* Converts a FResult to a FJsonObjectWrapper
	*/
	UFUNCTION(BlueprintCallable)
	static FJsonObjectWrapper StructToResultObject(FResult Response);

	/**
	* Returns whether the field is in the JsonWrapper. The layers
	* of the path are separated by periods and array elements are specified
	* with square brackets surrounding the index.
	* Ex: "outside[0].middle.inner[3].field"
	*/
	UFUNCTION(BlueprintCallable)
	static bool FindFieldPath(FJsonObjectWrapper JsonWrapper,
							  FString FieldPath);

	/**
	* Returns the String value of the field given in the Json String
	*/
	UFUNCTION(BlueprintCallable)
	static FString GetStringValue(FString JsonString, FString Field);

	/**
	* Returns the Float value of the field given in the Json String
	*/
	UFUNCTION(BlueprintCallable)
	static float GetFloatValue(FString JsonString, FString Field);
	
	/**
	* Returns the Float value of the field given in the Json String
	*/
	UFUNCTION(BlueprintCallable)
	static bool GetBoolValue(FString JsonString, FString Field);

private:
	
	/**
	* Check if the next field in the queue is in the JsonObject, if there
	* are more fields left then recursively check the next fields with
	* the previous field's value
	*/
	static bool FindField(TSharedPtr<FJsonObject> JsonObject,
						  std::queue<FString> Fields);
	
};
