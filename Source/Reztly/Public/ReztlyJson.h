// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReztlyJson.generated.h"

/**
 * 
 */
UCLASS()
class REZTLY_API UReztlyJson : public UObject
{
	GENERATED_BODY()

public:
	UReztlyJson();
	
	TSharedPtr<FJsonObject> GetJson();

	void SetJson(TSharedPtr<FJsonObject> JsonIn);

private:
	TSharedPtr<FJsonObject> Json = nullptr;
};
