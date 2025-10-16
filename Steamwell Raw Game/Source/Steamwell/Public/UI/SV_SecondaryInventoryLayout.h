// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI/SV_InventorySlot.h"
#include "Components/UniformGridSlot.h"
#include "Components/UniformGridPanel.h"
#include "Items/Pickups/SV_PaperBaseDataAsset.h"
#include "SV_SecondaryInventoryLayout.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_SecondaryInventoryLayout : public UUserWidget
{
	GENERATED_BODY()
public:

	virtual void SynchronizeProperties() override;
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Secondary Inventory Layout")
		TSubclassOf<class USV_InventorySlot> InventorySlotClass;

	UPROPERTY(BlueprintReadOnly, Category = "Secondary Inventory Layout", meta = (BindWidget), Transient)
		TObjectPtr<UUniformGridPanel> Grid;


	UFUNCTION(BlueprintCallable)
		void GenerateInventorySlots(USV_PaperBaseDataAsset* DataAsset);
private:
	int32 NumRows = 4;
	int32 NumCols = 4;
	bool bAlreadyConstructed;
};
