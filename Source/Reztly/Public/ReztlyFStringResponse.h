// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Http.h"

#include "ReztlyFStringResponse.generated.h"


DECLARE_DYNAMIC_DELEGATE_TwoParams(FStringResponseDelegate, FString,
								   ResponseContentString, bool, bWasSuccessful);


/**
 * 
 */
UCLASS()
class REZTLY_API UReztlyFStringResponse : public UObject
{
	GENERATED_BODY()

public:
	UReztlyFStringResponse();

	UFUNCTION(BlueprintCallable)
		FStringResponseDelegate GetDelegate();
	UFUNCTION(BlueprintCallable)
		void SetDelegate(FStringResponseDelegate DelegateIn);

	void OnResponse(FHttpRequestPtr Request, FHttpResponsePtr Response,
				    bool bWasSuccessful) const;


private:
	UPROPERTY()
		FStringResponseDelegate Delegate;
};
