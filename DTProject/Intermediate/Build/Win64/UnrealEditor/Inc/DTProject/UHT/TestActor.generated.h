// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Test/TestActor.h"

#ifdef DTPROJECT_TestActor_generated_h
#error "TestActor.generated.h already included, missing '#pragma once' in TestActor.h"
#endif
#define DTPROJECT_TestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATestActor ***************************************************************
DTPROJECT_API UClass* Z_Construct_UClass_ATestActor_NoRegister();

#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestActor(); \
	friend struct Z_Construct_UClass_ATestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DTPROJECT_API UClass* Z_Construct_UClass_ATestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DTProject"), Z_Construct_UClass_ATestActor_NoRegister) \
	DECLARE_SERIALIZER(ATestActor)


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestActor(ATestActor&&) = delete; \
	ATestActor(const ATestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestActor) \
	NO_API virtual ~ATestActor();


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h_9_PROLOG
#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestActor;

// ********** End Class ATestActor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
