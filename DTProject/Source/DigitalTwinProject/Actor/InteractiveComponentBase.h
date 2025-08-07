// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractiveComponentBase.generated.h"

enum class EObjectType : uint8;
enum class EsaveItem : uint8;
enum class EValueType : uint8;

class UObjectDataAsset;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DIGITALTWINPROJECT_API UInteractiveComponentBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractiveComponentBase();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsWorking() const { return bWorking; }
public:
	UFUNCTION(BlueprintCallable)
	FString GetComponentInfo();

public:


	UPROPERTY(VisibleInstanceOnly)
	bool bWorking;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UObjectDataAsset> ObjectDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObjectDataAsset* DataAssetInstance;

public:
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Inspectable")
	EObjectType GetActorType() const;

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Inspectable")
	FText GetActorName();

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Inspectable")
	FText GetObjectDescription();

	UFUNCTION(BlueprintPure, Category = "Inspectable")
	TMap<EsaveItem, int32> GetItemCountMap() const;

	UFUNCTION(BlueprintPure, Category = "Inspectable")
	TMap<EValueType, int32> GetItemValueMap() const;

};
