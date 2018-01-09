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
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDoorRotation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDoorRotation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorRotation, 4131034038);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorRotation(Z_Construct_UClass_UDoorRotation, &UDoorRotation::StaticClass, TEXT("/Script/FITA_0"), TEXT("UDoorRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
