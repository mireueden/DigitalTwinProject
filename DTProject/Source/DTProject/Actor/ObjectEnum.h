// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectEnum.generated.h"

UENUM(BlueprintType)
enum class EObjectEnum : uint8
{
	None = 0    UMETA(DisplayName = "Undefined"),
	ABC,
	DEF,


};