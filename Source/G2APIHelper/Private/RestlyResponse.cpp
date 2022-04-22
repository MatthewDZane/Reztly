// Fill out your copyright notice in the Description page of Project Settings.


#include "RestlyResponse.h"


URestlyResponse::URestlyResponse()
{
	
}

FResponseDelegate URestlyResponse::GetDelegate()
{
	return Delegate;
}

void URestlyResponse::SetDelegate(FResponseDelegate DelegateIn)
{
	Delegate = DelegateIn;
}

void URestlyResponse::OnResponse(FHttpRequestPtr Request,
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
