// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/SV_InteractableBase.h"

// Sets default values
ASV_InteractableBase::ASV_InteractableBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Name = "Interactable";
	Action = "Interact";
	Button = "F";
}

// Called when the game starts or when spawned
void ASV_InteractableBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASV_InteractableBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASV_InteractableBase::Interact(APlayerController* Controller)
{
	return;
}


FString ASV_InteractableBase::GetInteractText() const
{
	return FString::Printf(TEXT("%s: Press %s to %s"), *Name, *Button, *Action);
}