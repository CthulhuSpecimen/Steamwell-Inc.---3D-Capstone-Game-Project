// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/SV_InteractableBase.h"
#include "GameFramework/Actor.h"
#include "SV_PushableObject.generated.h"


UCLASS()
class STEAMWELL_API ASV_PushableObject : public ASV_InteractableBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASV_PushableObject();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pushable")
		UStaticMeshComponent* MeshComponent;


	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pushable")
		UPrimitiveComponent* PhysicsComponent;*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Interact(APlayerController* Controller) override;
	void StartPush(FVector Direction);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Pressure Plate Settings")
		int PressureID = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Pressure Plate Settings")
		bool isPlaced;
	// Function to stop pushing
	void StopPush();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Push Settings")
		float MoveDistance = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Push Settings")
		float MoveSpeed = 300.f;
	bool bIsBeingPushed;
	bool isRotated = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Pressure Plate Settings")
		int RotID = 0;
private:
	FVector MoveDirection;
	

};
