// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FITA_0_DoorRotation_generated_h
#error "DoorRotation.generated.h already included, missing '#pragma once' in DoorRotation.h"
#endif
#define FITA_0_DoorRotation_generated_h

#define FITA_0_Source_FITA_0_DoorRotation_h_11_DELEGATE \
static inline void FOnOpenRequest_DelegateWrapper(const FMulticastScriptDelegate& OnOpenRequest) \
{ \
	OnOpenRequest.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FITA_0_Source_FITA_0_DoorRotation_h_16_RPC_WRAPPERS
#define FITA_0_Source_FITA_0_DoorRotation_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FITA_0_Source_FITA_0_DoorRotation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorRotation(); \
	friend FITA_0_API class UClass* Z_Construct_UClass_UDoorRotation(); \
public: \
	DECLARE_CLASS(UDoorRotation, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FITA_0"), NO_API) \
	DECLARE_SERIALIZER(UDoorRotation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FITA_0_Source_FITA_0_DoorRotation_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDoorRotation(); \
	friend FITA_0_API class UClass* Z_Construct_UClass_UDoorRotation(); \
public: \
	DECLARE_CLASS(UDoorRotation, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FITA_0"), NO_API) \
	DECLARE_SERIALIZER(UDoorRotation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FITA_0_Source_FITA_0_DoorRotation_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorRotation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorRotation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorRotation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorRotation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorRotation(UDoorRotation&&); \
	NO_API UDoorRotation(const UDoorRotation&); \
public:


#define FITA_0_Source_FITA_0_DoorRotation_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorRotation(UDoorRotation&&); \
	NO_API UDoorRotation(const UDoorRotation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorRotation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorRotation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorRotation)


#define FITA_0_Source_FITA_0_DoorRotation_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OpenAngle() { return STRUCT_OFFSET(UDoorRotation, OpenAngle); } \
	FORCEINLINE static uint32 __PPO__PressurePoint() { return STRUCT_OFFSET(UDoorRotation, PressurePoint); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(UDoorRotation, DoorCloseDelay); } \
	FORCEINLINE static uint32 __PPO__TotalMassAllowedToOpen() { return STRUCT_OFFSET(UDoorRotation, TotalMassAllowedToOpen); } \
	FORCEINLINE static uint32 __PPO__OnOpenRequest() { return STRUCT_OFFSET(UDoorRotation, OnOpenRequest); }


#define FITA_0_Source_FITA_0_DoorRotation_h_13_PROLOG
#define FITA_0_Source_FITA_0_DoorRotation_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FITA_0_Source_FITA_0_DoorRotation_h_16_PRIVATE_PROPERTY_OFFSET \
	FITA_0_Source_FITA_0_DoorRotation_h_16_RPC_WRAPPERS \
	FITA_0_Source_FITA_0_DoorRotation_h_16_INCLASS \
	FITA_0_Source_FITA_0_DoorRotation_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FITA_0_Source_FITA_0_DoorRotation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FITA_0_Source_FITA_0_DoorRotation_h_16_PRIVATE_PROPERTY_OFFSET \
	FITA_0_Source_FITA_0_DoorRotation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FITA_0_Source_FITA_0_DoorRotation_h_16_INCLASS_NO_PURE_DECLS \
	FITA_0_Source_FITA_0_DoorRotation_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FITA_0_Source_FITA_0_DoorRotation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
