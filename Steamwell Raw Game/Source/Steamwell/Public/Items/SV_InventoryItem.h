// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "SV_InventoryItem.generated.h"

// class USV_InventoryItemAsset; // TODO: read more on how forward declaration works

USTRUCT(BlueprintType)
struct FSV_InventoryItem : public FTableRowBase
{
	GENERATED_BODY()
	
public:	
	// Default constructor 
    FSV_InventoryItem();

    FSV_InventoryItem(const int32 InItemCount, const int32 InItemLevel)
        : ItemCount(InItemCount),
          ItemLevel(InItemLevel)
    {

    }
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
        int32 ItemCount;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
        int32 ItemLevel;
    /*
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
        FName ItemID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
        FText Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
        int32 Value;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
        UTexture2D* Thumbnail;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
        FText Description;*/

    // Check on this later
    bool operator==(const FSV_InventoryItem& OtherItem) const
    {
        return ItemCount == OtherItem.ItemCount && ItemLevel == OtherItem.ItemLevel;
    }

    bool operator!=(const FSV_InventoryItem& OtherItem) const
    {
        return !(*this == OtherItem);
    }

    bool IsValid() const
    {
        return ItemCount > 0;
    }

    void UpdateItemData(const FSV_InventoryItem& Other, int32 MaxCount, int32 MaxLevel)
    {
        if (MaxCount <= 0)
        {
            MaxCount = MAX_int32;
        }
        if (MaxLevel <= 0)
        {
            MaxLevel = MAX_int32;
        }

        ItemCount = FMath::Clamp(ItemCount + Other.ItemCount, 1, MaxCount);
        ItemLevel = FMath::Clamp(ItemCount + Other.ItemCount, 1, MaxLevel);
    }
    
   

};
/* Delegate called when an item in the inventory changes */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemChanged, bool, bAdded, USV_InventoryItemAsset*, Item);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemChangedNative, bool, USV_InventoryItemAsset*);

/* Delegate called when the entire inventory has been loaded */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryLoaded);
DECLARE_MULTICAST_DELEGATE(FOnInventoryLoadedNative);