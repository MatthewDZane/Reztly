// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G2APIHelper/Public/G2SnapshotResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG2SnapshotResponse() {}
// Cross Module References
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FG2SnapshotResponse();
	UPackage* Z_Construct_UPackage__Script_G2APIHelper();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FData();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshot();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FBPG();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFGG();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFlows();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FImpact();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FTopo();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FBPGTree();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFGGTree();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFlow();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FFlowLink();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FTopology();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FLink();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FG2Node();
// End Cross Module References
class UScriptStruct* FG2SnapshotResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FG2SnapshotResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FG2SnapshotResponse, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("G2SnapshotResponse"), sizeof(FG2SnapshotResponse), Get_Z_Construct_UScriptStruct_FG2SnapshotResponse_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FG2SnapshotResponse>()
{
	return FG2SnapshotResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FG2SnapshotResponse(FG2SnapshotResponse::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("G2SnapshotResponse"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFG2SnapshotResponse
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFG2SnapshotResponse()
	{
		UScriptStruct::DeferCppStructOps<FG2SnapshotResponse>(FName(TEXT("G2SnapshotResponse")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFG2SnapshotResponse;
	struct Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FG2SnapshotResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "G2SnapshotResponse" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG2SnapshotResponse, Data), Z_Construct_UScriptStruct_FData, METADATA_PARAMS(Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "G2SnapshotResponse" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG2SnapshotResponse, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"G2SnapshotResponse",
		sizeof(FG2SnapshotResponse),
		alignof(FG2SnapshotResponse),
		Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FG2SnapshotResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FG2SnapshotResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("G2SnapshotResponse"), sizeof(FG2SnapshotResponse), Get_Z_Construct_UScriptStruct_FG2SnapshotResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FG2SnapshotResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FG2SnapshotResponse_Hash() { return 2761927859U; }
class UScriptStruct* FData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FData, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Data"), sizeof(FData), Get_Z_Construct_UScriptStruct_FData_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FData>()
{
	return FData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FData(FData::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Data"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFData
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFData()
	{
		UScriptStruct::DeferCppStructOps<FData>(FName(TEXT("Data")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFData;
	struct Z_Construct_UScriptStruct_FData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_snapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Num_snapshots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FData_Statics::NewProp_Num_snapshots_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FData_Statics::NewProp_Num_snapshots = { "Num_snapshots", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FData, Num_snapshots), METADATA_PARAMS(Z_Construct_UScriptStruct_FData_Statics::NewProp_Num_snapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FData_Statics::NewProp_Num_snapshots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FData_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapshot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FData_Statics::NewProp_Snapshots_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FData_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FData, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FData_Statics::NewProp_Snapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FData_Statics::NewProp_Snapshots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FData_Statics::NewProp_Num_snapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FData_Statics::NewProp_Snapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FData_Statics::NewProp_Snapshots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Data",
		sizeof(FData),
		alignof(FData),
		Z_Construct_UScriptStruct_FData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Data"), sizeof(FData), Get_Z_Construct_UScriptStruct_FData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FData_Hash() { return 546023767U; }
class UScriptStruct* FSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FSnapshot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshot, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Snapshot"), sizeof(FSnapshot), Get_Z_Construct_UScriptStruct_FSnapshot_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FSnapshot>()
{
	return FSnapshot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSnapshot(FSnapshot::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Snapshot"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFSnapshot
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFSnapshot()
	{
		UScriptStruct::DeferCppStructOps<FSnapshot>(FName(TEXT("Snapshot")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFSnapshot;
	struct Z_Construct_UScriptStruct_FSnapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fgg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fgg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Flows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impact_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Parent_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Topo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Topo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_bpg_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_bpg = { "bpg", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshot, bpg), Z_Construct_UScriptStruct_FBPG, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_bpg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_bpg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_fgg_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_fgg = { "fgg", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshot, fgg), Z_Construct_UScriptStruct_FFGG, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_fgg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_fgg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Flows_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Flows = { "Flows", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshot, Flows), Z_Construct_UScriptStruct_FFlows, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Flows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Flows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshot, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Impact_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshot, Impact), Z_Construct_UScriptStruct_FImpact, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Impact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Impact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Parent_id_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Parent_id = { "Parent_id", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshot, Parent_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Parent_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Parent_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Topo_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Topo = { "Topo", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshot, Topo), Z_Construct_UScriptStruct_FTopo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Topo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Topo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_bpg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_fgg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Flows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Impact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Parent_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshot_Statics::NewProp_Topo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Snapshot",
		sizeof(FSnapshot),
		alignof(FSnapshot),
		Z_Construct_UScriptStruct_FSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSnapshot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Snapshot"), sizeof(FSnapshot), Get_Z_Construct_UScriptStruct_FSnapshot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSnapshot_Hash() { return 4228184213U; }
class UScriptStruct* FBPG::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FBPG_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPG, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("BPG"), sizeof(FBPG), Get_Z_Construct_UScriptStruct_FBPG_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FBPG>()
{
	return FBPG::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPG(FBPG::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("BPG"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFBPG
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFBPG()
	{
		UScriptStruct::DeferCppStructOps<FBPG>(FName(TEXT("BPG")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFBPG;
	struct Z_Construct_UScriptStruct_FBPG_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tree_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPG_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPG_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPG>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "BPG" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPG, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Tree_Inner = { "Tree", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPGTree, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Tree_MetaData[] = {
		{ "Category", "BPG" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPG, Tree), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Tree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Tree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Tree_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPG_Statics::NewProp_Tree,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPG_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"BPG",
		sizeof(FBPG),
		alignof(FBPG),
		Z_Construct_UScriptStruct_FBPG_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPG_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPG_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPG_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPG()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPG_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPG"), sizeof(FBPG), Get_Z_Construct_UScriptStruct_FBPG_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPG_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPG_Hash() { return 1432206479U; }
class UScriptStruct* FBPGTree::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FBPGTree_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPGTree, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("BPGTree"), sizeof(FBPGTree), Get_Z_Construct_UScriptStruct_FBPGTree_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FBPGTree>()
{
	return FBPGTree::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPGTree(FBPGTree::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("BPGTree"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFBPGTree
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFBPGTree()
	{
		UScriptStruct::DeferCppStructOps<FBPGTree>(FName(TEXT("BPGTree")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFBPGTree;
	struct Z_Construct_UScriptStruct_FBPGTree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fairshare_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Fairshare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gradient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gradient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Out_direct_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Out_direct_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out_direct;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Out_indirect_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Out_indirect_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out_indirect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGTree_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPGTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPGTree>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Fairshare_MetaData[] = {
		{ "Category", "BPGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Fairshare = { "Fairshare", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGTree, Fairshare), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Fairshare_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Fairshare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Gradient_MetaData[] = {
		{ "Category", "BPGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Gradient = { "Gradient", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGTree, Gradient), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Gradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Gradient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "BPGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGTree, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "BPGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGTree, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_direct_Inner = { "Out_direct", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_direct_MetaData[] = {
		{ "Category", "BPGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_direct = { "Out_direct", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGTree, Out_direct), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_direct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_direct_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_indirect_Inner = { "Out_indirect", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_indirect_MetaData[] = {
		{ "Category", "BPGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_indirect = { "Out_indirect", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGTree, Out_indirect), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_indirect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_indirect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "BPGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPGTree, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPGTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Fairshare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Gradient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_direct_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_direct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_indirect_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Out_indirect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGTree_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPGTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"BPGTree",
		sizeof(FBPGTree),
		alignof(FBPGTree),
		Z_Construct_UScriptStruct_FBPGTree_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGTree_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPGTree_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPGTree()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPGTree_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPGTree"), sizeof(FBPGTree), Get_Z_Construct_UScriptStruct_FBPGTree_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPGTree_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPGTree_Hash() { return 990403770U; }
class UScriptStruct* FFGG::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FFGG_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGG, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("FGG"), sizeof(FFGG), Get_Z_Construct_UScriptStruct_FFGG_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FFGG>()
{
	return FFGG::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGG(FFGG::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("FGG"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFFGG
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFFGG()
	{
		UScriptStruct::DeferCppStructOps<FFGG>(FName(TEXT("FGG")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFFGG;
	struct Z_Construct_UScriptStruct_FFGG_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tree_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGG_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGG_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGG>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "FGG" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGG, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Tree_Inner = { "Tree", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFGGTree, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Tree_MetaData[] = {
		{ "Category", "FGG" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGG, Tree), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Tree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Tree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Tree_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGG_Statics::NewProp_Tree,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGG_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"FGG",
		sizeof(FFGG),
		alignof(FFGG),
		Z_Construct_UScriptStruct_FFGG_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGG_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGG_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGG_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGG()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGG_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGG"), sizeof(FFGG), Get_Z_Construct_UScriptStruct_FFGG_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGG_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGG_Hash() { return 3475275520U; }
class UScriptStruct* FFGGTree::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FFGGTree_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGGTree, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("FGGTree"), sizeof(FFGGTree), Get_Z_Construct_UScriptStruct_FFGGTree_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FFGGTree>()
{
	return FFGGTree::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGGTree(FFGGTree::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("FGGTree"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFFGGTree
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFFGGTree()
	{
		UScriptStruct::DeferCppStructOps<FFGGTree>(FName(TEXT("FGGTree")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFFGGTree;
	struct Z_Construct_UScriptStruct_FFGGTree_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fairshare_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Fairshare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gradient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gradient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Out_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Out_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGTree_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGGTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGGTree>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Fairshare_MetaData[] = {
		{ "Category", "FGGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Fairshare = { "Fairshare", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGGTree, Fairshare), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Fairshare_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Fairshare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Gradient_MetaData[] = {
		{ "Category", "FGGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Gradient = { "Gradient", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGGTree, Gradient), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Gradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Gradient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "FGGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGGTree, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "FGGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGGTree, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Out_MetaData[] = {
		{ "Category", "FGGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGGTree, Out), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Out_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Out_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "FGGTree" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGGTree, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGGTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Fairshare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Gradient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGGTree_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGGTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"FGGTree",
		sizeof(FFGGTree),
		alignof(FFGGTree),
		Z_Construct_UScriptStruct_FFGGTree_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGTree_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGGTree_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFGGTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGGTree()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGGTree_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGGTree"), sizeof(FFGGTree), Get_Z_Construct_UScriptStruct_FFGGTree_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGGTree_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGGTree_Hash() { return 2547191238U; }
class UScriptStruct* FFlows::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FFlows_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlows, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Flows"), sizeof(FFlows), Get_Z_Construct_UScriptStruct_FFlows_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FFlows>()
{
	return FFlows::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlows(FFlows::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Flows"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFFlows
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFFlows()
	{
		UScriptStruct::DeferCppStructOps<FFlows>(FName(TEXT("Flows")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFFlows;
	struct Z_Construct_UScriptStruct_FFlows_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Flowgroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flowgroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flowgroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_flowGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Num_flowGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlows_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlows_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlows>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Flowgroups_Inner = { "Flowgroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Flowgroups_MetaData[] = {
		{ "Category", "Flows" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Flowgroups = { "Flowgroups", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlows, Flowgroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Flowgroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Flowgroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Num_flowGroups_MetaData[] = {
		{ "Category", "Flows" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Num_flowGroups = { "Num_flowGroups", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlows, Num_flowGroups), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Num_flowGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Num_flowGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Flowgroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Flowgroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlows_Statics::NewProp_Num_flowGroups,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlows_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Flows",
		sizeof(FFlows),
		alignof(FFlows),
		Z_Construct_UScriptStruct_FFlows_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlows_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlows_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlows_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlows()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlows_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Flows"), sizeof(FFlows), Get_Z_Construct_UScriptStruct_FFlows_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlows_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlows_Hash() { return 3213308743U; }
class UScriptStruct* FFlow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FFlow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlow, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Flow"), sizeof(FFlow), Get_Z_Construct_UScriptStruct_FFlow_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FFlow>()
{
	return FFlow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlow(FFlow::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Flow"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFFlow
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFFlow()
	{
		UScriptStruct::DeferCppStructOps<FFlow>(FName(TEXT("Flow")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFFlow;
	struct Z_Construct_UScriptStruct_FFlow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_share_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Exp_share;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_bytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Num_bytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_flows_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Num_flows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Start_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::NewProp_End_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlow, End), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Exp_share_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Exp_share = { "Exp_share", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlow, Exp_share), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Exp_share_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Exp_share_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlow, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Info_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlow, Info), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Info_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFlowLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlow, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Links_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_bytes_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_bytes = { "Num_bytes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlow, Num_bytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_bytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_flows_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_flows = { "Num_flows", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlow, Num_flows), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_flows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_flows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlow, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start_time_MetaData[] = {
		{ "Category", "Flow" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start_time = { "Start_time", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlow, Start_time), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start_time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Exp_share,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Links_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Links,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Num_flows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlow_Statics::NewProp_Start_time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Flow",
		sizeof(FFlow),
		alignof(FFlow),
		Z_Construct_UScriptStruct_FFlow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Flow"), sizeof(FFlow), Get_Z_Construct_UScriptStruct_FFlow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlow_Hash() { return 2321280384U; }
class UScriptStruct* FFlowLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FFlowLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowLink, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("FlowLink"), sizeof(FFlowLink), Get_Z_Construct_UScriptStruct_FFlowLink_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FFlowLink>()
{
	return FFlowLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowLink(FFlowLink::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("FlowLink"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFFlowLink
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFFlowLink()
	{
		UScriptStruct::DeferCppStructOps<FFlowLink>(FName(TEXT("FlowLink")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFFlowLink;
	struct Z_Construct_UScriptStruct_FFlowLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "FlowLink" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowLink, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "FlowLink" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowLink, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "FlowLink" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowLink, Source), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "FlowLink" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFlowLink, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowLink_Statics::NewProp_Target,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"FlowLink",
		sizeof(FFlowLink),
		alignof(FFlowLink),
		Z_Construct_UScriptStruct_FFlowLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowLink"), sizeof(FFlowLink), Get_Z_Construct_UScriptStruct_FFlowLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowLink_Hash() { return 3089623283U; }
class UScriptStruct* FImpact::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FImpact_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpact, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Impact"), sizeof(FImpact), Get_Z_Construct_UScriptStruct_FImpact_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FImpact>()
{
	return FImpact::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImpact(FImpact::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Impact"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFImpact
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFImpact()
	{
		UScriptStruct::DeferCppStructOps<FImpact>(FName(TEXT("Impact")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFImpact;
	struct Z_Construct_UScriptStruct_FImpact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpact_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpact_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpact>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpact_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Impact",
		sizeof(FImpact),
		alignof(FImpact),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImpact_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpact_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImpact()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImpact_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Impact"), sizeof(FImpact), Get_Z_Construct_UScriptStruct_FImpact_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImpact_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImpact_Hash() { return 869893110U; }
class UScriptStruct* FTopo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FTopo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTopo, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Topo"), sizeof(FTopo), Get_Z_Construct_UScriptStruct_FTopo_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FTopo>()
{
	return FTopo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTopo(FTopo::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Topo"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFTopo
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFTopo()
	{
		UScriptStruct::DeferCppStructOps<FTopo>(FName(TEXT("Topo")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFTopo;
	struct Z_Construct_UScriptStruct_FTopo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Topology_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Topology;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_With_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_With_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTopo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTopo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTopo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTopo_Statics::NewProp_Topology_MetaData[] = {
		{ "Category", "Topo" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTopo_Statics::NewProp_Topology = { "Topology", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTopo, Topology), Z_Construct_UScriptStruct_FTopology, METADATA_PARAMS(Z_Construct_UScriptStruct_FTopo_Statics::NewProp_Topology_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopo_Statics::NewProp_Topology_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTopo_Statics::NewProp_With_location_MetaData[] = {
		{ "Category", "Topo" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTopo_Statics::NewProp_With_location = { "With_location", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTopo, With_location), METADATA_PARAMS(Z_Construct_UScriptStruct_FTopo_Statics::NewProp_With_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopo_Statics::NewProp_With_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTopo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopo_Statics::NewProp_Topology,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopo_Statics::NewProp_With_location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTopo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Topo",
		sizeof(FTopo),
		alignof(FTopo),
		Z_Construct_UScriptStruct_FTopo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTopo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTopo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTopo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Topo"), sizeof(FTopo), Get_Z_Construct_UScriptStruct_FTopo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTopo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTopo_Hash() { return 1856259912U; }
class UScriptStruct* FTopology::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FTopology_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTopology, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Topology"), sizeof(FTopology), Get_Z_Construct_UScriptStruct_FTopology_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FTopology>()
{
	return FTopology::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTopology(FTopology::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Topology"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFTopology
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFTopology()
	{
		UScriptStruct::DeferCppStructOps<FTopology>(FName(TEXT("Topology")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFTopology;
	struct Z_Construct_UScriptStruct_FTopology_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTopology_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTopology_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTopology>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "Topology" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTopology, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Links_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FG2Node, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Nodes_MetaData[] = {
		{ "Category", "Topology" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTopology, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTopology_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Links_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Links,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopology_Statics::NewProp_Nodes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTopology_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Topology",
		sizeof(FTopology),
		alignof(FTopology),
		Z_Construct_UScriptStruct_FTopology_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopology_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTopology_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTopology_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTopology()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTopology_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Topology"), sizeof(FTopology), Get_Z_Construct_UScriptStruct_FTopology_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTopology_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTopology_Hash() { return 361696625U; }
class UScriptStruct* FLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLink, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Link"), sizeof(FLink), Get_Z_Construct_UScriptStruct_FLink_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FLink>()
{
	return FLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLink(FLink::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Link"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFLink
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFLink()
	{
		UScriptStruct::DeferCppStructOps<FLink>(FName(TEXT("Link")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFLink;
	struct Z_Construct_UScriptStruct_FLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Bandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loss_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Loss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_queue_size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Max_queue_size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Use_htb_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Use_htb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_Bandwidth_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, Bandwidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Bandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Bandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_Info_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, Info), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Info_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_Loss_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_Loss = { "Loss", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, Loss), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Loss_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Loss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_Max_queue_size_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_Max_queue_size = { "Max_queue_size", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, Max_queue_size), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Max_queue_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Max_queue_size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, Source), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLink_Statics::NewProp_Use_htb_MetaData[] = {
		{ "Category", "Link" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLink_Statics::NewProp_Use_htb = { "Use_htb", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLink, Use_htb), METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Use_htb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::NewProp_Use_htb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_Bandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_Loss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_Max_queue_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLink_Statics::NewProp_Use_htb,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Link",
		sizeof(FLink),
		alignof(FLink),
		Z_Construct_UScriptStruct_FLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Link"), sizeof(FLink), Get_Z_Construct_UScriptStruct_FLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLink_Hash() { return 2274106170U; }
class UScriptStruct* FG2Node::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FG2Node_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FG2Node, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("G2Node"), sizeof(FG2Node), Get_Z_Construct_UScriptStruct_FG2Node_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FG2Node>()
{
	return FG2Node::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FG2Node(FG2Node::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("G2Node"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFG2Node
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFG2Node()
	{
		UScriptStruct::DeferCppStructOps<FG2Node>(FName(TEXT("G2Node")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFG2Node;
	struct Z_Construct_UScriptStruct_FG2Node_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FG2Node_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FG2Node_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FG2Node>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "G2Node" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG2Node, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Info_MetaData[] = {
		{ "Category", "G2Node" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG2Node, Info), METADATA_PARAMS(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Info_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "G2Node" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG2Node, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "G2Node" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG2Node, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "G2Node" },
		{ "ModuleRelativePath", "Public/G2SnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG2Node, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FG2Node_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FG2Node_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FG2Node_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"G2Node",
		sizeof(FG2Node),
		alignof(FG2Node),
		Z_Construct_UScriptStruct_FG2Node_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2Node_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FG2Node_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FG2Node_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FG2Node()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FG2Node_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("G2Node"), sizeof(FG2Node), Get_Z_Construct_UScriptStruct_FG2Node_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FG2Node_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FG2Node_Hash() { return 182170815U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
