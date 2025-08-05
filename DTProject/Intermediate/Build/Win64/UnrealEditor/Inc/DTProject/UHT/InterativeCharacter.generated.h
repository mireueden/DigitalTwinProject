// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/InterativeCharacter.h"

#ifdef DTPROJECT_InterativeCharacter_generated_h
#error "InterativeCharacter.generated.h already included, missing '#pragma once' in InterativeCharacter.h"
#endif
#define DTPROJECT_InterativeCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInterativeCharacter *****************************************************
DTPROJECT_API UClass* Z_Construct_UClass_AInterativeCharacter_NoRegister();

#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInterativeCharacter(); \
	friend struct Z_Construct_UClass_AInterativeCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DTPROJECT_API UClass* Z_Construct_UClass_AInterativeCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AInterativeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DTProject"), Z_Construct_UClass_AInterativeCharacter_NoRegister) \
	DECLARE_SERIALIZER(AInterativeCharacter)


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInterativeCharacter(AInterativeCharacter&&) = delete; \
	AInterativeCharacter(const AInterativeCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInterativeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInterativeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInterativeCharacter) \
	NO_API virtual ~AInterativeCharacter();


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h_13_PROLOG
#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInterativeCharacter;

// ********** End Class AInterativeCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
