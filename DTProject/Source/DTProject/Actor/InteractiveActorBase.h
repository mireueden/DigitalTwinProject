// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Actor/InteractiveActorInterface.h"
#include "InteractiveActorBase.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class UBoxComponent;
class UInteractiveComponentBase;

UCLASS()
class DTPROJECT_API AInteractiveActorBase : public AActor, public IInteractiveActorInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractiveActorBase();


public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* SceneComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* CollisionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UInteractiveComponentBase* Component;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void TurnOn_Implementation() override;
	virtual void TurnOff_Implementation() override;
	virtual void BeginFocus_Implementation() override;
	virtual void EndFocus_Implementation() override;
};
