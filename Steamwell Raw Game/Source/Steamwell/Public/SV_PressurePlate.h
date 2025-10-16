// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SV_PushableObject.h"
#include "GameFramework/Actor.h"
#include "SV_PressurePlateManager.h"
#include "SV_PressurePlate.generated.h"


UCLASS()
class STEAMWELL_API ASV_PressurePlate : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASV_PressurePlate();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pushable")
		UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pushable")
		UBoxComponent* Bounds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Manager")
		ASV_PressurePlateManager* Manager;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
			bool bFromSweep, const FHitResult& SweepResult);
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
		void BlockPlaced(ASV_PushableObject * PushedObject);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int PressureID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isPlaced;

};