// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/SV_ManualPickup.h"
#include "Player/SV_PlayerController.h"
#include "Items/SV_InventoryItemAsset.h"


ASV_ManualPickup::ASV_ManualPickup()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	RootComponent = Cast<UStaticMeshComponent>(PickupMesh);

	ItemID = FName(TEXT("No ID"));
	Super::Name = "Item";
	Super::Action = "Pickup";
	
}

void ASV_ManualPickup::Interact(APlayerController* Controller)
{
	Super::Interact(Controller);
	if (ASV_PlayerController* PlayerController = Cast<ASV_PlayerController>(Controller))
	{
		if (PlayerController->AddInventoryItem(PickupType, Count, 1))
		{
			PlayerController->SetCurrentSelectedItem(PickupType);
			Destroy();
		}
	}
}