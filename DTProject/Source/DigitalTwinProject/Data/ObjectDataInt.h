// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectDataInt.generated.h"

/**
 * 
 */
UCLASS()
class DIGITALTWINPROJECT_API UObjectDataInt : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value;
};
