// Fill out your copyright notice in the Description page of Project Settings.


#include "Lift_Door.h"
#include "GameFramework/Actor.h"


//Forward declaration

class ASV_PressurePlateManager;




// Sets default values
ALift_Door::ALift_Door()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALift_Door::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALift_Door::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//will this compile?
