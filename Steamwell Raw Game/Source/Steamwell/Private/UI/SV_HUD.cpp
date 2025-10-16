// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SV_HUD.h"
#include "Player/SV_PlayerController.h"
#include "Items/SV_InventoryItemAsset.h"
#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "Components/Border.h"
#include "UI/SV_ListItem.h"
#include "GameManager/SV_DialogueSubsystem.h"




void USV_HUD::NativeConstruct()
{
	Super::NativeConstruct();

	if (PlayerController)
	{
		// when broadcasted, will pass parameters of function here
		PlayerController->OnInventoryItemChangedNative.AddUObject(this, &USV_HUD::UpdateInventoryInformation);
		PlayerController->OnInventoryItemSelected.BindUObject(this, &USV_HUD::UpdateSelectedItem);
		InventoryItem1->SetDefaultTexture();
		InventoryItem2->SetDefaultTexture();
		InventoryItem3->SetDefaultTexture();
		InventoryItem4->SetDefaultTexture();
		InventoryArray.Add(InventoryItem1);
		InventoryArray.Add(InventoryItem2);
		InventoryArray.Add(InventoryItem3);
		InventoryArray.Add(InventoryItem4);
		InventoryOutlineArray.Add(InventoryOutline1);
		InventoryOutlineArray.Add(InventoryOutline2);
		InventoryOutlineArray.Add(InventoryOutline3);
		InventoryOutlineArray.Add(InventoryOutline4);

		if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
		{
			if (USV_DialogueSubsystem* DialogueSubsystem = GameInstance->GetSubsystem<USV_DialogueSubsystem>())
			{
				DialogueSubsystem->OnDialogueTextUpdatedDelegate.BindUObject(this, &USV_HUD::UpdateDialogueText);
			}
		}
		
	}
}

void USV_HUD::UpdateInventoryInformation(bool bAdded, USV_InventoryItemAsset* Item)
{
	if (PlayerController)
	{
		FSV_InventoryItem ItemData;
		for (int32 i = 0; i < InventoryArray.Num(); i++)
		{
			USV_InventorySlot* InventorySlot = InventoryArray[i];
			// check to see if the item is already in the array
			if (InventorySlot->ItemAsset && Item->ItemName.EqualToCaseIgnored(InventorySlot->ItemAsset->ItemName))
			{
				if (PlayerController->GetInventoryItemData(Item, ItemData))
				{
					InventorySlot->Count->SetText(FText::FromString(FString::FromInt(ItemData.ItemCount)));
					UpdateSelectedItem(i + 1);
				}
				else
				{
					InventorySlot->Count->SetText(FText::FromString(""));
					InventorySlot->SetDefaultTexture();
					InventorySlot->ItemAsset = nullptr;
					PlayerController->SetCurrentSelectedItem(nullptr);
					UpdateSelectedItem(i + 1);
				}
				break;
			}

			if (!InventorySlot->ItemAsset) // fill up empty inventory slot
			{
				InventorySlot->ItemAsset = Item;
				InventorySlot->SetItemTexture(Item);
				InventorySlot->Count->SetText(FText::FromString(FString::FromInt(ItemData.ItemCount)));
				UpdateSelectedItem(i + 1);
				break;
			}
		}
		
	}
}

void USV_HUD::UpdateDialogueText(FText UpdatedText, float SoundDuration)
{
	DialogueText->SetDialogueText(UpdatedText, SoundDuration);
	GetWorld()->GetTimerManager().SetTimer(DialogueTimerHandle, this, &USV_HUD::ResetDialogueText, SoundDuration, false);
}

void USV_HUD::ResetDialogueText()
{
	/*
	FText EmptyText;
	DialogueText->SetDialogueText(EmptyText, 0.f);
	*/
}

void USV_HUD::UpdateSelectedItem(int32 SlotNumber)
{
	int32 SlotIndex = SlotNumber - 1;
	PlayerController->SetCurrentSelectedItem(InventoryArray[SlotIndex]->ItemAsset);
	FLinearColor OutlineColor = FLinearColor(FColor::Cyan); // it's outside the if statements as we want players to select empty inventory slots
	InventoryOutlineArray[LastSelectedItemIndex]->SetBrushColor(FLinearColor(FColor::White)); // revert the previous selected item 
	LastSelectedItemIndex = SlotIndex;
	InventoryOutlineArray[SlotIndex]->SetBrushColor(OutlineColor);
}
