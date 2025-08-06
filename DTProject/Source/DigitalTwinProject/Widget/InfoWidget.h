// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InfoWidget.generated.h"

/**
 * 
 */
UCLASS()
class DIGITALTWINPROJECT_API UInfoWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void SetActorText(FText AName);

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ActorName;

	UPROPERTY(meta = (BindWidget))
	class UImage* Explanation_Image;

};
