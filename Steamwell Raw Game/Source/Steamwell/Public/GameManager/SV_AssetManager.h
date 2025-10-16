// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "SV_AssetManager.generated.h"

/**
 * 
 */

class SV_InventoryItemAsset;

UCLASS()
class STEAMWELL_API USV_AssetManager : public UAssetManager
{
	GENERATED_BODY()
public:

	USV_AssetManager() {}

	virtual void StartInitialLoading() override;


	/* Static types for items*/
	static const FPrimaryAssetType ManPickupType;
	static const FPrimaryAssetType GearPickupType;
	static const FPrimaryAssetType WrenchPickupType;
	static const FPrimaryAssetType BlueprintPickupType;
	static const FPrimaryAssetType NotePickupType;

	static USV_AssetManager& Get();
};
