// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SV_GameModeBase.generated.h"


DECLARE_MULTICAST_DELEGATE_TwoParams(FOnBombBabyStatusUpdatedSignature, int32 /* ID */, bool /* bisActivated */);


/**
 * 
 */
UCLASS()
class STEAMWELL_API ASV_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	ASV_GameModeBase();
public:
	UFUNCTION()
		void OnItemLoaded(USV_InventoryItemAsset* ItemToDrop, FVector SpawnLocation);

	UFUNCTION(BlueprintCallable)
		void ActivateBombBaby(int32 ID) const;
		UFUNCTION(BlueprintCallable)
		void DefuseBombBaby(int32 ID) const;
	// don't put UPROPERTY() since it's not blueprint supported (needs DYNAMIC in the declaration)
	FOnBombBabyStatusUpdatedSignature OnBombBabyStatusUpdatedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TMap<int32, UTexture2D*> BlueprintImageMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TMap<int32, UTexture2D*> NoteImageMap;
};
