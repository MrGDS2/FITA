// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DoorRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorRotation() {}
// Cross Module References
	FITA_0_API UClass* Z_Construct_UClass_UDoorRotation_NoRegister();
	FITA_0_API UClass* Z_Construct_UClass_UDoorRotation();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FITA_0();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UDoorRotation::StaticRegisterNativesUDoorRotation()
	{
	}
	UClass* Z_Construct_UClass_UDoorRotation_NoRegister()
	{
		return UDoorRotation::StaticClass();
	}
	UClass* Z_Construct_UClass_UDoorRotation()
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
				{ "IncludePath", "DoorRotation.h" },
				{ "ModuleRelativePath", "DoorRotation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCloseDelay_MetaData[] = {
				{ "Category", "DoorRotation" },
				{ "ModuleRelativePath", "DoorRotation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoorCloseDelay = { UE4CodeGen_Private::EPropertyClass::Float, "DoorCloseDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDoorRotation, DoorCloseDelay), METADATA_PARAMS(NewProp_DoorCloseDelay_MetaData, ARRAY_COUNT(NewProp_DoorCloseDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePoint_MetaData[] = {
				{ "Category", "DoorRotation" },
				{ "ModuleRelativePath", "DoorRotation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePoint = { UE4CodeGen_Private::EPropertyClass::Object, "PressurePoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDoorRotation, PressurePoint), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(NewProp_PressurePoint_MetaData, ARRAY_COUNT(NewProp_PressurePoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[] = {
				{ "Category", "DoorRotation" },
				{ "ModuleRelativePath", "DoorRotation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenAngle = { UE4CodeGen_Private::EPropertyClass::Float, "OpenAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UDoorRotation, OpenAngle), METADATA_PARAMS(NewProp_OpenAngle_MetaData, ARRAY_COUNT(NewProp_OpenAngle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorCloseDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PressurePoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenAngle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDoorRotation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDoorRotation::StaticClass,
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
	IMPLEMENT_CLASS(UDoorRotation, 2500689699);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorRotation(Z_Construct_UClass_UDoorRotation, &UDoorRotation::StaticClass, TEXT("/Script/FITA_0"), TEXT("UDoorRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
