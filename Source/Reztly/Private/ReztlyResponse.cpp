// Fill out your copyright notice in the Description page of Project Settings.


#include "ReztlyResponse.h"


UReztlyResponse::UReztlyResponse()
{
	
}

FResponseDelegate UReztlyResponse::GetDelegate()
{
	return Delegate;
}

void UReztlyResponse::SetDelegate(FResponseDelegate DelegateIn)
{
	Delegate = DelegateIn;
}

void UReztlyResponse::OnResponse(FHttpRequestPtr Request,
								 FHttpResponsePtr Response,
								 bool bWasSuccessful) const {

	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask, [Response,
																	 bWasSuccessful,
																	 this] ()
	{
		const FString ResponseBody = Response->GetContentAsString();
		
		if (!Delegate.ExecuteIfBound(ResponseBody, bWasSuccessful))
		{
			UE_LOG(LogTemp, Warning, TEXT("Delegate was NOT able to execute."));
		}
	});
}
