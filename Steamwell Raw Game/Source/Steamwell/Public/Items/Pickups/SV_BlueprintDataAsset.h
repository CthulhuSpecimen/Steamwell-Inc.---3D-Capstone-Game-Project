// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Pickups/SV_PaperBaseDataAsset.h"
#include "GameManager/SV_AssetManager.h"
#include "SV_BlueprintDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_BlueprintDataAsset : public USV_PaperBaseDataAsset
{
	GENERATED_BODY()
	USV_BlueprintDataAsset()
	{
		ItemType = USV_AssetManager::BlueprintPickupType;
		MaxCount = 0;
		
	}
};
