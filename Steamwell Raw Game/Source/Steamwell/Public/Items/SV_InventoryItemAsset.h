// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "SV_InventoryItemAsset.generated.h"


// class USV_GameplayAbility;

/**
 * 
 */
UCLASS(Abstract, BlueprintType)
class STEAMWELL_API USV_InventoryItemAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
		
public:
	USV_InventoryItemAsset();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
		FPrimaryAssetType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
		FText ItemName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
		FText ItemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
		UTexture2D* ItemIcon; // maybe texture 2D instead

	UFUNCTION(Blueprintcallable, BlueprintPure, Category = "Item")
		bool IsConsumable() const;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
		int32 MaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
		int32 MaxLevel;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
		TSubclassOf<AActor> ItemClass;

	/* If an item grants you an ability*/
	// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
		// TSubclassOf<USV_GameplayAbility> GrantedAbility;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
		int32 AbilityLevel;

	UFUNCTION(BlueprintCallable, Category = "Item")
		FString GetIdentifierString() const;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
};
