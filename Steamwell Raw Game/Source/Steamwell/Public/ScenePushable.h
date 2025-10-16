// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScenePushable.generated.h"

UCLASS()
class STEAMWELL_API AScenePushable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScenePushable();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pushable")
		UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pushable")
		UPrimitiveComponent* PhysicsComponent;

	UFUNCTION(BlueprintCallable, Category = "Pushable")
		void ApplyForce(FVector Force);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
