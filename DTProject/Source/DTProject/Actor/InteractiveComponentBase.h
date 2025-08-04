// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractiveComponentBase.generated.h"

enum class EObjectEnum : uint8;


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DTPROJECT_API UInteractiveComponentBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractiveComponentBase();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void EndPlay(EEndPlayReason::Type Reason) override;
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:	
	UFUNCTION(BlueprintCallable)
	virtual void TurnOn();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "TurnOn"))
	void ReceiveTurnOn();

	UFUNCTION(BlueprintCallable)
	virtual void TurnOff();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, meta = (DisplayName = "TurnOff"))
	void ReceiveTurnOff();

	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsWorking() const { return bWorking; }
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BeginFocus();
	virtual void BeginFocus_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EndFocus();
	virtual void EndFocus_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FString GetComponentInfo();
	virtual FString GetComponentInfo_Implementation();

public:
	UFUNCTION(BlueprintPure)
	EObjectEnum GetObjectType() const;

	UPROPERTY(VisibleInstanceOnly)
	bool bWorking;
		
};
