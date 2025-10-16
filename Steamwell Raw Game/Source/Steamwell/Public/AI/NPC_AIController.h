#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AIPerceptionComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "NPC_AIController.generated.h"

UCLASS()
class STEAMWELL_API ANPC_AIController : public AAIController
{
    GENERATED_BODY()

public:
    explicit ANPC_AIController(FObjectInitializer const& ObjectInitializer);

protected:
    virtual void OnPossess(APawn* InPawn) override;
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

    void SetupPerceptionSystem();

    UFUNCTION()
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

    UFUNCTION()
    void OnTargetDetected(AActor* Actor, FAIStimulus Stimulus);

    UFUNCTION()
    void OnPlayerSpotted(AActor* Player);

    UFUNCTION()
    void OnPlayerLost();

    void ReturnToPatrol();

    // AI logic
    FTimerHandle LostSightTimerHandle;
    FVector LastSeenLocation;
    bool bPlayerLost = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float LostSightTimeDuration = 5.0f;

    // BT & BB asset references that will be set in the Blueprint defaults
    UPROPERTY(EditDefaultsOnly, Category = "AI")
    TObjectPtr<UBehaviorTree> BehaviorTreeAsset;

    UPROPERTY(EditDefaultsOnly, Category = "AI")
    TObjectPtr<UBlackboardData> BlackboardAsset;

    // Components
    class UAISenseConfig_Sight* SightConfig;
    class UBehaviorTreeComponent* BehaviorComponent;
    class UBlackboardComponent* BlackboardComponent;

public:
    UFUNCTION()
    void DefuseEnemy();

    void ResetDefusedState();
    UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Pressure Plate Settings")
    bool isDefusedAnim = false;
    bool CanDefuseEnemy(class ASV_PlayerCharacter* Player);
};
