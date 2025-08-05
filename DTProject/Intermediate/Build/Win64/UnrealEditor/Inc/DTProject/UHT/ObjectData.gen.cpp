// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTProject/Data/ObjectData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObjectData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DTPROJECT_API UClass* Z_Construct_UClass_UObjectData();
DTPROJECT_API UClass* Z_Construct_UClass_UObjectData_NoRegister();
DTPROJECT_API UEnum* Z_Construct_UEnum_DTProject_EObjectType();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UObjectData **************************************************************
void UObjectData::StaticRegisterNativesUObjectData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectData;
UClass* UObjectData::GetPrivateStaticClass()
{
	using TClass = UObjectData;
	if (!Z_Registration_Info_UClass_UObjectData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObjectData"),
			Z_Registration_Info_UClass_UObjectData.InnerSingleton,
			StaticRegisterNativesUObjectData,
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
	return Z_Registration_Info_UClass_UObjectData.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectData_NoRegister()
{
	return UObjectData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ObjectData.h" },
		{ "ModuleRelativePath", "Data/ObjectData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ObjectData" },
		{ "ModuleRelativePath", "Data/ObjectData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ObjectData" },
		{ "ModuleRelativePath", "Data/ObjectData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UObjectData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UObjectData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectData, Type), Z_Construct_UEnum_DTProject_EObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 876934479
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UObjectData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectData_Statics::NewProp_DisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DTProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectData_Statics::ClassParams = {
	&UObjectData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectData_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectData()
{
	if (!Z_Registration_Info_UClass_UObjectData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectData.OuterSingleton, Z_Construct_UClass_UObjectData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectData.OuterSingleton;
}
UObjectData::UObjectData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectData);
UObjectData::~UObjectData() {}
// ********** End Class UObjectData ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h__Script_DTProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectData, UObjectData::StaticClass, TEXT("UObjectData"), &Z_Registration_Info_UClass_UObjectData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectData), 4110577585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h__Script_DTProject_2733122983(TEXT("/Script/DTProject"),
	Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h__Script_DTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Data_ObjectData_h__Script_DTProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
