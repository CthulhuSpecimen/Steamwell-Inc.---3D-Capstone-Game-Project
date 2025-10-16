// Fill out your copyright notice in the Description page of Project Settings.


#include "ScenePushable.h"

// Sets default values
AScenePushable::AScenePushable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);

	Mesh->SetCollisionProfileName(TEXT("PhysicsActor"));

}

// Called when the game starts or when spawned
void AScenePushable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScenePushable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AScenePushable::ApplyForce(FVector Force)
{
	if (Mesh)
	{
		Mesh->AddForce(Force, NAME_None, true); // Apply force to the mesh
	}
}

