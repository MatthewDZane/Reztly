#include "Device.h"

UDevice::UDevice() {

}

UDevice::~UDevice() {

}

FDeviceStruct UDevice::ToStruct() {
	FDeviceStruct Device;
	Device.Id = ID;
	Device.Url = Url;
	Device.Name = Name;
	Device.Primary_ip.Address = IP;

	Device.Custom_fields.Info = Info;
	Device.Custom_fields.Mtu = MTU;
	Device.Custom_fields.Node_ids = NodeIDsToString(NodeIDs);
	Device.Custom_fields.Primary = Primary;

	if (Site != nullptr) {
		Device.Site.Id = Site->ID;
		Device.Site.Url = Site->Url;
		Device.Site.Display = Site->Display;
		Device.Site.Name = Site->Name;
		Device.Site.Slug = Site->Slug;
	}

	return Device;
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
