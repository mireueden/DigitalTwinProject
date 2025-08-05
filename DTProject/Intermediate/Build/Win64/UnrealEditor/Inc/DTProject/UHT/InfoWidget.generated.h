// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/InfoWidget.h"

#ifdef DTPROJECT_InfoWidget_generated_h
#error "InfoWidget.generated.h already included, missing '#pragma once' in InfoWidget.h"
#endif
#define DTPROJECT_InfoWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInfoWidget **************************************************************
DTPROJECT_API UClass* Z_Construct_UClass_UInfoWidget_NoRegister();

#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInfoWidget(); \
	friend struct Z_Construct_UClass_UInfoWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DTPROJECT_API UClass* Z_Construct_UClass_UInfoWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UInfoWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DTProject"), Z_Construct_UClass_UInfoWidget_NoRegister) \
	DECLARE_SERIALIZER(UInfoWidget)


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInfoWidget(UInfoWidget&&) = delete; \
	UInfoWidget(const UInfoWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfoWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfoWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfoWidget) \
	NO_API virtual ~UInfoWidget();


#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h_12_PROLOG
#define FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInfoWidget;

// ********** End Class UInfoWidget ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
