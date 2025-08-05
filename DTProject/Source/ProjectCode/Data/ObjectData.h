// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectData.generated.h"

enum class EObjectType : uint8;

UCLASS()
class DTPROJECT_API UObjectData : public UObject
{
	GENERATED_BODY()


public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	EObjectType Type;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FText DisplayName;

};
