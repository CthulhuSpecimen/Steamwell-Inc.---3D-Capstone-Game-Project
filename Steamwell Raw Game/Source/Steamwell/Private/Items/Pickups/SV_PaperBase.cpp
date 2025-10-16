// Fill out your copyright notice in the Description page of Project Settings.



#include "Items/Pickups/SV_PaperBase.h"
#include "Items/Pickups/SV_PaperBaseDataAsset.h"

#include "Player/SV_PlayerController.h"

void ASV_PaperBase::Interact(APlayerController* Controller)
{
	
	if (ASV_PlayerController* PlayerController = Cast<ASV_PlayerController>(Controller))
	{
		if (PlayerController->AddInventoryItem(PickupType, Count, 1))
		{
			PlayerController->SetCurrentSelectedItem(PickupType);
			if (USV_PaperBaseDataAsset* DataAsset = Cast<USV_PaperBaseDataAsset>(PickupType))
			{
				DataAsset->SetSlotActive(Key);
			}
			Destroy();
		}
	}
}