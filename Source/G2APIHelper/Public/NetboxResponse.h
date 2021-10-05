// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NetboxResponse.generated.h"

USTRUCT(BlueprintType)
struct FCustomFields
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	bool G2_node;
	UPROPERTY(BlueprintReadWrite)
	FString G2_node_name;
	UPROPERTY(BlueprintReadWrite)
	FString Node_id;
	UPROPERTY(BlueprintReadWrite)
	FString Info;
	UPROPERTY(BlueprintReadWrite)
	FString Ip;
	UPROPERTY(BlueprintReadWrite)
	FString Latitude;
	UPROPERTY(BlueprintReadWrite)
	FString Longitude;
	UPROPERTY(BlueprintReadWrite)
	int Mtu;
	UPROPERTY(BlueprintReadWrite)
	bool Override_location;
	UPROPERTY(BlueprintReadWrite)
	bool Primary;
	UPROPERTY(BlueprintReadWrite)
	FString Elevation;
	UPROPERTY(BlueprintReadWrite)
	FString Heading;
	UPROPERTY(BlueprintReadWrite)
	FString Pitch;
	UPROPERTY(BlueprintReadWrite)
	FString Roll;
};

USTRUCT(BlueprintType)
struct FTag
{
	GENERATED_USTRUCT_BODY()
public:
	
};

USTRUCT(BlueprintType)
struct FStatus
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	FString Value;
	UPROPERTY(BlueprintReadWrite)
	FString Label;
};

USTRUCT(BlueprintType)
struct FRegion
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	FString Id;
	UPROPERTY(BlueprintReadWrite)
	FString Url;
	UPROPERTY(BlueprintReadWrite)
	FString Display;
	UPROPERTY(BlueprintReadWrite)
	FString Name;
	UPROPERTY(BlueprintReadWrite)
	FString Slug;
	UPROPERTY(BlueprintReadWrite)
	int _depth;
};

USTRUCT(BlueprintType)
struct FResult
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	int Id;
	UPROPERTY(BlueprintReadWrite)
	FString Url;
	UPROPERTY(BlueprintReadWrite)
	FString Display;
	UPROPERTY(BlueprintReadWrite)
	FString Name;
	UPROPERTY(BlueprintReadWrite)
	FString Slug;
	UPROPERTY(BlueprintReadWrite)
	FStatus Status;
	UPROPERTY(BlueprintReadWrite)
	FRegion Region;
	UPROPERTY(BlueprintReadWrite)
	FString Group;
	UPROPERTY(BlueprintReadWrite)
	FString Tenant;
	UPROPERTY(BlueprintReadWrite)
	FString Facility;
	UPROPERTY(BlueprintReadWrite)
	FString Asn;
	UPROPERTY(BlueprintReadWrite)
	FString Time_zone;
	UPROPERTY(BlueprintReadWrite)
	FString Description;
	UPROPERTY(BlueprintReadWrite)
	FString Physical_address;
	UPROPERTY(BlueprintReadWrite)
	FString Shipping_address;
	UPROPERTY(BlueprintReadWrite)
	FString Latitude;
	UPROPERTY(BlueprintReadWrite)
	FString Longitude;
	UPROPERTY(BlueprintReadWrite)
	FString Contact_name;
	UPROPERTY(BlueprintReadWrite)
	FString Contact_phone;
	UPROPERTY(BlueprintReadWrite)
	FString Contact_email;
	UPROPERTY(BlueprintReadWrite)
	FString Comments;
	UPROPERTY(BlueprintReadWrite)
	TArray<FTag> Tags;
	UPROPERTY(BlueprintReadWrite)
	FCustomFields Custom_fields;
	UPROPERTY(BlueprintReadWrite)
	FString Created;
	UPROPERTY(BlueprintReadWrite)
	FString Last_updated;
	UPROPERTY(BlueprintReadWrite)
	int Circuit_count;
	UPROPERTY(BlueprintReadWrite)
	int Device_count;
	UPROPERTY(BlueprintReadWrite)
	int Prefix_count;
	UPROPERTY(BlueprintReadWrite)
	int Rack_count;
	UPROPERTY(BlueprintReadWrite)
	int Virtualmachine_count;
	UPROPERTY(BlueprintReadWrite)
	int Vlan_count;
};

USTRUCT(BlueprintType)
struct FNetboxResponse
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	int Count;
	UPROPERTY(BlueprintReadWrite)
	FString Next;
	UPROPERTY(BlueprintReadWrite)
	bool Previous;
	UPROPERTY(BlueprintReadWrite)
	TArray<FResult> Results;
};