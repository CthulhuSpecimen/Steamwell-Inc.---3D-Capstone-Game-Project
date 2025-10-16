// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Items/SV_InventoryItem.h"
#include "Items/SV_InventoryItemAsset.h"
#include "SV_InventoryInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceBlueprint))
class USV_InventoryInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STEAMWELL_API ISV_InventoryInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	/* Return map of items to data */
	virtual const TMap<USV_InventoryItemAsset*, FSV_InventoryItem>& GetInventoryDataMap() const = 0;

	/* Gets delegate for inventory item change*/
	virtual FOnInventoryItemChangedNative& GetInventoryItemChangedDelegate() = 0;

	/* Gets delegate for when inventory loads*/
	virtual FOnInventoryLoadedNative& GetInventoryLoadedDelegate() = 0;
};
