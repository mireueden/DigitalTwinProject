// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTProject/Actor/InteractiveActorBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractiveActorBase() {}

// ********** Begin Cross Module References ********************************************************
DTPROJECT_API UClass* Z_Construct_UClass_AInteractiveActorBase();
DTPROJECT_API UClass* Z_Construct_UClass_AInteractiveActorBase_NoRegister();
DTPROJECT_API UClass* Z_Construct_UClass_UInteractiveComponentBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractiveActorBase ****************************************************
void AInteractiveActorBase::StaticRegisterNativesAInteractiveActorBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractiveActorBase;
UClass* AInteractiveActorBase::GetPrivateStaticClass()
{
	using TClass = AInteractiveActorBase;
	if (!Z_Registration_Info_UClass_AInteractiveActorBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractiveActorBase"),
			Z_Registration_Info_UClass_AInteractiveActorBase.InnerSingleton,
			StaticRegisterNativesAInteractiveActorBase,
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
	return Z_Registration_Info_UClass_AInteractiveActorBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractiveActorBase_NoRegister()
{
	return AInteractiveActorBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractiveActorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/InteractiveActorBase.h" },
		{ "ModuleRelativePath", "Actor/InteractiveActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComp_MetaData[] = {
		{ "Category", "InteractiveActorBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/InteractiveActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
		{ "Category", "InteractiveActorBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/InteractiveActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "InteractiveActorBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/InteractiveActorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractiveActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveActorBase_Statics::NewProp_SceneComp = { "SceneComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActorBase, SceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComp_MetaData), NewProp_SceneComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveActorBase_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActorBase, CollisionComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComp_MetaData), NewProp_CollisionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveActorBase_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveActorBase, Component), Z_Construct_UClass_UInteractiveComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractiveActorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActorBase_Statics::NewProp_SceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActorBase_Statics::NewProp_CollisionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveActorBase_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractiveActorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DTProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractiveActorBase_Statics::ClassParams = {
	&AInteractiveActorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInteractiveActorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActorBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractiveActorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractiveActorBase()
{
	if (!Z_Registration_Info_UClass_AInteractiveActorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractiveActorBase.OuterSingleton, Z_Construct_UClass_AInteractiveActorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractiveActorBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractiveActorBase);
AInteractiveActorBase::~AInteractiveActorBase() {}
// ********** End Class AInteractiveActorBase ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h__Script_DTProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractiveActorBase, AInteractiveActorBase::StaticClass, TEXT("AInteractiveActorBase"), &Z_Registration_Info_UClass_AInteractiveActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractiveActorBase), 80487934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h__Script_DTProject_3777165883(TEXT("/Script/DTProject"),
	Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h__Script_DTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_InteractiveActorBase_h__Script_DTProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
