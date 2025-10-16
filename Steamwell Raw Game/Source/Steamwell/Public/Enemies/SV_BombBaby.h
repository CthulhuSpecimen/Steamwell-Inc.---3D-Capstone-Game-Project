// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundCue.h"
#include "GameFramework/Actor.h"
#include "SV_BombBaby.generated.h"

UCLASS()
class STEAMWELL_API ASV_BombBaby : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASV_BombBaby();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UMeshComponent* MeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Audio")
	USoundCue* BombBabyExplode;

	UPROPERTY(EditDefaultsOnly, Category = "Audio")
	USoundCue* BombBabyComplete;

	UPROPERTY(EditDefaultsOnly, Category = "Audio")
	USoundCue* BombBabyTick;

	UPROPERTY(EditDefaultsOnly, Category = "Audio")
	USoundCue* BombBabyStart;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void UpdateStatus(int32 ID, bool bIsActivated);
	void Activate();
	void Defuse();
	void Explode();
	void RestartLevel();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	int32 Identifier = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	int32 TimeUntilExplosion = 10;

	float LastPlayedSecond = -1.0f;
	

	
	FTimerHandle ResetLevelTimerHandle;
public:
	UPROPERTY(BlueprintReadOnly)
	FTimerHandle ExplosionTimerHandle;
	UFUNCTION(BlueprintImplementableEvent)
		void OnDefuse();

	UFUNCTION(BlueprintImplementableEvent)
		void OnExplode();

};
