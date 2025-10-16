// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/SV_AssetManager.h"
#include "Items/SV_InventoryItemAsset.h"
// #include "AbilitySystemGlobals.h" Needs a plugin 

/* Initialize static variables*/
const FPrimaryAssetType USV_AssetManager::ManPickupType{ TEXT("Manual Pickup") };
const FPrimaryAssetType USV_AssetManager::GearPickupType{ TEXT("Gear Pickup") };
const FPrimaryAssetType USV_AssetManager::WrenchPickupType{ TEXT("Wrench Pickup") };
const FPrimaryAssetType USV_AssetManager::BlueprintPickupType{ TEXT("Blueprint Pickup") };
const FPrimaryAssetType USV_AssetManager::NotePickupType{ TEXT("Note Pickup") };

void USV_AssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	// UAbilitySystemLocals::Get().InitGlobalData();
}

USV_AssetManager& USV_AssetManager::Get()
{
	if (USV_AssetManager* This = Cast<USV_AssetManager>(GEngine->AssetManager))
	{
		return *This;
	}
	else
	{
		// Uh oh 
		return *NewObject<USV_AssetManager>();
	}
}

