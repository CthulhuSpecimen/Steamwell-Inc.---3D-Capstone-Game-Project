// Fill out your copyright notice in the Description page of Project Settings.


#include "SV_PushableObject.h"
#include "Player/SV_PlayerController.h"
#include "Player/SV_PlayerCharacter.h"

// Sets default values
ASV_PushableObject::ASV_PushableObject()
{
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	MeshComponent->SetSimulatePhysics(false);
	MeshComponent->SetCollisionProfileName(TEXT("BlockAll"));

	bIsBeingPushed = false;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASV_PushableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASV_PushableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bIsBeingPushed)
	{
		FVector TargetLocation = GetActorLocation() + (MoveDirection * MoveSpeed * DeltaTime);
		SetActorLocation(TargetLocation, true);
		
	}
	else {
		
	}
	

}
void ASV_PushableObject::Interact(APlayerController* Controller)
{
	Super::Interact(Controller);
	if (ASV_PlayerController* PlayerController = Cast<ASV_PlayerController>(Controller))
	{
		if (ASV_PlayerCharacter* PlayerCharacter = Cast<ASV_PlayerCharacter>(PlayerController->GetPawn()))
		{
			PlayerCharacter->CheckPushableObjects(this);

		}
	}
}
void ASV_PushableObject::StartPush(FVector Direction)
{
	
	MoveDirection = Direction;
	bIsBeingPushed = true; 
	
}

void ASV_PushableObject::StopPush()
{
	bIsBeingPushed = false;
}

