// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FITA_0GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFITA_0GameModeBase() {}
// Cross Module References
	FITA_0_API UClass* Z_Construct_UClass_AFITA_0GameModeBase_NoRegister();
	FITA_0_API UClass* Z_Construct_UClass_AFITA_0GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FITA_0();
// End Cross Module References
	void AFITA_0GameModeBase::StaticRegisterNativesAFITA_0GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFITA_0GameModeBase_NoRegister()
	{
		return AFITA_0GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AFITA_0GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FITA_0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FITA_0GameModeBase.h" },
				{ "ModuleRelativePath", "FITA_0GameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFITA_0GameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFITA_0GameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AFITA_0GameModeBase, 2870732896);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFITA_0GameModeBase(Z_Construct_UClass_AFITA_0GameModeBase, &AFITA_0GameModeBase::StaticClass, TEXT("/Script/FITA_0"), TEXT("AFITA_0GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFITA_0GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
