// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_ChasePlayer.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API UBTTask_ChasePlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

protected:
	float LastAgroSoundTime;
	
public:
	explicit UBTTask_ChasePlayer(FObjectInitializer const& ObjectInitializer);
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	USoundCue* BotAgro_Cue;
};
