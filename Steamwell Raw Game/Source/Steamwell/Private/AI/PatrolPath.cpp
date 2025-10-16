// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/PatrolPath.h"


// Sets default values
APatrolPath::APatrolPath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}


void APatrolPath::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("📍 PatrolPath loaded with %d patrol points."), PatrolPoints.Num());

    for (int32 i = 0; i < PatrolPoints.Num(); ++i)
    {
        UE_LOG(LogTemp, Warning, TEXT(" - Point %d: %s"), i, *PatrolPoints[i].ToString());
    }
}


FVector APatrolPath::GetPatrolPoint(int const index) const
{
    if (PatrolPoints.IsValidIndex(index)) // Check if the index is valid
    {

        FVector Point = PatrolPoints[index];
        UE_LOG(LogTemp, Warning, TEXT("PatrolPoint at Index %d: %s"), index, *Point.ToString());
        /*return PatrolPoints[index];*/
		return Point; // Return the point at the specified index
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid patrol point index: %d (Size: %d)"), index, PatrolPoints.Num());
        return FVector::ZeroVector; // Or handle the error as appropriate
    }
}

int APatrolPath::Num() const
{
	return PatrolPoints.Num();
}
