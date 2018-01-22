// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFITA_0_init() {}
	FITA_0_API UFunction* Z_Construct_UDelegateFunction_FITA_0_DoorEvent__DelegateSignature();
	FITA_0_API UFunction* Z_Construct_UDelegateFunction_FITA_0_GrabEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FITA_0()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FITA_0_DoorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FITA_0_GrabEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/FITA_0",
				PKG_CompiledIn | 0x00000000,
				0xB372515C,
				0x5E34AC37,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
