// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/SV_LevelDoor.h"
#include "Player/SV_PlayerController.h"

ASV_LevelDoor::ASV_LevelDoor() {
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
}

void ASV_LevelDoor::Interact(APlayerController* Controller)
{
	Super::Interact(Controller);
	if (ASV_PlayerController* PlayerController = Cast<ASV_PlayerController>(Controller))
	{
		if (PlayerController->GearCt >= GearReq) {
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, TEXT("DOOR UNLOCKED"));
			/*FRotator CurrentRotation = PickupMesh->GetComponentRotation();
			CurrentRotation.Yaw += 90.0f; // Rotate 90 degrees on the Z-axis
			PickupMesh->SetWorldRotation(CurrentRotation);*/
			Destroy();

		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, TEXT("Find more gears"));
		}
	}
}
