// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/SV_InventoryItem.h"
#include "Items/SV_InventoryItemAsset.h"


FSV_InventoryItem::FSV_InventoryItem()
{
   /*
   this->Name = FText::FromString("No Name");
   this->Value = 1;
   this->Description = FText::FromString("No Description");
   */
   this->ItemCount = 1;
   this->ItemLevel = 1;
}