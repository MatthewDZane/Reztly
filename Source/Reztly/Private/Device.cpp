#include "Device.h"

UDevice::UDevice() {

}

UDevice::~UDevice() {

}

FString UDevice::NodeIDsToString(TArray<FString> NodeIDsIn)
{
	FString NodeIDsString = "";
	for (int i = 0; i < NodeIDsIn.Num(); i++)
	{
		NodeIDsString += NodeIDsIn[i];
		if (i != NodeIDsIn.Num() - 1)
		{
			NodeIDsString += ",";
		}
	}
	return NodeIDsString;
}
