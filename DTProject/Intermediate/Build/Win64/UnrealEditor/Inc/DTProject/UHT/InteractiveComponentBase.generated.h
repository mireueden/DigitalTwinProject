// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/InteractiveComponentBase.h"

#ifdef DTPROJECT_InteractiveComponentBase_generated_h
#error "InteractiveComponentBase.generated.h already included, missing '#pragma once' in InteractiveComponentBase.h"
#endif
#define DTPROJECT_InteractiveComponentBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EObjectEnum : uint8;

// ********** Begin Class UInteractiveComponentBase ************************************************
#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetObjectType); \
	DECLARE_FUNCTION(execGetComponentInfo); \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execBeginFocus); \
	DECLARE_FUNCTION(execIsWorking); \
	DECLARE_FUNCTION(execTurnOff); \
	DECLARE_FUNCTION(execTurnOn);


#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_15_CALLBACK_WRAPPERS
DTPROJECT_API UClass* Z_Construct_UClass_UInteractiveComponentBase_NoRegister();

#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveComponentBase(); \
	friend struct Z_Construct_UClass_UInteractiveComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DTPROJECT_API UClass* Z_Construct_UClass_UInteractiveComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DTProject"), Z_Construct_UClass_UInteractiveComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveComponentBase)


#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveComponentBase(UInteractiveComponentBase&&) = delete; \
	UInteractiveComponentBase(const UInteractiveComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveComponentBase) \
	NO_API virtual ~UInteractiveComponentBase();


#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_12_PROLOG
#define FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_15_CALLBACK_WRAPPERS \
	FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveComponentBase;

// ********** End Class UInteractiveComponentBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_DTProject_Source_DTProject_Actor_InteractiveComponentBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
