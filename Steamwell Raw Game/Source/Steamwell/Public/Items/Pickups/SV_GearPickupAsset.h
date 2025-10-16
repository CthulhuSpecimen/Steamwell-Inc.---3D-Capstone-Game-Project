// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InventoryItemAsset.h"
#include "Items/SV_Gear.h"
#include "GameManager/SV_AssetManager.h"
#include "SV_GearPickupAsset.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_GearPickupAsset : public USV_InventoryItemAsset
{
	GENERATED_BODY()
	USV_GearPickupAsset()
	{
		ItemType = USV_AssetManager::GearPickupType;
		MaxCount = 0;
	}
		
	
};
