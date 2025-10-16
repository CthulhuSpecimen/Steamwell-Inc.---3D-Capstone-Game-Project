// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SV_InstantPushable.generated.h"

UCLASS()
class STEAMWELL_API ASV_InstantPushable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASV_InstantPushable();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pushable")
		UStaticMeshComponent* Mesh;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pushable")
		UPrimitiveComponent* PhysicsComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, FVector NormalImpulse,
			const FHitResult& Hit);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pushable")
	bool isMoving = false;

};
