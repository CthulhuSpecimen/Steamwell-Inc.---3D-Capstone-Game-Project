// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InteractableBase.h"
#include "SV_LevelDoor.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API ASV_LevelDoor : public ASV_InteractableBase
{
	GENERATED_BODY()


public:

	ASV_LevelDoor();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 GearReq = 3; 
	void Interact(APlayerController* Controller) override;
protected:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* PickupMesh;

	
};
