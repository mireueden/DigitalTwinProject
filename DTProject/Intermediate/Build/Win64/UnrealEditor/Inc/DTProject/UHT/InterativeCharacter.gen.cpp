// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTProject/Actor/InterativeCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInterativeCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DTPROJECT_API UClass* Z_Construct_UClass_AInteractiveActorBase_NoRegister();
DTPROJECT_API UClass* Z_Construct_UClass_AInterativeCharacter();
DTPROJECT_API UClass* Z_Construct_UClass_AInterativeCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInterativeCharacter *****************************************************
void AInterativeCharacter::StaticRegisterNativesAInterativeCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInterativeCharacter;
UClass* AInterativeCharacter::GetPrivateStaticClass()
{
	using TClass = AInterativeCharacter;
	if (!Z_Registration_Info_UClass_AInterativeCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InterativeCharacter"),
			Z_Registration_Info_UClass_AInterativeCharacter.InnerSingleton,
			StaticRegisterNativesAInterativeCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AInterativeCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AInterativeCharacter_NoRegister()
{
	return AInterativeCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInterativeCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actor/InterativeCharacter.h" },
		{ "ModuleRelativePath", "Actor/InterativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "InterativeCharacter" },
		{ "ModuleRelativePath", "Actor/InterativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "InterativeCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/InterativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "InterativeCharacter" },
		{ "ModuleRelativePath", "Actor/InterativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInterativeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInterativeCharacter_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInterativeCharacter, CurrentTarget), Z_Construct_UClass_AInteractiveActorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInterativeCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInterativeCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInterativeCharacter_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInterativeCharacter, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInterativeCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInterativeCharacter_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInterativeCharacter_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInterativeCharacter_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInterativeCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInterativeCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DTProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInterativeCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInterativeCharacter_Statics::ClassParams = {
	&AInterativeCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInterativeCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInterativeCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInterativeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AInterativeCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInterativeCharacter()
{
	if (!Z_Registration_Info_UClass_AInterativeCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInterativeCharacter.OuterSingleton, Z_Construct_UClass_AInterativeCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInterativeCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInterativeCharacter);
AInterativeCharacter::~AInterativeCharacter() {}
// ********** End Class AInterativeCharacter *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h__Script_DTProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInterativeCharacter, AInterativeCharacter::StaticClass, TEXT("AInterativeCharacter"), &Z_Registration_Info_UClass_AInterativeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInterativeCharacter), 3090990655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h__Script_DTProject_3637065162(TEXT("/Script/DTProject"),
	Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h__Script_DTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InterativeCharacter_h__Script_DTProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
