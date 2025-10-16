// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InteractableBase.h"
#include "SV_PipeSpin.h"
#include "SV_PipeSpinActivate.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API ASV_PipeSpinActivate : public ASV_InteractableBase
{
	GENERATED_BODY()
		ASV_PipeSpinActivate();
	
public:

	void Interact(APlayerController* Controller) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class ASV_PipeSpin* PipeSpinArea;
protected:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* BodyMesh;

};