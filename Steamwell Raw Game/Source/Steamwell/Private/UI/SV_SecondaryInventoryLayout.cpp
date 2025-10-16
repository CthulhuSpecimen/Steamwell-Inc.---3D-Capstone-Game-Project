// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SV_SecondaryInventoryLayout.h"


void USV_SecondaryInventoryLayout::NativeConstruct()
{
	if (bAlreadyConstructed)
	{
		return;
	}
	Super::NativeConstruct();
	// Delegates go here
	if (Grid && InventorySlotClass)
	{
		Grid->ClearChildren();
		for (int32 y = 0; y < NumRows; y++)
		{
			for (int32 x = 0; x < NumCols; x++)
			{
				int32 Index = y * NumRows + x;
				FName SlotName = FName(*FString::Printf(TEXT("Inventory Slot %d"), (Index)));
				UUserWidget* Widget = CreateWidget<UUserWidget>(GetOwningPlayer(), InventorySlotClass, SlotName);
				if (USV_InventorySlot* InventorySlot = Cast<USV_InventorySlot>(Widget))
				{
					UUniformGridSlot* GridSlot = Grid->AddChildToUniformGrid(
						Widget);
					GridSlot->SetColumn(x);
					GridSlot->SetRow(y);
					InventorySlot->SetDefaultTexture();
					InventorySlot->SlotID = Index;
					
				}
			}
		}
		bAlreadyConstructed = true;
	}
	
}

void USV_SecondaryInventoryLayout::SynchronizeProperties()
{
	Super::SynchronizeProperties();
	
	
}

void USV_SecondaryInventoryLayout::GenerateInventorySlots(USV_PaperBaseDataAsset* DataAsset)
{
	UE_LOG(LogTemp, Warning, TEXT("GenerateInventorySlots Called"));
	TArray<bool> UnlockArray = DataAsset->IsSlotActiveArray;
	for (int32 i = 0; i < NumCols * NumCols; i++)
	{

		TObjectPtr<USV_InventorySlot> InventorySlot = Cast<USV_InventorySlot>(Grid->GetChildAt(i));
		UE_LOG(LogTemp, Warning, TEXT("My Location is: %s"), InventorySlot);
		
		if (!InventorySlot)
		{
			// TODO: Fix bug where the InventorySlots are null upon first loading.
			continue;
		}
		if (UnlockArray[i])
		{
			InventorySlot->ItemAsset = DataAsset;
			InventorySlot->SetItemTexture(DataAsset);
			UE_LOG(LogTemp, Warning, TEXT("Item Texture Set"));
		} 
		else
		{
			InventorySlot->SetDefaultTexture();
		}
		
		

	}
	
}
