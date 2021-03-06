// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FITA_0_Grabber_generated_h
#error "Grabber.generated.h already included, missing '#pragma once' in Grabber.h"
#endif
#define FITA_0_Grabber_generated_h

#define FITA_0_Source_FITA_0_Grabber_h_12_DELEGATE \
static inline void FGrabEvent_DelegateWrapper(const FMulticastScriptDelegate& GrabEvent) \
{ \
	GrabEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FITA_0_Source_FITA_0_Grabber_h_17_RPC_WRAPPERS
#define FITA_0_Source_FITA_0_Grabber_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FITA_0_Source_FITA_0_Grabber_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend FITA_0_API class UClass* Z_Construct_UClass_UGrabber(); \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FITA_0"), NO_API) \
	DECLARE_SERIALIZER(UGrabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FITA_0_Source_FITA_0_Grabber_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend FITA_0_API class UClass* Z_Construct_UClass_UGrabber(); \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FITA_0"), NO_API) \
	DECLARE_SERIALIZER(UGrabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FITA_0_Source_FITA_0_Grabber_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public:


#define FITA_0_Source_FITA_0_Grabber_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber)


#define FITA_0_Source_FITA_0_Grabber_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnGrab() { return STRUCT_OFFSET(UGrabber, OnGrab); } \
	FORCEINLINE static uint32 __PPO__OnDrop() { return STRUCT_OFFSET(UGrabber, OnDrop); }


#define FITA_0_Source_FITA_0_Grabber_h_14_PROLOG
#define FITA_0_Source_FITA_0_Grabber_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FITA_0_Source_FITA_0_Grabber_h_17_PRIVATE_PROPERTY_OFFSET \
	FITA_0_Source_FITA_0_Grabber_h_17_RPC_WRAPPERS \
	FITA_0_Source_FITA_0_Grabber_h_17_INCLASS \
	FITA_0_Source_FITA_0_Grabber_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FITA_0_Source_FITA_0_Grabber_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FITA_0_Source_FITA_0_Grabber_h_17_PRIVATE_PROPERTY_OFFSET \
	FITA_0_Source_FITA_0_Grabber_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FITA_0_Source_FITA_0_Grabber_h_17_INCLASS_NO_PURE_DECLS \
	FITA_0_Source_FITA_0_Grabber_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FITA_0_Source_FITA_0_Grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
