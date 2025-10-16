// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Pickups/SV_PaperBaseDataAsset.h"
#include "GameManager/SV_AssetManager.h"
#include "SV_NoteDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_NoteDataAsset : public USV_PaperBaseDataAsset
{
	GENERATED_BODY()
	USV_NoteDataAsset()
	{
		ItemType = USV_AssetManager::NotePickupType;
		MaxCount = 0;
	}
};
