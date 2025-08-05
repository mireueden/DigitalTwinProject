// Fill out your copyright notice in the Description page of Project Settings.


#include "../Actor/InteractiveComponentBase.h"
#include "ObjectEnum.h"
#include "../Data/ObjectDataAsset.h"
#include "../Data/ObjectData.h"
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


FString UInteractiveComponentBase::GetComponentInfo()
{
	return FString::Printf(TEXT("%s"), *GetNameSafe(this));
}

EObjectType UInteractiveComponentBase::GetActorType() const
{
	if (ObjectDataAsset) 
	{
		return ObjectDataAsset->Type;
	}
	return EObjectType::None;
}

FText UInteractiveComponentBase::GetActorName()
{
	return ObjectDataAsset->DisplayName;
}

FText UInteractiveComponentBase::GetObjectDescription()
{
	return ObjectDataAsset->Description;
}