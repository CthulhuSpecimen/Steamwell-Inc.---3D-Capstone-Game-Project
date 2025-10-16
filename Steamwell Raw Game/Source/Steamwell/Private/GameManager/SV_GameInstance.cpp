// Fill out your copyright notice in the Description page of Project Settings.

#include "GameManager/SV_GameInstance.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "EngineUtils.h"

USV_GameInstance::USV_GameInstance()
{
    SaveSlotName = TEXT("PlayerSaveSlot");
    UserIndex = 0;
}

void USV_GameInstance::Init()
{
    Super::Init();
    UGameplayStatics::DeleteGameInSlot(SaveSlotName, UserIndex);
    UE_LOG(LogTemp, Warning, TEXT("Editor Restart: Save data cleared!"));
}

void USV_GameInstance::SaveGame(AActor* PlayerActor)
{
    if (!PlayerActor) return;

    UBP_SaveGame* SaveGameInstance = Cast<UBP_SaveGame>(UGameplayStatics::CreateSaveGameObject(UBP_SaveGame::StaticClass()));

    if (SaveGameInstance)
    {
        SaveGameInstance->bHasPlayedBefore = true;
        SaveGameInstance->PlayerLocation = PlayerActor->GetActorLocation();
        UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveSlotName, UserIndex);

        UE_LOG(LogTemp, Warning, TEXT("Game Saved! Player Location: %s"), *SaveGameInstance->PlayerLocation.ToString());
    }
}

void USV_GameInstance::LoadGame(AActor* PlayerActor)
{
    if (!PlayerActor) return;

    if (UGameplayStatics::DoesSaveGameExist(SaveSlotName, UserIndex))
    {
        UBP_SaveGame* LoadGameInstance = Cast<UBP_SaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, UserIndex));

        if (LoadGameInstance && LoadGameInstance->bHasPlayedBefore)
        {
            PlayerActor->SetActorLocation(LoadGameInstance->PlayerLocation);
            UE_LOG(LogTemp, Warning, TEXT("Game Loaded! Player moved to: %s"), *LoadGameInstance->PlayerLocation.ToString());
            return;
        }
    }

    NewGame(PlayerActor);
}

void USV_GameInstance::NewGame(AActor* PlayerActor)
{
    if (!PlayerActor) return;

    // Delete existing save file
    UGameplayStatics::DeleteGameInSlot(SaveSlotName, UserIndex);
    UE_LOG(LogTemp, Warning, TEXT("New Game Started: Save data cleared!"));

    // Move player to PlayerStart
    APlayerStart* PlayerStart = nullptr;
    for (TActorIterator<APlayerStart> It(PlayerActor->GetWorld()); It; ++It)
    {
        PlayerStart = *It;
        break;
    }

    if (PlayerStart)
    {
        PlayerActor->SetActorLocation(PlayerStart->GetActorLocation());
        UE_LOG(LogTemp, Warning, TEXT("New Game: Player moved to PlayerStart!"));
    }
}
