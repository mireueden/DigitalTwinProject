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
#define CURRENT_FILE_ID FID_workspace_DTProject_Source_DTProject_Actor_ObjectEnum_h

// ********** Begin Enum EObjectEnum ***************************************************************
#define FOREACH_ENUM_EOBJECTENUM(op) \
	op(EObjectEnum::None) \
	op(EObjectEnum::ABC) \
	op(EObjectEnum::DEF) 

enum class EObjectEnum : uint8;
template<> struct TIsUEnumClass<EObjectEnum> { enum { Value = true }; };
template<> DTPROJECT_API UEnum* StaticEnum<EObjectEnum>();
// ********** End Enum EObjectEnum *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
