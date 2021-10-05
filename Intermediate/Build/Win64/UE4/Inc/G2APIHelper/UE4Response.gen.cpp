// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G2APIHelper/Public/UE4Response.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4Response() {}
// Cross Module References
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FUE4Response();
	UPackage* Z_Construct_UPackage__Script_G2APIHelper();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FUE4Node();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FUE4Edge();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FPath();
// End Cross Module References
class UScriptStruct* FUE4Response::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FUE4Response_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE4Response, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("UE4Response"), sizeof(FUE4Response), Get_Z_Construct_UScriptStruct_FUE4Response_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FUE4Response>()
{
	return FUE4Response::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE4Response(FUE4Response::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("UE4Response"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFUE4Response
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFUE4Response()
	{
		UScriptStruct::DeferCppStructOps<FUE4Response>(FName(TEXT("UE4Response")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFUE4Response;
	struct Z_Construct_UScriptStruct_FUE4Response_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Edges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Response_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE4Response_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE4Response>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUE4Node, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Nodes_MetaData[] = {
		{ "Category", "UE4Response" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Response, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUE4Edge, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Edges_MetaData[] = {
		{ "Category", "UE4Response" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Response, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Edges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE4Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Edges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Response_Statics::NewProp_Edges,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE4Response_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"UE4Response",
		sizeof(FUE4Response),
		alignof(FUE4Response),
		Z_Construct_UScriptStruct_FUE4Response_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Response_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Response_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Response_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE4Response()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE4Response_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE4Response"), sizeof(FUE4Response), Get_Z_Construct_UScriptStruct_FUE4Response_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE4Response_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE4Response_Hash() { return 2850062010U; }
class UScriptStruct* FUE4Node::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FUE4Node_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE4Node, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("UE4Node"), sizeof(FUE4Node), Get_Z_Construct_UScriptStruct_FUE4Node_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FUE4Node>()
{
	return FUE4Node::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE4Node(FUE4Node::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("UE4Node"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFUE4Node
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFUE4Node()
	{
		UScriptStruct::DeferCppStructOps<FUE4Node>(FName(TEXT("UE4Node")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFUE4Node;
	struct Z_Construct_UScriptStruct_FUE4Node_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hostname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hostname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static void NewProp_Primary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Primary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Node_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE4Node_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE4Node>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Paths_MetaData[] = {
		{ "Category", "UE4Node" },
		{ "Comment", "// should be some form of nested array but Unreal doesn't support it\n" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
		{ "ToolTip", "should be some form of nested array but Unreal doesn't support it" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Node, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Paths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Hostname_MetaData[] = {
		{ "Category", "UE4Node" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Hostname = { "Hostname", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Node, Hostname), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Hostname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Hostname_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Ip_MetaData[] = {
		{ "Category", "UE4Node" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Node, Ip), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Ip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "UE4Node" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Node, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "UE4Node" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Node, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Primary_MetaData[] = {
		{ "Category", "UE4Node" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Primary_SetBit(void* Obj)
	{
		((FUE4Node*)Obj)->Primary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUE4Node), &Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Primary_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Primary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE4Node_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Paths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Paths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Hostname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Node_Statics::NewProp_Primary,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE4Node_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"UE4Node",
		sizeof(FUE4Node),
		alignof(FUE4Node),
		Z_Construct_UScriptStruct_FUE4Node_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Node_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Node_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Node_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE4Node()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE4Node_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE4Node"), sizeof(FUE4Node), Get_Z_Construct_UScriptStruct_FUE4Node_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE4Node_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE4Node_Hash() { return 1630959323U; }
class UScriptStruct* FUE4Edge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FUE4Edge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE4Edge, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("UE4Edge"), sizeof(FUE4Edge), Get_Z_Construct_UScriptStruct_FUE4Edge_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FUE4Edge>()
{
	return FUE4Edge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUE4Edge(FUE4Edge::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("UE4Edge"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFUE4Edge
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFUE4Edge()
	{
		UScriptStruct::DeferCppStructOps<FUE4Edge>(FName(TEXT("UE4Edge")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFUE4Edge;
	struct Z_Construct_UScriptStruct_FUE4Edge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mtu_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Mtu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latency;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Edge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE4Edge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE4Edge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "UE4Edge" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Edge, Source), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "UE4Edge" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Edge, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Mtu_MetaData[] = {
		{ "Category", "UE4Edge" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Mtu = { "Mtu", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Edge, Mtu), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Mtu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Mtu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Latency_MetaData[] = {
		{ "Category", "UE4Edge" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Latency = { "Latency", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Edge, Latency), METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Latency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Latency_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Paths_MetaData[] = {
		{ "Category", "UE4Edge" },
		{ "Comment", "// should be some form of nested array but Unreal doesn't support it\n" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
		{ "ToolTip", "should be some form of nested array but Unreal doesn't support it" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUE4Edge, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Paths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE4Edge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Mtu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Latency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Paths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4Edge_Statics::NewProp_Paths,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE4Edge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"UE4Edge",
		sizeof(FUE4Edge),
		alignof(FUE4Edge),
		Z_Construct_UScriptStruct_FUE4Edge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Edge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4Edge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4Edge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE4Edge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUE4Edge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UE4Edge"), sizeof(FUE4Edge), Get_Z_Construct_UScriptStruct_FUE4Edge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUE4Edge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUE4Edge_Hash() { return 1545260752U; }
class UScriptStruct* FPath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern G2APIHELPER_API uint32 Get_Z_Construct_UScriptStruct_FPath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPath, Z_Construct_UPackage__Script_G2APIHelper(), TEXT("Path"), sizeof(FPath), Get_Z_Construct_UScriptStruct_FPath_Hash());
	}
	return Singleton;
}
template<> G2APIHELPER_API UScriptStruct* StaticStruct<FPath>()
{
	return FPath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPath(FPath::StaticStruct, TEXT("/Script/G2APIHelper"), TEXT("Path"), false, nullptr, nullptr);
static struct FScriptStruct_G2APIHelper_StaticRegisterNativesFPath
{
	FScriptStruct_G2APIHelper_StaticRegisterNativesFPath()
	{
		UScriptStruct::DeferCppStructOps<FPath>(FName(TEXT("Path")));
	}
} ScriptStruct_G2APIHelper_StaticRegisterNativesFPath;
	struct Z_Construct_UScriptStruct_FPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPath>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPath_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/UE4Response.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPath, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPath_Statics::NewProp_Path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPath_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
		nullptr,
		&NewStructOps,
		"Path",
		sizeof(FPath),
		alignof(FPath),
		Z_Construct_UScriptStruct_FPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_G2APIHelper();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Path"), sizeof(FPath), Get_Z_Construct_UScriptStruct_FPath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPath_Hash() { return 137146330U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
