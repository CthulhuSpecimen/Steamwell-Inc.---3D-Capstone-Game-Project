// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Sound/SoundWave.h"

#include "SV_DialogueDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_DialogueDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
	USoundWave* VoiceLine;
};
