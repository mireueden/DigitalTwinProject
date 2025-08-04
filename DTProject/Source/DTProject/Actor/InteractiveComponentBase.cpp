// Fill out your copyright notice in the Description page of Project Settings.


#include "../Actor/InteractiveComponentBase.h"
#include "ObjectEnum.h"
#include "InteractiveActorInterface.h"


// Sets default values for this component's properties
UInteractiveComponentBase::UInteractiveComponentBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInteractiveComponentBase::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UInteractiveComponentBase::EndPlay(EEndPlayReason::Type Reason)
{
}


// Called every frame
void UInteractiveComponentBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInteractiveComponentBase::TurnOn()
{
}

void UInteractiveComponentBase::TurnOff()
{
}


void UInteractiveComponentBase::BeginFocus_Implementation()
{
}

void UInteractiveComponentBase::EndFocus_Implementation()
{
}

FString UInteractiveComponentBase::GetComponentInfo_Implementation()
{
	return FString::Printf(TEXT("%s"), *GetNameSafe(this));
}

EObjectEnum UInteractiveComponentBase::GetObjectType() const
{
	if (true) //TwinDataAsset)
	{
		return EObjectEnum::ABC; //TwinDataAsset->Type;
	}
	return EObjectEnum::None;
}