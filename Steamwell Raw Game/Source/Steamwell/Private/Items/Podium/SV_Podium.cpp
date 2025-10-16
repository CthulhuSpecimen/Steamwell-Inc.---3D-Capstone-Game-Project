// Fill out your copyright notice in the Description page of Project Settings.

#include "Items/Podium/SV_Podium.h"

#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"    
#include "Engine/Engine.h"  

#include "Player/SV_PlayerController.h"
#include "Items/SV_InventoryItemAsset.h"



ASV_Podium::ASV_Podium()
{
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	RootComponent = Cast<UStaticMeshComponent>(BodyMesh);
}


void ASV_Podium::Interact(APlayerController* Controller)
{
	Super::Interact(Controller);
	if (ASV_PlayerController* PlayerController = Cast<ASV_PlayerController>(Controller))
	{		
		if (PlayerController->GetInventoryItemCount(RequiredItemType) > 0)
		{
			NumGearsCollected++;
			PlayerController->RemoveInventoryItem(RequiredItemType);
			if (PodiumActivateSound) // Ensure the sound cue is assigned
			{
				UGameplayStatics::PlaySoundAtLocation(this, PodiumActivateSound, GetActorLocation());
			}
			if (NumGearsCollected == 1) // there might be a bug where you accidentally add more than two at once but I don't want it to trigger again after unlocking it
			{
				OnPodiumUnlockedDelegate.Broadcast();
			}
		}
	}
	
}
