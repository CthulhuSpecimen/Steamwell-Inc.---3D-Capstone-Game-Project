// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SV_PushableObject.h"
#include "GameFramework/Actor.h"
#include "SV_PipeSpin.generated.h"

UCLASS()
class STEAMWELL_API ASV_PipeSpin : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASV_PipeSpin();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rotate")
		UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rotate")
		UBoxComponent* Bounds;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
		void OnRotate();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rotate")
		ASV_PushableObject* RotaterPipe;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotate")
		float RotDegree = 45.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotate")
	float OrigDegr = 0.0f;
};
