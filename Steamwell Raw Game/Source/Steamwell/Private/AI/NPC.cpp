// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/NPC.h"

// Sets default values
ANPC::ANPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPC::BeginPlay()
{
	Super::BeginPlay();
    // Optionally, initialize default values here if not assigned in Blueprint
// Log if behavior tree is set
    if (!Tree)
    {
        UE_LOG(LogTemp, Warning, TEXT("ANPC: Behavior Tree is not set!"));
    }

    // Log patrol path status and points
    if (!PatrolPath)
    {
        UE_LOG(LogTemp, Warning, TEXT("ANPC: Patrol Path is not set!"));
    }
    else
    {
        int32 NumPoints = PatrolPath->Num();
        UE_LOG(LogTemp, Warning, TEXT("ANPC: Patrol Path is set. Number of Points: %d"), NumPoints);

        // Log each patrol point
        for (int32 i = 0; i < NumPoints; ++i)
        {
            FVector Point = PatrolPath->GetPatrolPoint(i);
            UE_LOG(LogTemp, Warning, TEXT("Patrol Point %d: %s"), i, *Point.ToString());
        }
    }
	
}

// Called every frame
void ANPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


UBehaviorTree* ANPC::GetBehaviorTree() const
{
	return Tree;
}

APatrolPath* ANPC::GetPatrolPath() const
{
	return PatrolPath;
}