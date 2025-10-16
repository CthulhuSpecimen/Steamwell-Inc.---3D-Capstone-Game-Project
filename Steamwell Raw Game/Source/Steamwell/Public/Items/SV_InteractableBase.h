// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SV_InteractableBase.generated.h"

UCLASS()
class STEAMWELL_API ASV_InteractableBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASV_InteractableBase();

	//UFUNCTION(BlueprintNativeEvent)
		//void Interact(APlayerController* Controller);
	
	virtual void Interact(APlayerController* Controller);

	UPROPERTY(EditDefaultsOnly)
		FString Name;

	UPROPERTY(EditDefaultsOnly)
		FString Action;
	
	UPROPERTY(EditDefaultsOnly)
		FString Button;

	UFUNCTION(BlueprintCallable, Category = "Pickup")
		FString GetInteractText() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
