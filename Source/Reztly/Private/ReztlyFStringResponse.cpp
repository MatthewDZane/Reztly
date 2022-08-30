// Fill out your copyright notice in the Description page of Project Settings.


#include "ReztlyFStringResponse.h"


UReztlyFStringResponse::UReztlyFStringResponse()
{
	
}

FStringResponseDelegate UReztlyFStringResponse::GetDelegate()
{
	return Delegate;
}

void UReztlyFStringResponse::SetDelegate(FStringResponseDelegate DelegateIn)
{
	Delegate = DelegateIn;
}

void UReztlyFStringResponse::OnResponse(FHttpRequestPtr Request,
										FHttpResponsePtr Response,
										bool bWasSuccessful) const 
{
	AsyncTask(ENamedThreads::AnyBackgroundHiPriTask, 
		[Response, bWasSuccessful, this] ()
	{
		const FString ResponseBody = Response->GetContentAsString();
		
		if (!Delegate.ExecuteIfBound(ResponseBody, bWasSuccessful))
		{
			UE_LOG(LogTemp, Warning, TEXT("Delegate was NOT able to execute."));
		}
	});
}
