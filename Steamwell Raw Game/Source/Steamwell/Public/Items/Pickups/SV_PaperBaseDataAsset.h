// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InventoryItemAsset.h"
#include "SV_PaperBaseDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_PaperBaseDataAsset : public USV_InventoryItemAsset
{
	GENERATED_BODY()
public:
	static TArray<bool> IsSlotActiveArray;

	USV_PaperBaseDataAsset()
	{
		IsSlotActiveArray.Init(false, NumSlots);
	}
	UFUNCTION(BlueprintCallable)
	TArray<bool> GetIsSlotActiveArray();

	bool SetSlotActive(int32 SlotIndex);
	
protected:
	int32 NumSlots = 16;
};
