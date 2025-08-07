// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum class EObjectType : uint8
{
	None = 0    UMETA(DisplayName = "Undefined"),

	DefaultDoor,
	SidingDoor,

	TV,
	StandLamp,

	Microwave,
	Hood,
	GasBurner,
	Oven,
	kitchenCupboard, // 찬장

	ShoeLack,

	BookShelf,
	ReadingTable,

	Bed,
	Lamp,

	Computer,
	Workbench,
};

UENUM(BlueprintType)
enum class EsaveItem : uint8
{
	Box1,
	Box2,
	Box3,
	Box4,
	Box5,
	Box6,

};
UENUM(BlueprintType)
enum class EValueType : uint8
{
	Count,
	temperature,
	Time,


};
