// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/SV_PipeSpinActivate.h"
#include "Player/SV_PlayerController.h"

ASV_PipeSpinActivate::ASV_PipeSpinActivate() {
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	RootComponent = Cast<UStaticMeshComponent>(BodyMesh);
}
void ASV_PipeSpinActivate::Interact(APlayerController* Controller)
{
	Super::Interact(Controller);
	if (ASV_PlayerController* PlayerController = Cast<ASV_PlayerController>(Controller))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Connection to Pipe Spin Area Successful!"));
		PipeSpinArea->OnRotate();
	}
}

