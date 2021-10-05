// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJsonObjectWrapper;
struct FResult;
struct FNetboxResponse;
struct FUE4Response;
struct FG2SnapshotResponse;
struct FTimeStampIDPair;
#ifdef G2APIHELPER_JsonParser_generated_h
#error "JsonParser.generated.h already included, missing '#pragma once' in JsonParser.h"
#endif
#define G2APIHELPER_JsonParser_generated_h

#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_SPARSE_DATA
#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoolValue); \
	DECLARE_FUNCTION(execGetFloatValue); \
	DECLARE_FUNCTION(execGetStringValue); \
	DECLARE_FUNCTION(execFindFieldPath); \
	DECLARE_FUNCTION(execStructToResultObject); \
	DECLARE_FUNCTION(execStringToResult); \
	DECLARE_FUNCTION(execStructToNetboxResponseObject); \
	DECLARE_FUNCTION(execStringToNetboxResponse); \
	DECLARE_FUNCTION(execStructToUE4ResponseObject); \
	DECLARE_FUNCTION(execStringToUE4Response); \
	DECLARE_FUNCTION(execStructToG2SnapshotObject); \
	DECLARE_FUNCTION(execStringToG2SnapshotResponse); \
	DECLARE_FUNCTION(execStringToAvailableSnapshots);


#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoolValue); \
	DECLARE_FUNCTION(execGetFloatValue); \
	DECLARE_FUNCTION(execGetStringValue); \
	DECLARE_FUNCTION(execFindFieldPath); \
	DECLARE_FUNCTION(execStructToResultObject); \
	DECLARE_FUNCTION(execStringToResult); \
	DECLARE_FUNCTION(execStructToNetboxResponseObject); \
	DECLARE_FUNCTION(execStringToNetboxResponse); \
	DECLARE_FUNCTION(execStructToUE4ResponseObject); \
	DECLARE_FUNCTION(execStringToUE4Response); \
	DECLARE_FUNCTION(execStructToG2SnapshotObject); \
	DECLARE_FUNCTION(execStringToG2SnapshotResponse); \
	DECLARE_FUNCTION(execStringToAvailableSnapshots);


#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonParser(); \
	friend struct Z_Construct_UClass_UJsonParser_Statics; \
public: \
	DECLARE_CLASS(UJsonParser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/G2APIHelper"), NO_API) \
	DECLARE_SERIALIZER(UJsonParser)


#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUJsonParser(); \
	friend struct Z_Construct_UClass_UJsonParser_Statics; \
public: \
	DECLARE_CLASS(UJsonParser, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/G2APIHelper"), NO_API) \
	DECLARE_SERIALIZER(UJsonParser)


#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonParser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonParser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonParser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonParser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonParser(UJsonParser&&); \
	NO_API UJsonParser(const UJsonParser&); \
public:


#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonParser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonParser(UJsonParser&&); \
	NO_API UJsonParser(const UJsonParser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonParser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonParser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonParser)


#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_20_PROLOG
#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_SPARSE_DATA \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_RPC_WRAPPERS \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_INCLASS \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_SPARSE_DATA \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> G2APIHELPER_API UClass* StaticClass<class UJsonParser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_G2APIHelper_Source_G2APIHelper_Public_JsonParser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
