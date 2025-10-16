// Fill out your copyright notice in the Description page of Project Settings.


#include "SV_PipeSpin.h"
#include "Components/BoxComponent.h"
#include "SV_PushableObject.h"

// Sets default values
ASV_PipeSpin::ASV_PipeSpin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));

	// Set the root component
	SetRootComponent(Mesh);

	// Attach Bounds to Mesh
	Bounds->SetupAttachment(Mesh);

}
// Called when the game starts or when spawned
void ASV_PipeSpin::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASV_PipeSpin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASV_PipeSpin::OnRotate()
{
	TArray<AActor*> OverlappingActors;
	Mesh->GetOverlappingActors(OverlappingActors, ASV_PushableObject::StaticClass());

	if (OverlappingActors.Num() > 0)
	{
		for (AActor* Actor : OverlappingActors)
		{
			ASV_PushableObject* PushedObject = Cast<ASV_PushableObject>(Actor);
			if (PushedObject)
			{
				RotaterPipe = PushedObject;
				break;
			}
		}
	}
	if (RotaterPipe) {
		if (RotaterPipe->RotID == 3) {
			RotaterPipe->PressureID -= 9;
			RotaterPipe->RotID = 0;
			FRotator CurrentRotation = RotaterPipe->GetActorRotation();
			CurrentRotation.Yaw = OrigDegr;
			RotaterPipe->SetActorRotation(CurrentRotation);
		}
		else {
			RotaterPipe->PressureID += 3;
			RotaterPipe->RotID += 1;
			FRotator CurrentRotation = RotaterPipe->GetActorRotation();
			CurrentRotation.Yaw += RotDegree;
			RotaterPipe->SetActorRotation(CurrentRotation);
		}
	}
	/*
	if (RotaterPipe->RotID == 0) {
		FRotator CurrentRotation = RotaterPipe->GetActorRotation();
		CurrentRotation.Yaw = 45.0f;
		RotaterPipe->SetActorRotation(CurrentRotation);
	}*/
	/*
	if (RotaterPipe->isRotated == false) {
		RotaterPipe->PressureID += 3;
		RotaterPipe->isRotated = true;
		FRotator CurrentRotation = RotaterPipe->GetActorRotation(); 
		CurrentRotation.Yaw += 45.0f; 
		RotaterPipe->SetActorRotation(CurrentRotation); 
	}
	else {
		RotaterPipe->PressureID -= 3;
		RotaterPipe->isRotated = false;
		FRotator CurrentRotation = RotaterPipe->GetActorRotation();
		CurrentRotation.Yaw -= 45.0f;
		RotaterPipe->SetActorRotation(CurrentRotation);
	}*/
}

