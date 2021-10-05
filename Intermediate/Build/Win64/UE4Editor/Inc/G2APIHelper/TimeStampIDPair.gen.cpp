// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G2APIHelper/Public/TimeStampIDPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeStampIDPair() {}
// Cross Module References
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStampIDPair();
	UPackage* Z_Construct_UPackage__Script_G2APIHelper();
// End Cross Module References
class UScriptStruct* FTimeStampIDPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FTimeStampIDPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeStampIDPair, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("TimeStampIDPair"), sizeof(FTimeStampIDPair), Get_Z_Construct_UScriptStruct_FTimeStampIDPair_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FTimeStampIDPair>()
{
	return FTimeStampIDPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeStampIDPair(FTimeStampIDPair::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("TimeStampIDPair"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFTimeStampIDPair
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFTimeStampIDPair()
	{
		UScriptStruct::DeferCppStructOps<FTimeStampIDPair>(FName(TEXT("TimeStampIDPair")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFTimeStampIDPair;
	struct Z_Construct_UScriptStruct_FTimeStampIDPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimeStampIDPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeStampIDPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "TimeStampIDPair" },
		{ "ModuleRelativePath", "Public/TimeStampIDPair.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeStampIDPair, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "TimeStampIDPair" },
		{ "ModuleRelativePath", "Public/TimeStampIDPair.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimeStampIDPair, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"TimeStampIDPair",
		sizeof(FTimeStampIDPair),
		alignof(FTimeStampIDPair),
		Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeStampIDPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeStampIDPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimeStampIDPair"), sizeof(FTimeStampIDPair), Get_Z_Construct_UScriptStruct_FTimeStampIDPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimeStampIDPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeStampIDPair_Hash() { return 72037398U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
