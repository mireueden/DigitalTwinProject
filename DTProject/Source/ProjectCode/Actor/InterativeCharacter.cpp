// Fill out your copyright notice in the Description page of Project Settings.


#include "../Actor/InterativeCharacter.h"
#include "../Actor/InteractiveActorBase.h"
#include "../Actor/InteractiveComponentBase.h"

// Sets default values
AInterativeCharacter::AInterativeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Collision"));
	CameraComp->SetRelativeLocation(FVector(0.0f, 0.0f, 64.0f));
}

// Called when the game starts or when spawned
void AInterativeCharacter::BeginPlay()
{
	Super::BeginPlay();



}

// Called every frame
void AInterativeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateForcusTarget();

}

// Called to bind functionality to input
void AInterativeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AInterativeCharacter::UpdateForcusTarget()
{
	FHitResult HitResult;
	float TraceDistance = 100.f;

	FVector Start = CameraComp->GetComponentLocation();
	FVector End = Start + CameraComp->GetForwardVector() * TraceDistance;

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());


	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params);

	if (bHit)
	{
		AActor* HitActor = HitResult.GetActor();
		if (HitActor)
		{
			UE_LOG(LogTemp, Log, TEXT("HitActor : %s"), *HitActor->GetName());
		}
	}
	
	FHitResult Hit;
	if (Hit.bBlockingHit)
	{
		AInteractiveActorBase* InteractiveTarget = Cast<AInteractiveActorBase>(Hit.GetActor());
		if (InteractiveTarget != CurrentTarget)
		{
			CurrentTarget = InteractiveTarget;
		}
	}
	else
	{
		CurrentTarget = nullptr;
	}


	

	if (CurrentTarget)
	{
		FText InfoText = CurrentTarget->Component->GetActorName();
		//WidgetClass->NameText->SetText(InfoText);
	}
	else
	{
		//WidgetClass->NameText->SetText(FText::FromString(TEXT("")));
	}

}