// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTProject/Data/ObjectDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObjectDataAsset() {}

// ********** Begin Cross Module References ********************************************************
DTPROJECT_API UClass* Z_Construct_UClass_UObjectDataAsset();
DTPROJECT_API UClass* Z_Construct_UClass_UObjectDataAsset_NoRegister();
DTPROJECT_API UEnum* Z_Construct_UEnum_DTProject_EObjectType();
DTPROJECT_API UEnum* Z_Construct_UEnum_DTProject_EValueType();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UObjectDataAsset *********************************************************
void UObjectDataAsset::StaticRegisterNativesUObjectDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectDataAsset;
UClass* UObjectDataAsset::GetPrivateStaticClass()
{
	using TClass = UObjectDataAsset;
	if (!Z_Registration_Info_UClass_UObjectDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObjectDataAsset"),
			Z_Registration_Info_UClass_UObjectDataAsset.InnerSingleton,
			StaticRegisterNativesUObjectDataAsset,
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
	return Z_Registration_Info_UClass_UObjectDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectDataAsset_NoRegister()
{
	return UObjectDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Data/ObjectDataAsset.h" },
		{ "ModuleRelativePath", "Data/ObjectDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ObjectDataAsset" },
		{ "ModuleRelativePath", "Data/ObjectDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ObjectDataAsset" },
		{ "ModuleRelativePath", "Data/ObjectDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "ObjectDataAsset" },
		{ "ModuleRelativePath", "Data/ObjectDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueMap_MetaData[] = {
		{ "Category", "ObjectDataAsset" },
		{ "ModuleRelativePath", "Data/ObjectDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValueMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultValueMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultValueMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultValueMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectDataAsset, Type), Z_Construct_UEnum_DTProject_EObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 876934479
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectDataAsset, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectDataAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DefaultValueMap_ValueProp = { "DefaultValueMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DefaultValueMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DefaultValueMap_Key_KeyProp = { "DefaultValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DTProject_EValueType, METADATA_PARAMS(0, nullptr) }; // 3505124294
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DefaultValueMap = { "DefaultValueMap", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectDataAsset, DefaultValueMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValueMap_MetaData), NewProp_DefaultValueMap_MetaData) }; // 3505124294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DefaultValueMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DefaultValueMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DefaultValueMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectDataAsset_Statics::NewProp_DefaultValueMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DTProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectDataAsset_Statics::ClassParams = {
	&UObjectDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectDataAsset()
{
	if (!Z_Registration_Info_UClass_UObjectDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectDataAsset.OuterSingleton, Z_Construct_UClass_UObjectDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectDataAsset.OuterSingleton;
}
UObjectDataAsset::UObjectDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectDataAsset);
UObjectDataAsset::~UObjectDataAsset() {}
// ********** End Class UObjectDataAsset ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h__Script_DTProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectDataAsset, UObjectDataAsset::StaticClass, TEXT("UObjectDataAsset"), &Z_Registration_Info_UClass_UObjectDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectDataAsset), 3998647816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h__Script_DTProject_1472916178(TEXT("/Script/DTProject"),
	Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h__Script_DTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectDataAsset_h__Script_DTProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
