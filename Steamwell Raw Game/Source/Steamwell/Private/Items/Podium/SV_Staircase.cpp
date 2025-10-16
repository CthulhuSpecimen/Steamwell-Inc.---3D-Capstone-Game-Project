// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Podium/SV_Staircase.h"

// Sets default values
ASV_Staircase::ASV_Staircase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ASV_Staircase::BeginPlay()
{
	Super::BeginPlay();
	//Podium->OnPodiumUnlockedDelegate.AddUObject(this, &ASV_Staircase::OnPodiumUnlocked);
}

// Called every frame
void ASV_Staircase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASV_Staircase::OnPodiumUnlocked()
{
	//PodiumBroadcast();
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Staircase Moved or something idk"));
}