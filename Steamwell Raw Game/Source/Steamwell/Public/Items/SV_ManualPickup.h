// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InteractableBase.h"
#include "SV_ManualPickup.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API ASV_ManualPickup : public ASV_InteractableBase
{
	GENERATED_BODY()
public:

	ASV_ManualPickup();
	
	void Interact(APlayerController* Controller) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USV_InventoryItemAsset* PickupType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemID;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* PickupMesh;

	

	UPROPERTY(VisibleAnywhere)
		int32 Count = 1;
};
