// Fill out your copyright notice in the Description page of Project Settings.


#include "SV_PressurePlateManager.h"
#include "SV_PressurePlate.h"

// Sets default values
ASV_PressurePlateManager::ASV_PressurePlateManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASV_PressurePlateManager::BeginPlay()
{
	Super::BeginPlay();
    for (int i = 0; i < PatternPlates.Num(); i++) {
        PatternIDs.Add(PatternPlates[i]->PressureID);
    }
	
}

void ASV_PressurePlateManager::ActivatePlate(int32 PressureID)
{
    /*GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta,
        FString::Printf(TEXT("Plates Active but like correct: %d"), PlatesActive));*/
    if (!isPattern) {
        PlatesActive += 1;
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta,
            FString::Printf(TEXT("Plates Active: %d"), PlatesActive));
        if (PlatesActive == DepPlates) {
            PlatesComplete();
        }
    }
    else {
        PlatesActive += 1;
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta,
            FString::Printf(TEXT("Plates Active: %d"), PlatesActive));
        InputtedIDs.Add(PressureID);
        /*for (int i = 0; i < PatternPlates.Num(); i++) {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange,
                FString::Printf(TEXT("%d plates in order"), i));
            if (!PatternPlates[i]->isPlaced) {
                IsInOrder = false;
                break;
            }
           
        }*/

        

       
    }

}
    
        void ASV_PressurePlateManager::CheckPlates()
        {
            if (PatternIDs == InputtedIDs) {
                PatternComplete = true;

            }
            else {
                PatternComplete = false;
            }
            if (PlatesActive == DepPlates && !PatternComplete) {
                PlatesRejected();
                PlatesActive = 0;
                GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Pipe pattern INCORRECT"));
                InputtedIDs.Empty();

            }
            else if (PlatesActive == DepPlates && PatternComplete) {
                GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Pipe pattern CORRECT"));
                PlatesComplete();
            }
        }
// Called every frame
void ASV_PressurePlateManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

