// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ObjectDataAsset.h"

#ifdef DTPROJECT_ObjectDataAsset_generated_h
#error "ObjectDataAsset.generated.h already included, missing '#pragma once' in ObjectDataAsset.h"
#endif
#define DTPROJECT_ObjectDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectDataAsset *********************************************************
DTPROJECT_API UClass* Z_Construct_UClass_UObjectDataAsset_NoRegister();

#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectDataAsset(); \
	friend struct Z_Construct_UClass_UObjectDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DTPROJECT_API UClass* Z_Construct_UClass_UObjectDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DTProject"), Z_Construct_UClass_UObjectDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UObjectDataAsset)


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectDataAsset(UObjectDataAsset&&) = delete; \
	UObjectDataAsset(const UObjectDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectDataAsset) \
	NO_API virtual ~UObjectDataAsset();


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h_14_PROLOG
#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectDataAsset;

// ********** End Class UObjectDataAsset ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
