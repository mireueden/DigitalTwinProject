// Fill out your copyright notice in the Description page of Project Settings.


#include "../Actor/InteractiveActorBase.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "../Actor/InteractiveComponentBase.h"

// Sets default values
AInteractiveActorBase::AInteractiveActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(SceneComp);

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	CollisionComp->SetupAttachment(SceneComp);

	Component = CreateDefaultSubobject<UInteractiveComponentBase>(TEXT("InteractComp"));
}

// Called when the game starts or when spawned
void AInteractiveActorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractiveActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

