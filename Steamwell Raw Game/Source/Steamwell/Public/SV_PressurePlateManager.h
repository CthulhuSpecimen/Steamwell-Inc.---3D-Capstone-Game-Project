// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SV_PushableObject.h"
#include "SV_PressurePlateManager.generated.h"

class ASV_PressurePlate; // Forward declaration


UCLASS()
class STEAMWELL_API ASV_PressurePlateManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASV_PressurePlateManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int PlatesActive;

public:	
	// Called every frame
	void ActivatePlate(int32 PressureID);

	UFUNCTION()
		void CheckPlates();
	UFUNCTION(BlueprintImplementableEvent)
		void PlatesComplete();
	UFUNCTION(BlueprintImplementableEvent)
		void PlatesPreRejected();
	UFUNCTION(BlueprintImplementableEvent)
		void PlatesRejected();
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int DepPlates;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isPattern = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool PatternComplete = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ASV_PressurePlate*> PatternPlates;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ASV_PushableObject*> PatternPipes;
	TArray<int32> PatternIDs;
	TArray<int32> InputtedIDs;


};
