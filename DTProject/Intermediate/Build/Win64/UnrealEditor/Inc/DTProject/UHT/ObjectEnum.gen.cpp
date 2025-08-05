// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DTProject/Actor/ObjectEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObjectEnum() {}

// ********** Begin Cross Module References ********************************************************
DTPROJECT_API UEnum* Z_Construct_UEnum_DTProject_EObjectType();
DTPROJECT_API UEnum* Z_Construct_UEnum_DTProject_EsaveItem();
DTPROJECT_API UEnum* Z_Construct_UEnum_DTProject_EValueType();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EObjectType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectType;
static UEnum* EObjectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EObjectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DTProject_EObjectType, (UObject*)Z_Construct_UPackage__Script_DTProject(), TEXT("EObjectType"));
	}
	return Z_Registration_Info_UEnum_EObjectType.OuterSingleton;
}
template<> DTPROJECT_API UEnum* StaticEnum<EObjectType>()
{
	return EObjectType_StaticEnum();
}
struct Z_Construct_UEnum_DTProject_EObjectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ABC.Name", "EObjectType::ABC" },
		{ "Bed.Name", "EObjectType::Bed" },
		{ "BlueprintType", "true" },
		{ "BookShelf.Name", "EObjectType::BookShelf" },
		{ "Computer.Name", "EObjectType::Computer" },
		{ "DEF.Name", "EObjectType::DEF" },
		{ "GasBurner.Name", "EObjectType::GasBurner" },
		{ "Hood.Name", "EObjectType::Hood" },
		{ "kitchenCupboard.Name", "EObjectType::kitchenCupboard" },
		{ "Lamp.Name", "EObjectType::Lamp" },
		{ "Microwave.Name", "EObjectType::Microwave" },
		{ "ModuleRelativePath", "Actor/ObjectEnum.h" },
		{ "None.DisplayName", "Undefined" },
		{ "None.Name", "EObjectType::None" },
		{ "Oven.Name", "EObjectType::Oven" },
		{ "ReadingTable.Name", "EObjectType::ReadingTable" },
		{ "ShoeLack.Comment", "// \xec\xb0\xac\xec\x9e\xa5\n" },
		{ "ShoeLack.Name", "EObjectType::ShoeLack" },
		{ "ShoeLack.ToolTip", "\xec\xb0\xac\xec\x9e\xa5" },
		{ "StandLamp.Name", "EObjectType::StandLamp" },
		{ "TV.Name", "EObjectType::TV" },
		{ "Workbench.Name", "EObjectType::Workbench" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EObjectType::None", (int64)EObjectType::None },
		{ "EObjectType::ABC", (int64)EObjectType::ABC },
		{ "EObjectType::DEF", (int64)EObjectType::DEF },
		{ "EObjectType::TV", (int64)EObjectType::TV },
		{ "EObjectType::StandLamp", (int64)EObjectType::StandLamp },
		{ "EObjectType::Microwave", (int64)EObjectType::Microwave },
		{ "EObjectType::Hood", (int64)EObjectType::Hood },
		{ "EObjectType::GasBurner", (int64)EObjectType::GasBurner },
		{ "EObjectType::Oven", (int64)EObjectType::Oven },
		{ "EObjectType::kitchenCupboard", (int64)EObjectType::kitchenCupboard },
		{ "EObjectType::ShoeLack", (int64)EObjectType::ShoeLack },
		{ "EObjectType::BookShelf", (int64)EObjectType::BookShelf },
		{ "EObjectType::ReadingTable", (int64)EObjectType::ReadingTable },
		{ "EObjectType::Bed", (int64)EObjectType::Bed },
		{ "EObjectType::Lamp", (int64)EObjectType::Lamp },
		{ "EObjectType::Computer", (int64)EObjectType::Computer },
		{ "EObjectType::Workbench", (int64)EObjectType::Workbench },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DTProject_EObjectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DTProject,
	nullptr,
	"EObjectType",
	"EObjectType",
	Z_Construct_UEnum_DTProject_EObjectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DTProject_EObjectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DTProject_EObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DTProject_EObjectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DTProject_EObjectType()
{
	if (!Z_Registration_Info_UEnum_EObjectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectType.InnerSingleton, Z_Construct_UEnum_DTProject_EObjectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EObjectType.InnerSingleton;
}
// ********** End Enum EObjectType *****************************************************************

// ********** Begin Enum EsaveItem *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EsaveItem;
static UEnum* EsaveItem_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EsaveItem.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EsaveItem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DTProject_EsaveItem, (UObject*)Z_Construct_UPackage__Script_DTProject(), TEXT("EsaveItem"));
	}
	return Z_Registration_Info_UEnum_EsaveItem.OuterSingleton;
}
template<> DTPROJECT_API UEnum* StaticEnum<EsaveItem>()
{
	return EsaveItem_StaticEnum();
}
struct Z_Construct_UEnum_DTProject_EsaveItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box1.Name", "EsaveItem::Box1" },
		{ "Box2.Name", "EsaveItem::Box2" },
		{ "Box3.Name", "EsaveItem::Box3" },
		{ "Box4.Name", "EsaveItem::Box4" },
		{ "Box5.Name", "EsaveItem::Box5" },
		{ "Box6.Name", "EsaveItem::Box6" },
		{ "ModuleRelativePath", "Actor/ObjectEnum.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EsaveItem::Box1", (int64)EsaveItem::Box1 },
		{ "EsaveItem::Box2", (int64)EsaveItem::Box2 },
		{ "EsaveItem::Box3", (int64)EsaveItem::Box3 },
		{ "EsaveItem::Box4", (int64)EsaveItem::Box4 },
		{ "EsaveItem::Box5", (int64)EsaveItem::Box5 },
		{ "EsaveItem::Box6", (int64)EsaveItem::Box6 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DTProject_EsaveItem_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DTProject,
	nullptr,
	"EsaveItem",
	"EsaveItem",
	Z_Construct_UEnum_DTProject_EsaveItem_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DTProject_EsaveItem_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DTProject_EsaveItem_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DTProject_EsaveItem_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DTProject_EsaveItem()
{
	if (!Z_Registration_Info_UEnum_EsaveItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EsaveItem.InnerSingleton, Z_Construct_UEnum_DTProject_EsaveItem_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EsaveItem.InnerSingleton;
}
// ********** End Enum EsaveItem *******************************************************************

// ********** Begin Enum EValueType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EValueType;
static UEnum* EValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DTProject_EValueType, (UObject*)Z_Construct_UPackage__Script_DTProject(), TEXT("EValueType"));
	}
	return Z_Registration_Info_UEnum_EValueType.OuterSingleton;
}
template<> DTPROJECT_API UEnum* StaticEnum<EValueType>()
{
	return EValueType_StaticEnum();
}
struct Z_Construct_UEnum_DTProject_EValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actor/ObjectEnum.h" },
		{ "SaveCount.Name", "EValueType::SaveCount" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EValueType::SaveCount", (int64)EValueType::SaveCount },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DTProject_EValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DTProject,
	nullptr,
	"EValueType",
	"EValueType",
	Z_Construct_UEnum_DTProject_EValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DTProject_EValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DTProject_EValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DTProject_EValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DTProject_EValueType()
{
	if (!Z_Registration_Info_UEnum_EValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EValueType.InnerSingleton, Z_Construct_UEnum_DTProject_EValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EValueType.InnerSingleton;
}
// ********** End Enum EValueType ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_ObjectEnum_h__Script_DTProject_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EObjectType_StaticEnum, TEXT("EObjectType"), &Z_Registration_Info_UEnum_EObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 876934479U) },
		{ EsaveItem_StaticEnum, TEXT("EsaveItem"), &Z_Registration_Info_UEnum_EsaveItem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 320111986U) },
		{ EValueType_StaticEnum, TEXT("EValueType"), &Z_Registration_Info_UEnum_EValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3505124294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_ObjectEnum_h__Script_DTProject_1953575655(TEXT("/Script/DTProject"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_ObjectEnum_h__Script_DTProject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_ObjectEnum_h__Script_DTProject_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
