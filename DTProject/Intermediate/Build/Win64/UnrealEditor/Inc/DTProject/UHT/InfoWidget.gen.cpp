// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTProject/Widget/InfoWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInfoWidget() {}

// ********** Begin Cross Module References ********************************************************
DTPROJECT_API UClass* Z_Construct_UClass_UInfoWidget();
DTPROJECT_API UClass* Z_Construct_UClass_UInfoWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInfoWidget **************************************************************
void UInfoWidget::StaticRegisterNativesUInfoWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInfoWidget;
UClass* UInfoWidget::GetPrivateStaticClass()
{
	using TClass = UInfoWidget;
	if (!Z_Registration_Info_UClass_UInfoWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InfoWidget"),
			Z_Registration_Info_UClass_UInfoWidget.InnerSingleton,
			StaticRegisterNativesUInfoWidget,
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
	return Z_Registration_Info_UClass_UInfoWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UInfoWidget_NoRegister()
{
	return UInfoWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInfoWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/InfoWidget.h" },
		{ "ModuleRelativePath", "Widget/InfoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/InfoWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Explanation_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/InfoWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Explanation_Image;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInfoWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoWidget_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoWidget, ActorName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoWidget_Statics::NewProp_Explanation_Image = { "Explanation_Image", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoWidget, Explanation_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Explanation_Image_MetaData), NewProp_Explanation_Image_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInfoWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoWidget_Statics::NewProp_ActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoWidget_Statics::NewProp_Explanation_Image,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInfoWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DTProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInfoWidget_Statics::ClassParams = {
	&UInfoWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInfoWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInfoWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInfoWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInfoWidget()
{
	if (!Z_Registration_Info_UClass_UInfoWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInfoWidget.OuterSingleton, Z_Construct_UClass_UInfoWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInfoWidget.OuterSingleton;
}
UInfoWidget::UInfoWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInfoWidget);
UInfoWidget::~UInfoWidget() {}
// ********** End Class UInfoWidget ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h__Script_DTProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInfoWidget, UInfoWidget::StaticClass, TEXT("UInfoWidget"), &Z_Registration_Info_UClass_UInfoWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInfoWidget), 2829897518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h__Script_DTProject_2648146466(TEXT("/Script/DTProject"),
	Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h__Script_DTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Widget_InfoWidget_h__Script_DTProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
