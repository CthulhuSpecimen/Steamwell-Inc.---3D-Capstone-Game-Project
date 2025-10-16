// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_ManualPickup.h"
#include "SV_PaperBase.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API ASV_PaperBase : public ASV_ManualPickup
{
	GENERATED_BODY()
public:

	void Interact(APlayerController* Controller) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sides")
		UTexture2D* FrontSide;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sides")
		UTexture2D* BackSide;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		int32 Key;
};
