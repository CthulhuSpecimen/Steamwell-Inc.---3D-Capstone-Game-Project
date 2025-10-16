// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Pickups/SV_PaperBaseDataAsset.h"
TArray<bool> USV_PaperBaseDataAsset::IsSlotActiveArray;

bool USV_PaperBaseDataAsset::SetSlotActive(int32 SlotIndex)
{
	if (SlotIndex >= 0 && SlotIndex < NumSlots)
	{
		if (!IsSlotActiveArray[SlotIndex])
		{
			
			IsSlotActiveArray[SlotIndex] = true;
			return true;
		}
	}
	return false;
}

TArray<bool> USV_PaperBaseDataAsset::GetIsSlotActiveArray()
{
	return IsSlotActiveArray;
}