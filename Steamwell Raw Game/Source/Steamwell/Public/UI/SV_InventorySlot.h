// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Items/SV_InventoryItemAsset.h"
#include "Items/Pickups/SV_PaperBaseDataAsset.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "SV_InventorySlot.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_InventorySlot : public UUserWidget
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item", meta = (BindWidget))
		UImage* ItemIcon;

	/*Tells the player the equip the represented item from this widget*/
	UFUNCTION(BlueprintCallable, Category = "UI")
		void SetEquippedItem();

public:
	virtual void NativeConstruct() override;
	virtual void NativeOnInitialized() override;
	/*Set item texture*/
	UFUNCTION(BlueprintCallable, Category = "UI")
		void SetItemTexture(USV_InventoryItemAsset* Item);

	UFUNCTION(BlueprintCallable, Category = "UI")
		void SetDefaultTexture();

	UFUNCTION(BlueprintImplementableEvent, Category = "UI")
		void SetupPaperWidget(UTexture2D* Image);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
		USV_InventoryItemAsset* ItemAsset;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<UTextBlock> Count;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<UButton> MainButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		int32 SlotID = -1;

private:
	UFUNCTION()
	void DisplayPaper();
};
