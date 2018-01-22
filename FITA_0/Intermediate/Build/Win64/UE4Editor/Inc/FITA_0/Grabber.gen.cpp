// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Grabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber() {}
// Cross Module References
	FITA_0_API UFunction* Z_Construct_UDelegateFunction_FITA_0_GrabEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FITA_0();
	FITA_0_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
	FITA_0_API UClass* Z_Construct_UClass_UGrabber();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_FITA_0_GrabEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Grabber.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FITA_0, "GrabEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UGrabber::StaticRegisterNativesUGrabber()
	{
	}
	UClass* Z_Construct_UClass_UGrabber_NoRegister()
	{
		return UGrabber::StaticClass();
	}
	UClass* Z_Construct_UClass_UGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_FITA_0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Grabber.h" },
				{ "ModuleRelativePath", "Grabber.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDrop_MetaData[] = {
				{ "ModuleRelativePath", "Grabber.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDrop = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDrop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UGrabber, OnDrop), Z_Construct_UDelegateFunction_FITA_0_GrabEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnDrop_MetaData, ARRAY_COUNT(NewProp_OnDrop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGrab_MetaData[] = {
				{ "ModuleRelativePath", "Grabber.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrab = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnGrab", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000010080000, 1, nullptr, STRUCT_OFFSET(UGrabber, OnGrab), Z_Construct_UDelegateFunction_FITA_0_GrabEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnGrab_MetaData, ARRAY_COUNT(NewProp_OnGrab_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDrop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnGrab,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGrabber>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGrabber::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabber, 1919601168);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabber(Z_Construct_UClass_UGrabber, &UGrabber::StaticClass, TEXT("/Script/FITA_0"), TEXT("UGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
