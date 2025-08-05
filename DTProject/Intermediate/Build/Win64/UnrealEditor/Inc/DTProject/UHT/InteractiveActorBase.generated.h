// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/InteractiveActorBase.h"

#ifdef DTPROJECT_InteractiveActorBase_generated_h
#error "InteractiveActorBase.generated.h already included, missing '#pragma once' in InteractiveActorBase.h"
#endif
#define DTPROJECT_InteractiveActorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInteractiveActorBase ****************************************************
DTPROJECT_API UClass* Z_Construct_UClass_AInteractiveActorBase_NoRegister();

#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractiveActorBase(); \
	friend struct Z_Construct_UClass_AInteractiveActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DTPROJECT_API UClass* Z_Construct_UClass_AInteractiveActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractiveActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DTProject"), Z_Construct_UClass_AInteractiveActorBase_NoRegister) \
	DECLARE_SERIALIZER(AInteractiveActorBase)


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractiveActorBase(AInteractiveActorBase&&) = delete; \
	AInteractiveActorBase(const AInteractiveActorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractiveActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractiveActorBase) \
	NO_API virtual ~AInteractiveActorBase();


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h_15_PROLOG
#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractiveActorBase;

// ********** End Class AInteractiveActorBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
