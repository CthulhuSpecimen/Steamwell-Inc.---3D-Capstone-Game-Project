// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI/SV_InventorySlot.h"
#include "UI/Dialogue/SV_DialogueWidget.h"
#include "SV_HUD.generated.h"

// Forward Declaration
class UTextBlock;
class UScrollBox;
class UBorder;
class ASV_PlayerController;
class USV_InventoryItemAsset;
class USV_ListItem;

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_HUD : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void UpdateInventoryInformation(bool bAdded, USV_InventoryItemAsset* Item);

	void UpdateDialogueText(FText UpdatedText, float SoundDuration);

	void UpdateSelectedItem(int32 SlotNumber);

protected:

	virtual void NativeConstruct() override;
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TArray<USV_InventorySlot*> InventoryArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TArray<UBorder*> InventoryOutlineArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<USV_InventorySlot> InventoryItem1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<USV_InventorySlot> InventoryItem2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<USV_InventorySlot> InventoryItem3;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<USV_InventorySlot> InventoryItem4;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<UBorder> InventoryOutline1;
		
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<UBorder> InventoryOutline2;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<UBorder> InventoryOutline3;
		
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<UBorder> InventoryOutline4;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<USV_DialogueWidget> DialogueText;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (ExposeOnSpawn = true, AllowPrivateAccess = true))
		TObjectPtr<ASV_PlayerController> PlayerController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	TSoftClassPtr<USV_ListItem> ListItemClass; 

	FTimerHandle DialogueTimerHandle;

	int32 LastSelectedItemIndex = 0;

	void ResetDialogueText();
};
