// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SV_DialogueTriggerVolume.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STEAMWELL_API USV_DialogueTriggerVolume : public UPrimitiveComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USV_DialogueTriggerVolume();

	virtual void OnRegister() override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
private:
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Dialogue", meta = (AllowPrivateAccess = "true"))
		FName DialogueKey;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Dialogue", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* DialogueTriggerVolume;

	UFUNCTION()
		void OnComponentBeginOverlap(
			UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult);

	bool bHasNotBeenPlayed = true;
};
