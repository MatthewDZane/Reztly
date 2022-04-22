// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Http.h"

#include "ReztlyResponse.generated.h"


DECLARE_DYNAMIC_DELEGATE_TwoParams(FResponseDelegate, FString,
								   ResponseContentString, bool, bWasSuccessful);


/**
 * 
 */
UCLASS()
class REZTLY_API UReztlyResponse : public UObject
{
	GENERATED_BODY()

public:
	UReztlyResponse();

	UFUNCTION(BlueprintCallable)
		FResponseDelegate GetDelegate();
	UFUNCTION(BlueprintCallable)
		void SetDelegate(FResponseDelegate DelegateIn);

	void OnResponse(FHttpRequestPtr Request, FHttpResponsePtr Response,
				    bool bWasSuccessful) const;


private:
	UPROPERTY()
		FResponseDelegate Delegate;

	
	
};
