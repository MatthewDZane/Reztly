// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Http.h"

#include "ReztlyImageResponse.generated.h"


DECLARE_DYNAMIC_DELEGATE_TwoParams(FImageResponseDelegate, TArray<uint8>,
								   ResponseContentString, bool, bWasSuccessful);


/**
 * 
 */
UCLASS()
class REZTLY_API UReztlyImageResponse : public UObject
{
	GENERATED_BODY()

public:
	UReztlyImageResponse();

	UFUNCTION(BlueprintCallable)
		FImageResponseDelegate GetDelegate();
	UFUNCTION(BlueprintCallable)
		void SetDelegate(FImageResponseDelegate DelegateIn);

	void OnResponse(FHttpRequestPtr Request, FHttpResponsePtr Response,
				    bool bWasSuccessful) const;


private:
	UPROPERTY()
		FImageResponseDelegate Delegate;
};
