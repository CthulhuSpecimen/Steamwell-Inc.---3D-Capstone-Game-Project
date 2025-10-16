// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/SV_GameModeBase.h"
#include "GameManager/SV_GameStateBase.h"
#include "GameManager/SV_AssetManager.h"
#include "Items/SV_InventoryItemAsset.h"
#include "Items/SV_InteractableBase.h"

ASV_GameModeBase::ASV_GameModeBase() {
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Player/BP_SV_PlayerCharacter"));
	if (PlayerPawnBPClass.Class)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/Blueprints/Player/BP_SV_PlayerController"));
	if (PlayerControllerBPClass.Class)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
	
	static ConstructorHelpers::FClassFinder<AGameStateBase> GameStateBaseBPClass(TEXT("/Game/Blueprints/GameManager/BP_SV_GameStateBase"));
	if (GameStateBaseBPClass.Class)
	{
		GameStateClass = GameStateBaseBPClass.Class;
	}

}


void ASV_GameModeBase::OnItemLoaded(USV_InventoryItemAsset* ItemToDrop, FVector SpawnLocation)
{
	if (USV_AssetManager* AssetManager = Cast<USV_AssetManager>(USV_AssetManager::GetIfValid()))
	{
		ASV_InteractableBase* SpawnedItem = GetWorld()->SpawnActor<ASV_InteractableBase>(ItemToDrop->ItemClass, SpawnLocation, FRotator::ZeroRotator);
		/*
		if (USV_InventoryItemAsset* ItemData = Cast<USV_InventoryItemAsset>(AssetManager->GetPrimaryAssetObject(LoadedId)))
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Cast Reached")));
			
		}*/
		
	}
	
	
}

// Executes the delegate to start the countdown of the bomb baby with the given ID 
void ASV_GameModeBase::ActivateBombBaby(int32 ID) const
{
	// All bomb babies will be notified with this
	OnBombBabyStatusUpdatedDelegate.Broadcast(ID, true);
}

void ASV_GameModeBase::DefuseBombBaby(int32 ID) const
{
	OnBombBabyStatusUpdatedDelegate.Broadcast(ID, false);
}



