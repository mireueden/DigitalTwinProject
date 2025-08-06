// Fill out your copyright notice in the Description page of Project Settings.


#include "../Widget/InfoWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/button.h"


void UInfoWidget::SetActorText(FText AName)
{
	if (IsValid(ActorName))
	{
		ActorName->SetText(AName);
	}
}
