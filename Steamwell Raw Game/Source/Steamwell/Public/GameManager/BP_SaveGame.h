// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BP_SaveGame.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API UBP_SaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
    UBP_SaveGame(); // Constructor

    // Player state
    UPROPERTY(VisibleAnywhere, Category = "SaveData")
        FVector PlayerLocation;
    UPROPERTY(VisibleAnywhere, Category = "SaveData")
        bool bHasPlayedBefore;

    UPROPERTY(VisibleAnywhere, Category = "SaveData")
        int32 PlayerHealth;

    UPROPERTY(VisibleAnywhere, Category = "SaveData")
        FString SaveSlotName;

    UPROPERTY(VisibleAnywhere, Category = "SaveData")
        uint32 UserIndex;
};
