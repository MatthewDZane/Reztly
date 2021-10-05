// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G2APIHelper/Public/JsonParser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonParser() {}
// Cross Module References
	G2APIHELPER_API UClass* Z_Construct_UClass_UJsonParser_NoRegister();
	G2APIHELPER_API UClass* Z_Construct_UClass_UJsonParser();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_G2APIHelper();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStampIDPair();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FG2SnapshotResponse();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FNetboxResponse();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FResult();
	G2APIHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FUE4Response();
// End Cross Module References
	DEFINE_FUNCTION(UJsonParser::execGetBoolValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonParser::GetBoolValue(Z_Param_JsonString,Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execGetFloatValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UJsonParser::GetFloatValue(Z_Param_JsonString,Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execGetStringValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UJsonParser::GetStringValue(Z_Param_JsonString,Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execFindFieldPath)
	{
		P_GET_STRUCT(FJsonObjectWrapper,Z_Param_JsonWrapper);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJsonParser::FindFieldPath(Z_Param_JsonWrapper,Z_Param_FieldPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execStructToResultObject)
	{
		P_GET_STRUCT(FResult,Z_Param_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJsonObjectWrapper*)Z_Param__Result=UJsonParser::StructToResultObject(Z_Param_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execStringToResult)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FResult*)Z_Param__Result=UJsonParser::StringToResult(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execStructToNetboxResponseObject)
	{
		P_GET_STRUCT(FNetboxResponse,Z_Param_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJsonObjectWrapper*)Z_Param__Result=UJsonParser::StructToNetboxResponseObject(Z_Param_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execStringToNetboxResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNetboxResponse*)Z_Param__Result=UJsonParser::StringToNetboxResponse(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execStructToUE4ResponseObject)
	{
		P_GET_STRUCT(FUE4Response,Z_Param_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJsonObjectWrapper*)Z_Param__Result=UJsonParser::StructToUE4ResponseObject(Z_Param_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execStringToUE4Response)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUE4Response*)Z_Param__Result=UJsonParser::StringToUE4Response(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execStructToG2SnapshotObject)
	{
		P_GET_STRUCT(FG2SnapshotResponse,Z_Param_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FJsonObjectWrapper*)Z_Param__Result=UJsonParser::StructToG2SnapshotObject(Z_Param_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execStringToG2SnapshotResponse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FG2SnapshotResponse*)Z_Param__Result=UJsonParser::StringToG2SnapshotResponse(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonParser::execStringToAvailableSnapshots)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTimeStampIDPair>*)Z_Param__Result=UJsonParser::StringToAvailableSnapshots(Z_Param_JsonString);
		P_NATIVE_END;
	}
	void UJsonParser::StaticRegisterNativesUJsonParser()
	{
		UClass* Class = UJsonParser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindFieldPath", &UJsonParser::execFindFieldPath },
			{ "GetBoolValue", &UJsonParser::execGetBoolValue },
			{ "GetFloatValue", &UJsonParser::execGetFloatValue },
			{ "GetStringValue", &UJsonParser::execGetStringValue },
			{ "StringToAvailableSnapshots", &UJsonParser::execStringToAvailableSnapshots },
			{ "StringToG2SnapshotResponse", &UJsonParser::execStringToG2SnapshotResponse },
			{ "StringToNetboxResponse", &UJsonParser::execStringToNetboxResponse },
			{ "StringToResult", &UJsonParser::execStringToResult },
			{ "StringToUE4Response", &UJsonParser::execStringToUE4Response },
			{ "StructToG2SnapshotObject", &UJsonParser::execStructToG2SnapshotObject },
			{ "StructToNetboxResponseObject", &UJsonParser::execStructToNetboxResponseObject },
			{ "StructToResultObject", &UJsonParser::execStructToResultObject },
			{ "StructToUE4ResponseObject", &UJsonParser::execStructToUE4ResponseObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics
	{
		struct JsonParser_eventFindFieldPath_Parms
		{
			FJsonObjectWrapper JsonWrapper;
			FString FieldPath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JsonWrapper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::NewProp_JsonWrapper = { "JsonWrapper", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventFindFieldPath_Parms, JsonWrapper), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::NewProp_FieldPath = { "FieldPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventFindFieldPath_Parms, FieldPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonParser_eventFindFieldPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonParser_eventFindFieldPath_Parms), &Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::NewProp_JsonWrapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::NewProp_FieldPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Returns whether the field is in the JsonWrapper. The layers\n\x09* of the path are separated by periods and array elements are specified\n\x09* with square brackets surrounding the index.\n\x09* Ex: \"outside[0].middle.inner[3].field\"\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Returns whether the field is in the JsonWrapper. The layers\nof the path are separated by periods and array elements are specified\nwith square brackets surrounding the index.\nEx: \"outside[0].middle.inner[3].field\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "FindFieldPath", nullptr, nullptr, sizeof(JsonParser_eventFindFieldPath_Parms), Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_FindFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_FindFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics
	{
		struct JsonParser_eventGetBoolValue_Parms
		{
			FString JsonString;
			FString Field;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventGetBoolValue_Parms, JsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventGetBoolValue_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonParser_eventGetBoolValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonParser_eventGetBoolValue_Parms), &Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Returns the Float value of the field given in the Json String\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Returns the Float value of the field given in the Json String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "GetBoolValue", nullptr, nullptr, sizeof(JsonParser_eventGetBoolValue_Parms), Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_GetBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_GetBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics
	{
		struct JsonParser_eventGetFloatValue_Parms
		{
			FString JsonString;
			FString Field;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventGetFloatValue_Parms, JsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventGetFloatValue_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Returns the Float value of the field given in the Json String\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Returns the Float value of the field given in the Json String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "GetFloatValue", nullptr, nullptr, sizeof(JsonParser_eventGetFloatValue_Parms), Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_GetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_GetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_GetStringValue_Statics
	{
		struct JsonParser_eventGetStringValue_Parms
		{
			FString JsonString;
			FString Field;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventGetStringValue_Parms, JsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventGetStringValue_Parms, Field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventGetStringValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Returns the String value of the field given in the Json String\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Returns the String value of the field given in the Json String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "GetStringValue", nullptr, nullptr, sizeof(JsonParser_eventGetStringValue_Parms), Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_GetStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_GetStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics
	{
		struct JsonParser_eventStringToAvailableSnapshots_Parms
		{
			FString JsonString;
			TArray<FTimeStampIDPair> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToAvailableSnapshots_Parms, JsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTimeStampIDPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToAvailableSnapshots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// G2 Snapshot Functions\n" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "G2 Snapshot Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "StringToAvailableSnapshots", nullptr, nullptr, sizeof(JsonParser_eventStringToAvailableSnapshots_Parms), Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics
	{
		struct JsonParser_eventStringToG2SnapshotResponse_Parms
		{
			FString JsonString;
			FG2SnapshotResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToG2SnapshotResponse_Parms, JsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToG2SnapshotResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FG2SnapshotResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Converts a G2 Snapshot Response FString to a FG2SnapshotResponse struct\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Converts a G2 Snapshot Response FString to a FG2SnapshotResponse struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "StringToG2SnapshotResponse", nullptr, nullptr, sizeof(JsonParser_eventStringToG2SnapshotResponse_Parms), Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics
	{
		struct JsonParser_eventStringToNetboxResponse_Parms
		{
			FString JsonString;
			FNetboxResponse ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToNetboxResponse_Parms, JsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToNetboxResponse_Parms, ReturnValue), Z_Construct_UScriptStruct_FNetboxResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Converts a Netbox Response FString to a FNetboxResponse struct\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Converts a Netbox Response FString to a FNetboxResponse struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "StringToNetboxResponse", nullptr, nullptr, sizeof(JsonParser_eventStringToNetboxResponse_Parms), Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_StringToNetboxResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_StringToNetboxResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_StringToResult_Statics
	{
		struct JsonParser_eventStringToResult_Parms
		{
			FString JsonString;
			FResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_StringToResult_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToResult_Parms, JsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StringToResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_StringToResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToResult_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_StringToResult_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Converts a Netbox Post Response FString to a FG2SnapshotResponse struct\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Converts a Netbox Post Response FString to a FG2SnapshotResponse struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_StringToResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "StringToResult", nullptr, nullptr, sizeof(JsonParser_eventStringToResult_Parms), Z_Construct_UFunction_UJsonParser_StringToResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_StringToResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_StringToResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_StringToResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics
	{
		struct JsonParser_eventStringToUE4Response_Parms
		{
			FString JsonString;
			FUE4Response ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToUE4Response_Parms, JsonString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStringToUE4Response_Parms, ReturnValue), Z_Construct_UScriptStruct_FUE4Response, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Converts a UE4 Response FString to a FUE4Response struct\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Converts a UE4 Response FString to a FUE4Response struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "StringToUE4Response", nullptr, nullptr, sizeof(JsonParser_eventStringToUE4Response_Parms), Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_StringToUE4Response()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_StringToUE4Response_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics
	{
		struct JsonParser_eventStructToG2SnapshotObject_Parms
		{
			FG2SnapshotResponse Response;
			FJsonObjectWrapper ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStructToG2SnapshotObject_Parms, Response), Z_Construct_UScriptStruct_FG2SnapshotResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStructToG2SnapshotObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::NewProp_Response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Converts a FG2SnapshotResponse to a FJsonObjectWrapper\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Converts a FG2SnapshotResponse to a FJsonObjectWrapper" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "StructToG2SnapshotObject", nullptr, nullptr, sizeof(JsonParser_eventStructToG2SnapshotObject_Parms), Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics
	{
		struct JsonParser_eventStructToNetboxResponseObject_Parms
		{
			FNetboxResponse Response;
			FJsonObjectWrapper ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStructToNetboxResponseObject_Parms, Response), Z_Construct_UScriptStruct_FNetboxResponse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStructToNetboxResponseObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::NewProp_Response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Converts a FNetboxResponse to a FJsonObjectWrapper\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Converts a FNetboxResponse to a FJsonObjectWrapper" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "StructToNetboxResponseObject", nullptr, nullptr, sizeof(JsonParser_eventStructToNetboxResponseObject_Parms), Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics
	{
		struct JsonParser_eventStructToResultObject_Parms
		{
			FResult Response;
			FJsonObjectWrapper ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStructToResultObject_Parms, Response), Z_Construct_UScriptStruct_FResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStructToResultObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::NewProp_Response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Converts a FResult to a FJsonObjectWrapper\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Converts a FResult to a FJsonObjectWrapper" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "StructToResultObject", nullptr, nullptr, sizeof(JsonParser_eventStructToResultObject_Parms), Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_StructToResultObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_StructToResultObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics
	{
		struct JsonParser_eventStructToUE4ResponseObject_Parms
		{
			FUE4Response Response;
			FJsonObjectWrapper ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStructToUE4ResponseObject_Parms, Response), Z_Construct_UScriptStruct_FUE4Response, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonParser_eventStructToUE4ResponseObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::NewProp_Response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Converts a FUE4Response to a FJsonObjectWrapper\n\x09*/" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
		{ "ToolTip", "Converts a FUE4Response to a FJsonObjectWrapper" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonParser, nullptr, "StructToUE4ResponseObject", nullptr, nullptr, sizeof(JsonParser_eventStructToUE4ResponseObject_Parms), Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonParser_NoRegister()
	{
		return UJsonParser::StaticClass();
	}
	struct Z_Construct_UClass_UJsonParser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonParser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_G2APIHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonParser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonParser_FindFieldPath, "FindFieldPath" }, // 1624875856
		{ &Z_Construct_UFunction_UJsonParser_GetBoolValue, "GetBoolValue" }, // 1462019305
		{ &Z_Construct_UFunction_UJsonParser_GetFloatValue, "GetFloatValue" }, // 942572873
		{ &Z_Construct_UFunction_UJsonParser_GetStringValue, "GetStringValue" }, // 2517038023
		{ &Z_Construct_UFunction_UJsonParser_StringToAvailableSnapshots, "StringToAvailableSnapshots" }, // 3340774150
		{ &Z_Construct_UFunction_UJsonParser_StringToG2SnapshotResponse, "StringToG2SnapshotResponse" }, // 3642014767
		{ &Z_Construct_UFunction_UJsonParser_StringToNetboxResponse, "StringToNetboxResponse" }, // 215148174
		{ &Z_Construct_UFunction_UJsonParser_StringToResult, "StringToResult" }, // 694042867
		{ &Z_Construct_UFunction_UJsonParser_StringToUE4Response, "StringToUE4Response" }, // 4265980857
		{ &Z_Construct_UFunction_UJsonParser_StructToG2SnapshotObject, "StructToG2SnapshotObject" }, // 2673913528
		{ &Z_Construct_UFunction_UJsonParser_StructToNetboxResponseObject, "StructToNetboxResponseObject" }, // 1009647034
		{ &Z_Construct_UFunction_UJsonParser_StructToResultObject, "StructToResultObject" }, // 2196902864
		{ &Z_Construct_UFunction_UJsonParser_StructToUE4ResponseObject, "StructToUE4ResponseObject" }, // 3314230343
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonParser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "JsonParser.h" },
		{ "ModuleRelativePath", "Public/JsonParser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonParser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonParser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonParser_Statics::ClassParams = {
		&UJsonParser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonParser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonParser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonParser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonParser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonParser, 3917696291);
	template<> G2APIHELPER_API UClass* StaticClass<UJsonParser>()
	{
		return UJsonParser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonParser(Z_Construct_UClass_UJsonParser, &UJsonParser::StaticClass, TEXT("/Script/G2APIHelper"), TEXT("UJsonParser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonParser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
