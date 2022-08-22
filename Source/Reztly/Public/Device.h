﻿#pragma once

#include "NetboxDeviceResponse.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Site.h"

#include "Device.generated.h"

/**
 * 
 */
UCLASS()
class REZTLY_API UDevice : public UObject
{
	GENERATED_BODY()
	
public:
	UDevice();
	~UDevice();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Url;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Display;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString IP;

	// Custom Fields
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Info;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MTU;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FString> NodeIDs;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool Primary;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USite* Site;

	FDeviceStruct ToStruct();

	static FString NodeIDsToString(TArray<FString> NodeIDsIn);
};