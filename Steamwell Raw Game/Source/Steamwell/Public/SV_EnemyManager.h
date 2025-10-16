// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "AI/NPC.h"
#include "SV_EnemyManager.generated.h"


UCLASS()
class STEAMWELL_API ASV_EnemyManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASV_EnemyManager();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy")
		UBoxComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
			bool bFromSweep, const FHitResult& SweepResult);

	FTimerHandle EnemyRelease;
	int32 EnemyIter = 0;

	void TimerFunction(); // Function to be called when timer completes
public:	
	// Called every frame
	

	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
		TArray<ANPC*> Enemies;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
		float EnemySpawnTimer = 10.0f;

};
