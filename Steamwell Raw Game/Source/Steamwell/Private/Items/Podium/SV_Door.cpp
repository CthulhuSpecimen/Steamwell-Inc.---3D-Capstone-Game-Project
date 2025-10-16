// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Podium/SV_Door.h"

// Sets default values
ASV_Door::ASV_Door()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ASV_Door::BeginPlay()
{
	Super::BeginPlay();
	
	Podium->OnPodiumUnlockedDelegate.AddUObject(this, &ASV_Door::OnPodiumUnlocked);
}

// Called every frame
void ASV_Door::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASV_Door::OnPodiumUnlocked()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Door Unlocked"));
	
	PodiumBroadcast();
}

