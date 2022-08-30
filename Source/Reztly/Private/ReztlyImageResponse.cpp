// Fill out your copyright notice in the Description page of Project Settings.


#include "ReztlyImageResponse.h"


UReztlyImageResponse::UReztlyImageResponse()
{
	
}

FImageResponseDelegate UReztlyImageResponse::GetDelegate()
{
	return Delegate;
}

void UReztlyImageResponse::SetDelegate(FImageResponseDelegate DelegateIn)
{
	Delegate = DelegateIn;
}

void UReztlyImageResponse::OnResponse(FHttpRequestPtr Request,
								 FHttpResponsePtr Response,
								 bool bWasSuccessful) const {

	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask, [Response,
																	 bWasSuccessful,
																	 this] ()
	{
		const TArray<uint8> ResponseBody = Response->GetContent();
		
		if (!Delegate.ExecuteIfBound(ResponseBody, bWasSuccessful))
		{
			UE_LOG(LogTemp, Warning, TEXT("Delegate was NOT able to execute."));
		}
	});
}
