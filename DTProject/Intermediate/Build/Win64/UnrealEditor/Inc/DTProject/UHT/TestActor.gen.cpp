// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTProject/Test/TestActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTestActor() {}

// ********** Begin Cross Module References ********************************************************
DTPROJECT_API UClass* Z_Construct_UClass_ATestActor();
DTPROJECT_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATestActor ***************************************************************
void ATestActor::StaticRegisterNativesATestActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATestActor;
UClass* ATestActor::GetPrivateStaticClass()
{
	using TClass = ATestActor;
	if (!Z_Registration_Info_UClass_ATestActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TestActor"),
			Z_Registration_Info_UClass_ATestActor.InnerSingleton,
			StaticRegisterNativesATestActor,
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
	return Z_Registration_Info_UClass_ATestActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ATestActor_NoRegister()
{
	return ATestActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Test/TestActor.h" },
		{ "ModuleRelativePath", "Test/TestActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DTProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
	&ATestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestActor()
{
	if (!Z_Registration_Info_UClass_ATestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActor.OuterSingleton, Z_Construct_UClass_ATestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActor);
ATestActor::~ATestActor() {}
// ********** End Class ATestActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h__Script_DTProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestActor, ATestActor::StaticClass, TEXT("ATestActor"), &Z_Registration_Info_UClass_ATestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActor), 3611641560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h__Script_DTProject_418094843(TEXT("/Script/DTProject"),
	Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h__Script_DTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Test_TestActor_h__Script_DTProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
