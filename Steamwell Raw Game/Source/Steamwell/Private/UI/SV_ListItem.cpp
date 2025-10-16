// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SV_ListItem.h"

void USV_ListItem::AddNewItemToInventoryList(const FString InItemName, const int32 InItemCount) const
{
	if (ItemName && ItemCount)
	{
		ItemName->SetText(FText::FromString(InItemName));
		ItemCount->SetText(FText::FromString(FString::FromInt(InItemCount)));
	}
}

void USV_ListItem::SetItemCount(const int32 NewCount) const
{
	ItemCount->SetText(FText::FromString(FString::FromInt(NewCount)));
}