// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/InteractiveActorInterface.h"

#ifdef DTPROJECT_InteractiveActorInterface_generated_h
#error "InteractiveActorInterface.generated.h already included, missing '#pragma once' in InteractiveActorInterface.h"
#endif
#define DTPROJECT_InteractiveActorInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInteractiveActorInterface *******************************************
#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execBeginFocus); \
	DECLARE_FUNCTION(execTurnOff); \
	DECLARE_FUNCTION(execTurnOn);


#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_CALLBACK_WRAPPERS
DTPROJECT_API UClass* Z_Construct_UClass_UInteractiveActorInterface_NoRegister();

#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DTPROJECT_API UInteractiveActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveActorInterface(UInteractiveActorInterface&&) = delete; \
	UInteractiveActorInterface(const UInteractiveActorInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DTPROJECT_API, UInteractiveActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveActorInterface) \
	virtual ~UInteractiveActorInterface() = default;


#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractiveActorInterface(); \
	friend struct Z_Construct_UClass_UInteractiveActorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DTPROJECT_API UClass* Z_Construct_UClass_UInteractiveActorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DTProject"), Z_Construct_UClass_UInteractiveActorInterface_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveActorInterface)


#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractiveActorInterface() {} \
public: \
	typedef UInteractiveActorInterface UClassType; \
	typedef IInteractiveActorInterface ThisClass; \
	static void Execute_BeginFocus(UObject* O); \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_TurnOff(UObject* O); \
	static void Execute_TurnOn(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_10_PROLOG
#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_CALLBACK_WRAPPERS \
	FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveActorInterface;

// ********** End Interface UInteractiveActorInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_DTProject_Source_DTProject_Actor_InteractiveActorInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
