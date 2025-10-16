// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/SV_PipeRun.h"
#include "Player/SV_PlayerController.h"

ASV_PipeRun::ASV_PipeRun() {
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	RootComponent = Cast<UStaticMeshComponent>(BodyMesh);
}
void ASV_PipeRun::Interact(APlayerController* Controller)
{
	Super::Interact(Controller);
	if (ASV_PlayerController* PlayerController = Cast<ASV_PlayerController>(Controller))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Connection to player successful!"));
		PPManager->CheckPlates();
	}
}
