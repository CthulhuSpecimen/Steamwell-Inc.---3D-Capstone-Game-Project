// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BP_SaveGame.h"
#include "SV_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_GameInstance : public UGameInstance
{
    
        GENERATED_BODY()

    public:
        USV_GameInstance();
        void Init();
        // Save the game state
        UFUNCTION(BlueprintCallable, Category = "SaveSystem")
            
        void SaveGame(AActor* PlayerActor);

        // Load the game state
        UFUNCTION(BlueprintCallable, Category = "SaveSystem")
            void LoadGame(AActor* PlayerActor);

            void NewGame(AActor* PlayerActor);

    private:
        FString SaveSlotName;
        int32 UserIndex;
    };