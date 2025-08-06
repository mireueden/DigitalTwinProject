// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ObjectDataAsset.generated.h"

enum class EObjectType : uint8;
enum class EsaveItem : uint8;
enum class EValueType : uint8;
/**
 * 
 */
UCLASS()
class DIGITALTWINPROJECT_API UObjectDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	EObjectType Type;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TMap<EsaveItem, int> ItemCountMap;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TMap<EValueType, int> ItemValueMap;
};
