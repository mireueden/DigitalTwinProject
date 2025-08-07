// Fill out your copyright notice in the Description page of Project Settings.


#include "../Actor/InteractiveComponentBase.h"
#include "../Data/ObjectEnum.h"
#include "../Data/ObjectDataAsset.h"

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
	DataAssetInstance = NewObject<UObjectDataAsset>(this, ObjectDataAsset);
	//DataAssetInstance = ObjectDataAsset;
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
		return DataAssetInstance->Type;
	}
	return EObjectType::None;
}

FText UInteractiveComponentBase::GetActorName()
{
	return DataAssetInstance->DisplayName;
}

FText UInteractiveComponentBase::GetObjectDescription()
{
	return DataAssetInstance->Description;
}

TMap<EsaveItem, int32> UInteractiveComponentBase::GetItemCountMap() const
{
	if (DataAssetInstance)
	{
		return DataAssetInstance->ItemCountMap;
	}
	return TMap<EsaveItem, int32>();
}

TMap<EValueType, int32> UInteractiveComponentBase::GetItemValueMap() const
{
	if (DataAssetInstance)
	{
		return DataAssetInstance->ItemValueMap;
	}
	return TMap<EValueType, int32>();
}
