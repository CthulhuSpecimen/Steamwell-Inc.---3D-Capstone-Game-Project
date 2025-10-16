// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundCue.h"
#include "GameFramework/PlayerController.h"
#include "Items/SV_InventoryItem.h"
#include "Items/SV_InventoryItemAsset.h"
#include "Interfaces/SV_InventoryInterface.h"
#include "UI/SV_SecondaryInventoryLayout.h"
#include "SV_PlayerController.generated.h"

DECLARE_DELEGATE_OneParam(FOnInventoryItemSelectedSignature, int32);

/**
 * 
 */
UCLASS()
class STEAMWELL_API ASV_PlayerController : public APlayerController, public ISV_InventoryInterface
{
    GENERATED_BODY()

    /*ASV_PlayerController();*/

public:
    ASV_PlayerController();
    USV_InventoryItemAsset* GetCurrentlySelectedItem() const;

    UFUNCTION(BlueprintImplementableEvent)
        void ReloadInventory();

    /************************************************
    *                   Inventory
     ************************************************/

    // Map to hold data for any item in the inventory (useful for UI and other info)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
        TMap<USV_InventoryItemAsset*, FSV_InventoryItem> InventoryData;

    UPROPERTY(BlueprintAssignable, Category = "Inventory")
        FOnInventoryItemChanged OnInventoryItemChanged;

        FOnInventoryItemChangedNative OnInventoryItemChangedNative;

    UPROPERTY(BlueprintAssignable, Category = "Inventory")
        FOnInventoryLoaded OnInventoryLoaded;

        FOnInventoryLoadedNative OnInventoryLoadedNative;

        FOnInventoryItemSelectedSignature OnInventoryItemSelected;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
        USoundCue* InventoryChangeSoundCue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
        USoundBase* DropCue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
        USoundBase* DefuseSoundCue;

    UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
        void ToggleSecondaryInventory(USV_PaperBaseDataAsset* PaperAsset);

    /* Called after inventory changed and all delegates notified*/
    UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
        void InventoryItemChanged(bool bAdded, USV_InventoryItemAsset* Item);

    UFUNCTION(BlueprintCallable, Category = "Inventory")
        bool AddInventoryItem(USV_InventoryItemAsset* NewItem, int32 ItemCount = 1, int32 ItemLevel = 1);

    UFUNCTION(BlueprintCallable, Category = "Inventory")
        bool RemoveInventoryItem(USV_InventoryItemAsset* RemovedItem, int32 RemoveCount = 1);

        /* The Items array will be filled of all the items of the ItemType*/
        void GetInventoryItems(TArray< USV_InventoryItemAsset*>& Items, FPrimaryAssetType ItemType);

    UFUNCTION(BlueprintCallable, Category = "Inventory")
        void SetCurrentSelectedItem(USV_InventoryItemAsset* SelectedItem);

    UFUNCTION(BlueprintPure, Category = "Inventory")
        int32 GetInventoryItemCount(const USV_InventoryItemAsset* Item) const;

    /* Return item data associated with item, false if not found*/
    UFUNCTION(BlueprintPure, Category = "Inventory")
        bool GetInventoryItemData(const USV_InventoryItemAsset* Item, FSV_InventoryItem& ItemData ) const;

    // SaveInventory() 

    // LoadInventory()
        
          
        

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        class ASV_InteractableBase* CurrentInteractable;

    UPROPERTY(EditAnywhere, BlueprintReadWrite) // stores reference to object
        int32 GearCt;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 InventorySlotLimit;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
        class UInputAction* InteractAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
        class UInputAction* DropAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
        class UInputAction* SelectAction;
        
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
        class UInputAction* DefuseAction;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
        class UInputAction* IA_Defuse;



    

    /************************************************
    *   ISV_InventoryInterface Implementation
     ************************************************/

    virtual const TMap<USV_InventoryItemAsset*, FSV_InventoryItem>& GetInventoryDataMap() const override
    {
        return InventoryData;
    }

    /* Gets delegate for inventory item change*/
    virtual FOnInventoryItemChangedNative& GetInventoryItemChangedDelegate() override
    {
        return OnInventoryItemChangedNative;
    }

    /* Gets delegate for when inventory loads*/
    virtual FOnInventoryLoadedNative& GetInventoryLoadedDelegate() override
    {
        return OnInventoryLoadedNative;
    }


    
protected:
    
    void Interact();

    void DropItem();

    void SelectItemAction();

    virtual void BeginPlay() override;

    virtual void SetupInputComponent() override;

    virtual void Tick(float DeltaTime) override;

    void NotifyInventoryItemChanged(bool bAdded, USV_InventoryItemAsset* Item);

    void NotifyInventoryLoaded();
private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
        class UInputMappingContext* DefaultMappingContext;

    UPROPERTY()
        bool bCanInteract;

    UPROPERTY()
        bool bCanDropItem;
    
    UPROPERTY()
        FTimerHandle ClickTimerHandle;

    UFUNCTION()
        void ResetInteractFlag();

    UFUNCTION()
        void TryDefuseEnemy();

   


    USV_InventoryItemAsset* CurrentlySelectedItem; 

    int32 MaxInventorySize = 4;
};
