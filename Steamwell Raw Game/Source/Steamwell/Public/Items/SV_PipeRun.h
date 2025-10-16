// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InteractableBase.h"
#include "SV_PressurePlateManager.h"
#include "SV_PipeRun.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API ASV_PipeRun : public ASV_InteractableBase
{
	GENERATED_BODY()
		ASV_PipeRun();
public:

	void Interact(APlayerController* Controller) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class ASV_PressurePlateManager* PPManager;
protected:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* BodyMesh;

};
