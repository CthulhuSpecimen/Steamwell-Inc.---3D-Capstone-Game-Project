// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InventoryItemAsset.h"
#include "GameManager/SV_AssetManager.h"
#include "SV_WrenchDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_WrenchDataAsset : public USV_InventoryItemAsset
{
	GENERATED_BODY()
	USV_WrenchDataAsset()
	{
		ItemType = USV_AssetManager::WrenchPickupType;
		MaxCount = 0;
	}
};
