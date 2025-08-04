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
DTPROJECT_API UEnum* Z_Construct_UEnum_DTProject_EObjectEnum();
UPackage* Z_Construct_UPackage__Script_DTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EObjectEnum ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectEnum;
static UEnum* EObjectEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EObjectEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EObjectEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DTProject_EObjectEnum, (UObject*)Z_Construct_UPackage__Script_DTProject(), TEXT("EObjectEnum"));
	}
	return Z_Registration_Info_UEnum_EObjectEnum.OuterSingleton;
}
template<> DTPROJECT_API UEnum* StaticEnum<EObjectEnum>()
{
	return EObjectEnum_StaticEnum();
}
struct Z_Construct_UEnum_DTProject_EObjectEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ABC.Name", "EObjectEnum::ABC" },
		{ "BlueprintType", "true" },
		{ "DEF.Name", "EObjectEnum::DEF" },
		{ "ModuleRelativePath", "Actor/ObjectEnum.h" },
		{ "None.DisplayName", "Undefined" },
		{ "None.Name", "EObjectEnum::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EObjectEnum::None", (int64)EObjectEnum::None },
		{ "EObjectEnum::ABC", (int64)EObjectEnum::ABC },
		{ "EObjectEnum::DEF", (int64)EObjectEnum::DEF },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DTProject_EObjectEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DTProject,
	nullptr,
	"EObjectEnum",
	"EObjectEnum",
	Z_Construct_UEnum_DTProject_EObjectEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DTProject_EObjectEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DTProject_EObjectEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DTProject_EObjectEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DTProject_EObjectEnum()
{
	if (!Z_Registration_Info_UEnum_EObjectEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectEnum.InnerSingleton, Z_Construct_UEnum_DTProject_EObjectEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EObjectEnum.InnerSingleton;
}
// ********** End Enum EObjectEnum *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_workspace_DTProject_Source_DTProject_Actor_ObjectEnum_h__Script_DTProject_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EObjectEnum_StaticEnum, TEXT("EObjectEnum"), &Z_Registration_Info_UEnum_EObjectEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1590035634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_workspace_DTProject_Source_DTProject_Actor_ObjectEnum_h__Script_DTProject_1461003213(TEXT("/Script/DTProject"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_workspace_DTProject_Source_DTProject_Actor_ObjectEnum_h__Script_DTProject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_workspace_DTProject_Source_DTProject_Actor_ObjectEnum_h__Script_DTProject_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
