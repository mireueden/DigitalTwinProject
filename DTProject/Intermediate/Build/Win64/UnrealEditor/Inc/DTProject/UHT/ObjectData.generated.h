// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ObjectData.h"

#ifdef DTPROJECT_ObjectData_generated_h
#error "ObjectData.generated.h already included, missing '#pragma once' in ObjectData.h"
#endif
#define DTPROJECT_ObjectData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectData **************************************************************
DTPROJECT_API UClass* Z_Construct_UClass_UObjectData_NoRegister();

#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectData(); \
	friend struct Z_Construct_UClass_UObjectData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DTPROJECT_API UClass* Z_Construct_UClass_UObjectData_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DTProject"), Z_Construct_UClass_UObjectData_NoRegister) \
	DECLARE_SERIALIZER(UObjectData)


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectData(UObjectData&&) = delete; \
	UObjectData(const UObjectData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectData) \
	NO_API virtual ~UObjectData();


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h_11_PROLOG
#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h_14_INCLASS_NO_PURE_DECLS \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectData;

// ********** End Class UObjectData ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
