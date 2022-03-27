// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G2APIHelper/Public/NetboxResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetboxResponse() {}
// Cross Module References
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FNetboxResponse();
	UPackage* Z_Construct_UPackage__Script_G2APIHelper();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FResult();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FResultStatus();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FRegion();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FTag();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FCustomFields();
// End Cross Module References
class UScriptStruct* FNetboxResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FNetboxResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetboxResponse, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("NetboxResponse"), sizeof(FNetboxResponse), Get_Z_Construct_UScriptStruct_FNetboxResponse_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FNetboxResponse>()
{
	return FNetboxResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNetboxResponse(FNetboxResponse::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("NetboxResponse"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFNetboxResponse
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFNetboxResponse()
	{
		UScriptStruct::DeferCppStructOps<FNetboxResponse>(FName(TEXT("NetboxResponse")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFNetboxResponse;
	struct Z_Construct_UScriptStruct_FNetboxResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Next_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Next;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Previous_MetaData[];
#endif
		static void NewProp_Previous_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Previous;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetboxResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetboxResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "NetboxResponse" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetboxResponse, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Next_MetaData[] = {
		{ "Category", "NetboxResponse" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetboxResponse, Next), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Next_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Next_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Previous_MetaData[] = {
		{ "Category", "NetboxResponse" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Previous_SetBit(void* Obj)
	{
		((FNetboxResponse*)Obj)->Previous = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Previous = { "Previous", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNetboxResponse), &Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Previous_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Previous_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Previous_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Results_MetaData[] = {
		{ "Category", "NetboxResponse" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetboxResponse, Results), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Results_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetboxResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Previous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Results_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetboxResponse_Statics::NewProp_Results,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetboxResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"NetboxResponse",
		sizeof(FNetboxResponse),
		alignof(FNetboxResponse),
		Z_Construct_UScriptStruct_FNetboxResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetboxResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetboxResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetboxResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetboxResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNetboxResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NetboxResponse"), sizeof(FNetboxResponse), Get_Z_Construct_UScriptStruct_FNetboxResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNetboxResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNetboxResponse_Hash() { return 2187730586U; }
class UScriptStruct* FResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResult, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Result"), sizeof(FResult), Get_Z_Construct_UScriptStruct_FResult_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FResult>()
{
	return FResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResult(FResult::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Result"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFResult
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFResult()
	{
		UScriptStruct::DeferCppStructOps<FResult>(FName(TEXT("Result")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFResult;
	struct Z_Construct_UScriptStruct_FResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Display_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Display;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Slug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tenant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tenant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Facility_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Facility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Asn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Time_zone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physical_address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Physical_address;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shipping_address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shipping_address;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contact_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Contact_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contact_phone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Contact_phone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contact_email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Contact_email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Custom_fields_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Custom_fields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Created;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Last_updated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Last_updated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Circuit_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Circuit_count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Device_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Device_count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Prefix_count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rack_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Rack_count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Virtualmachine_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Virtualmachine_count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vlan_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Vlan_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Display_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Display = { "Display", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Display), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Display_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Display_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Slug_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Slug = { "Slug", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Slug), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Slug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Slug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Status), Z_Construct_UScriptStruct_FResultStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Region_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Region), Z_Construct_UScriptStruct_FRegion, METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tenant_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tenant = { "Tenant", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Tenant), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tenant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tenant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Facility_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Facility = { "Facility", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Facility), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Facility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Facility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Asn_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Asn = { "Asn", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Asn), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Asn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Asn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Time_zone_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Time_zone = { "Time_zone", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Time_zone), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Time_zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Time_zone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Physical_address_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Physical_address = { "Physical_address", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Physical_address), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Physical_address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Physical_address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Shipping_address_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Shipping_address = { "Shipping_address", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Shipping_address), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Shipping_address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Shipping_address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_name_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_name = { "Contact_name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Contact_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_phone_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_phone = { "Contact_phone", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Contact_phone), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_phone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_phone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_email_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_email = { "Contact_email", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Contact_email), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Comments_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Comments = { "Comments", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Comments), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Comments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Comments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Custom_fields_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Custom_fields = { "Custom_fields", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Custom_fields), Z_Construct_UScriptStruct_FCustomFields, METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Custom_fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Custom_fields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Created), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Created_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Last_updated_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Last_updated = { "Last_updated", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Last_updated), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Last_updated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Last_updated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Circuit_count_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Circuit_count = { "Circuit_count", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Circuit_count), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Circuit_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Circuit_count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Device_count_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Device_count = { "Device_count", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Device_count), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Device_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Device_count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Prefix_count_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Prefix_count = { "Prefix_count", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Prefix_count), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Prefix_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Prefix_count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Rack_count_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Rack_count = { "Rack_count", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Rack_count), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Rack_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Rack_count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Virtualmachine_count_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Virtualmachine_count = { "Virtualmachine_count", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Virtualmachine_count), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Virtualmachine_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Virtualmachine_count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResult_Statics::NewProp_Vlan_count_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FResult_Statics::NewProp_Vlan_count = { "Vlan_count", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResult, Vlan_count), METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Vlan_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::NewProp_Vlan_count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Display,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Slug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tenant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Facility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Asn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Time_zone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Physical_address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Shipping_address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_phone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Contact_email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Comments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Custom_fields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Created,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Last_updated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Circuit_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Device_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Prefix_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Rack_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Virtualmachine_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResult_Statics::NewProp_Vlan_count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Result",
		sizeof(FResult),
		alignof(FResult),
		Z_Construct_UScriptStruct_FResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Result"), sizeof(FResult), Get_Z_Construct_UScriptStruct_FResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResult_Hash() { return 2298807046U; }
class UScriptStruct* FRegion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FRegion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegion, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Region"), sizeof(FRegion), Get_Z_Construct_UScriptStruct_FRegion_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FRegion>()
{
	return FRegion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRegion(FRegion::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Region"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFRegion
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFRegion()
	{
		UScriptStruct::DeferCppStructOps<FRegion>(FName(TEXT("Region")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFRegion;
	struct Z_Construct_UScriptStruct_FRegion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Display_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Display;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Slug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__depth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegion, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegion, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Display_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Display = { "Display", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegion, Display), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Display_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Display_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegion, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Slug_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Slug = { "Slug", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegion, Slug), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Slug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Slug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegion_Statics::NewProp__depth_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRegion_Statics::NewProp__depth = { "_depth", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRegion, _depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegion_Statics::NewProp__depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegion_Statics::NewProp__depth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Display,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegion_Statics::NewProp_Slug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegion_Statics::NewProp__depth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Region",
		sizeof(FRegion),
		alignof(FRegion),
		Z_Construct_UScriptStruct_FRegion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRegion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Region"), sizeof(FRegion), Get_Z_Construct_UScriptStruct_FRegion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRegion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRegion_Hash() { return 686796561U; }
class UScriptStruct* FResultStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FResultStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResultStatus, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("ResultStatus"), sizeof(FResultStatus), Get_Z_Construct_UScriptStruct_FResultStatus_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FResultStatus>()
{
	return FResultStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResultStatus(FResultStatus::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("ResultStatus"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFResultStatus
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFResultStatus()
	{
		UScriptStruct::DeferCppStructOps<FResultStatus>(FName(TEXT("ResultStatus")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFResultStatus;
	struct Z_Construct_UScriptStruct_FResultStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResultStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResultStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ResultStatus" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResultStatus, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "ResultStatus" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResultStatus, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResultStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultStatus_Statics::NewProp_Label,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResultStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"ResultStatus",
		sizeof(FResultStatus),
		alignof(FResultStatus),
		Z_Construct_UScriptStruct_FResultStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResultStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResultStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResultStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResultStatus"), sizeof(FResultStatus), Get_Z_Construct_UScriptStruct_FResultStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResultStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResultStatus_Hash() { return 1857193304U; }
class UScriptStruct* FTag::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FTag_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTag, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Tag"), sizeof(FTag), Get_Z_Construct_UScriptStruct_FTag_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FTag>()
{
	return FTag::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTag(FTag::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Tag"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFTag
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFTag()
	{
		UScriptStruct::DeferCppStructOps<FTag>(FName(TEXT("Tag")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFTag;
	struct Z_Construct_UScriptStruct_FTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTag_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTag>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Tag",
		sizeof(FTag),
		alignof(FTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTag()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTag_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Tag"), sizeof(FTag), Get_Z_Construct_UScriptStruct_FTag_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTag_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTag_Hash() { return 408228653U; }
class UScriptStruct* FCustomFields::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FCustomFields_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomFields, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("CustomFields"), sizeof(FCustomFields), Get_Z_Construct_UScriptStruct_FCustomFields_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FCustomFields>()
{
	return FCustomFields::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomFields(FCustomFields::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("CustomFields"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFCustomFields
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFCustomFields()
	{
		UScriptStruct::DeferCppStructOps<FCustomFields>(FName(TEXT("CustomFields")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFCustomFields;
	struct Z_Construct_UScriptStruct_FCustomFields_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_G2_node_MetaData[];
#endif
		static void NewProp_G2_node_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_G2_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_G2_node_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_G2_node_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Node_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mtu_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Mtu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Override_location_MetaData[];
#endif
		static void NewProp_Override_location_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Override_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static void NewProp_Primary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Elevation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Elevation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heading_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Heading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Roll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomFields_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomFields>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_SetBit(void* Obj)
	{
		((FCustomFields*)Obj)->G2_node = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node = { "G2_node", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomFields), &Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_name_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_name = { "G2_node_name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, G2_node_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Node_id_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Node_id = { "Node_id", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Node_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Node_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Node_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Info_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Info), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Info_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Ip_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Ip), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Ip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Mtu_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Mtu = { "Mtu", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Mtu), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Mtu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Mtu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Override_location_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Override_location_SetBit(void* Obj)
	{
		((FCustomFields*)Obj)->Override_location = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Override_location = { "Override_location", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomFields), &Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Override_location_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Override_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Override_location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Primary_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Primary_SetBit(void* Obj)
	{
		((FCustomFields*)Obj)->Primary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomFields), &Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Primary_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Primary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Elevation_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Elevation = { "Elevation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Elevation), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Elevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Elevation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Heading_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Heading = { "Heading", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Heading), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Heading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Heading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "CustomFields" },
		{ "ModuleRelativePath", "Public/NetboxResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomFields, Roll), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Roll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomFields_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_G2_node_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Node_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Mtu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Override_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Primary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Elevation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Heading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFields_Statics::NewProp_Roll,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomFields_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"CustomFields",
		sizeof(FCustomFields),
		alignof(FCustomFields),
		Z_Construct_UScriptStruct_FCustomFields_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFields_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFields_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomFields()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomFields_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomFields"), sizeof(FCustomFields), Get_Z_Construct_UScriptStruct_FCustomFields_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomFields_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomFields_Hash() { return 3355835674U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
