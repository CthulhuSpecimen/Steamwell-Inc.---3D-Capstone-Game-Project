// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "SV_ListItem.generated.h"


/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_ListItem : public UUserWidget
{
	GENERATED_BODY()
public:
	void AddNewItemToInventoryList(const FString InItemName, const int32 InItemCount) const;
	
	FText GetItemName() const { return ItemName->GetText(); }
	FText GetItemCount() const { return ItemCount->GetText(); }

	void SetItemCount(const int32 NewCount) const;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<UTextBlock> ItemName;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<UTextBlock> ItemCount;
};
