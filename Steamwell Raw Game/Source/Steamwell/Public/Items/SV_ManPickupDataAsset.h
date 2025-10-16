// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InventoryItemAsset.h"
#include "GameManager/SV_AssetManager.h"
#include "SV_ManPickupDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_ManPickupDataAsset : public USV_InventoryItemAsset
{
	GENERATED_BODY()
public:
	USV_ManPickupDataAsset()
	{
		ItemType = USV_AssetManager::ManPickupType;
		MaxCount = 0;
	}
};
