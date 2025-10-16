// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/SV_InventoryItemAsset.h"

USV_InventoryItemAsset::USV_InventoryItemAsset()
{
	MaxCount = 1;
	MaxLevel = 1;
	AbilityLevel = 1;
}

bool USV_InventoryItemAsset::IsConsumable() const
{
	return false;
}

FString USV_InventoryItemAsset::GetIdentifierString() const
{
	return GetPrimaryAssetId().ToString();
}

FPrimaryAssetId USV_InventoryItemAsset::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(ItemType, GetFName());
}
