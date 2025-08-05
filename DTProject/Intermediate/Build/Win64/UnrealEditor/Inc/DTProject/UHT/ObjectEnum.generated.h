// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/ObjectEnum.h"

#ifdef DTPROJECT_ObjectEnum_generated_h
#error "ObjectEnum.generated.h already included, missing '#pragma once' in ObjectEnum.h"
#endif
#define DTPROJECT_ObjectEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_workspace_DigitalTwinProject_DTProject_Source_DTProject_Actor_ObjectEnum_h

// ********** Begin Enum EObjectType ***************************************************************
#define FOREACH_ENUM_EOBJECTTYPE(op) \
	op(EObjectType::None) \
	op(EObjectType::ABC) \
	op(EObjectType::DEF) \
	op(EObjectType::TV) \
	op(EObjectType::StandLamp) \
	op(EObjectType::Microwave) \
	op(EObjectType::Hood) \
	op(EObjectType::GasBurner) \
	op(EObjectType::Oven) \
	op(EObjectType::kitchenCupboard) \
	op(EObjectType::ShoeLack) \
	op(EObjectType::BookShelf) \
	op(EObjectType::ReadingTable) \
	op(EObjectType::Bed) \
	op(EObjectType::Lamp) \
	op(EObjectType::Computer) \
	op(EObjectType::Workbench) 

enum class EObjectType : uint8;
template<> struct TIsUEnumClass<EObjectType> { enum { Value = true }; };
template<> DTPROJECT_API UEnum* StaticEnum<EObjectType>();
// ********** End Enum EObjectType *****************************************************************

// ********** Begin Enum EsaveItem *****************************************************************
#define FOREACH_ENUM_ESAVEITEM(op) \
	op(EsaveItem::Box1) \
	op(EsaveItem::Box2) \
	op(EsaveItem::Box3) \
	op(EsaveItem::Box4) \
	op(EsaveItem::Box5) \
	op(EsaveItem::Box6) 

enum class EsaveItem : uint8;
template<> struct TIsUEnumClass<EsaveItem> { enum { Value = true }; };
template<> DTPROJECT_API UEnum* StaticEnum<EsaveItem>();
// ********** End Enum EsaveItem *******************************************************************

// ********** Begin Enum EValueType ****************************************************************
#define FOREACH_ENUM_EVALUETYPE(op) \
	op(EValueType::SaveCount) 

enum class EValueType : uint8;
template<> struct TIsUEnumClass<EValueType> { enum { Value = true }; };
template<> DTPROJECT_API UEnum* StaticEnum<EValueType>();
// ********** End Enum EValueType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
