// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractiveActorInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UInteractiveActorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DTPROJECT_API IInteractiveActorInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void TurnOn();
	virtual void TurnOn_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void TurnOff();
	virtual	void TurnOff_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BeginFocus();
	virtual void BeginFocus_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EndFocus();
	virtual	void EndFocus_Implementation() {};
};
