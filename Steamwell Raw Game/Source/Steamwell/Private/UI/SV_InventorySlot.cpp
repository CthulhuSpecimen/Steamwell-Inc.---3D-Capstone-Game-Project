// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SV_InventorySlot.h"
#include "GameManager/SV_GameModeBase.h"
#include "Items/Pickups/SV_BlueprintDataAsset.h"
#include "Items/Pickups/SV_NoteDataAsset.h"



void USV_InventorySlot::NativeConstruct()
{
	Super::NativeConstruct();
}

void USV_InventorySlot::NativeOnInitialized()
{
	Super::OnInitialized();
	MainButton->OnClicked.AddDynamic(this, &USV_InventorySlot::DisplayPaper); // not being called
	UE_LOG(LogTemp, Warning, TEXT("This Function was called to begin with"));
}

void USV_InventorySlot::SetEquippedItem()
{

}

void USV_InventorySlot::SetItemTexture(USV_InventoryItemAsset* Item)
{
	//If the item is valid update the widget's texture.
	//If not, assign a null ptr to it so the widget won't broadcast wrong information to the player
	if (Item && Item->ItemIcon)
	{
		ItemIcon->SetBrushFromTexture(Item->ItemIcon);
	}
}

void USV_InventorySlot::SetDefaultTexture()
{
	// static ConstructorHelpers::FObjectFinder<UTexture2D> DefaultInventoryIcon(TEXT("/Game/UI/UI_Textures/Inventory_innersquare.Inventory_innersquare"));
	UTexture2D* DefaultImage = LoadObject<UTexture2D>(NULL, TEXT("/Game/UI/UI_Textures/TempInventorySquare.TempInventorySquare")); // TODO: Make it load once at runtime instead of being called all the time
	ItemIcon->SetBrushFromTexture(DefaultImage);
	// ItemIcon = DefaultInventoryIcon.Object;
}

void USV_InventorySlot::DisplayPaper()
{
	if (SlotID != -1)
	{
		if (USV_PaperBaseDataAsset* PaperDataAsset = Cast<USV_PaperBaseDataAsset>(ItemAsset))
		{
			TArray<bool> UnlockArray = PaperDataAsset->GetIsSlotActiveArray();
			if (SlotID >= 0 && SlotID < UnlockArray.Num() && UnlockArray[SlotID])
			{
				if (ASV_GameModeBase* GameMode = Cast<ASV_GameModeBase>(GetWorld()->GetAuthGameMode()))
				{
					if (USV_NoteDataAsset* NoteDataAsset = Cast<USV_NoteDataAsset>(PaperDataAsset))
					{
						if (GameMode->NoteImageMap.Contains(SlotID))
						{
							SetupPaperWidget(GameMode->NoteImageMap[SlotID]);
						}
						
					}
					if (USV_BlueprintDataAsset* BlueprintDataAsset = Cast<USV_BlueprintDataAsset>(PaperDataAsset))
					{
						if (GameMode->BlueprintImageMap.Contains(SlotID))
						{
							SetupPaperWidget(GameMode->BlueprintImageMap[SlotID]);
						}
					}
					
				}
			}
		}
		
	}
}
