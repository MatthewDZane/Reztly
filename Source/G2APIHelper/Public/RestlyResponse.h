// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Http.h"

#include "RestlyResponse.generated.h"


DECLARE_DYNAMIC_DELEGATE_TwoParams(FResponseDelegate, FString,
								   ResponseContentString, bool, bWasSuccessful);


/**
 * 
 */
UCLASS()
class G2APIHELPER_API URestlyResponse : public UObject
{
	GENERATED_BODY()

public:
	URestlyResponse();

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
