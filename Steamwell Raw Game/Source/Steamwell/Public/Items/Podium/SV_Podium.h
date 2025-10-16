// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InteractableBase.h"
#include "Items/Pickups/SV_GearPickupAsset.h"
#include "Sound/SoundCue.h"
#include "SV_Podium.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnPodiumUnlockedSignature);
/**
 * 
 */
UCLASS()
class STEAMWELL_API ASV_Podium : public ASV_InteractableBase
{
	GENERATED_BODY()

	ASV_Podium();
public:
	
	void Interact(APlayerController* Controller) override;

	FOnPodiumUnlockedSignature OnPodiumUnlockedDelegate;

protected:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* BodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USV_GearPickupAsset* RequiredItemType;

	UPROPERTY(EditDefaultsOnly, Category = "Audio")
		USoundCue* PodiumActivateSound;


private:

		int32 NumGearsCollected = 0;
};

