// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemies/SV_BEDT.h"

// Sets default values
ASV_BEDT::ASV_BEDT()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASV_BEDT::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASV_BEDT::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

