#include "AI/BTTask_FindPathPoint.h"
#include "AI/NPC.h"
#include "AI/NPC_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/PatrolPath.h"

UBTTask_FindPathPoint::UBTTask_FindPathPoint(FObjectInitializer const& ObjectInitializer)
    : UBTTask_BlackboardBase{ ObjectInitializer }
{
    NodeName = TEXT("Find Path Point");
}

EBTNodeResult::Type UBTTask_FindPathPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    UE_LOG(LogTemp, Warning, TEXT("BTTask_FindPathPoint: ExecuteTask CALLED!"));

    if (UBlackboardComponent* const bc = OwnerComp.GetBlackboardComponent())
    {
        UE_LOG(LogTemp, Warning, TEXT("BTTask_FindPathPoint: Blackboard Component VALID!"));

        int32 Index = bc->GetValueAsInt(GetSelectedBlackboardKey());
        UE_LOG(LogTemp, Warning, TEXT("BTTask_FindPathPoint: Retrieved Index: %d"), Index);

        if (ANPC_AIController* const cont = Cast<ANPC_AIController>(OwnerComp.GetAIOwner()))
        {
            if (ANPC* const npc = Cast<ANPC>(cont->GetPawn()))
            {
                if (APatrolPath* PatrolPath = npc->GetPatrolPath())
                {
                    int32 NumPoints = PatrolPath->Num();
                    UE_LOG(LogTemp, Warning, TEXT("BTTask_FindPathPoint: PatrolPoints array size: %d"), NumPoints);

                    if (NumPoints == 0)
                    {
                        UE_LOG(LogTemp, Error, TEXT("❌ BTTask_FindPathPoint: Patrol path has no points!"));
                        return EBTNodeResult::Failed;
                    }

                    if (Index < 0 || Index >= NumPoints)
                    {
                        UE_LOG(LogTemp, Error, TEXT("❌ BTTask_FindPathPoint: Index %d is out of bounds (max %d)."), Index, NumPoints);
                        return EBTNodeResult::Failed;
                    }

                    FVector LocalPoint = PatrolPath->GetPatrolPoint(Index);
                    if (LocalPoint.IsNearlyZero())
                    {
                        UE_LOG(LogTemp, Error, TEXT("❌ BTTask_FindPathPoint: LocalPoint is invalid or ZeroVector. Aborting task."));
                        return EBTNodeResult::Failed;
                    }

                    FVector GlobalPoint = PatrolPath->GetActorTransform().TransformPosition(LocalPoint);

                    UE_LOG(LogTemp, Warning, TEXT("BTTask_FindPathPoint: Setting NextPatrolPoint: %s"), *GlobalPoint.ToString());

                    bc->SetValueAsVector(FName("NextPatrolPoint"), GlobalPoint);

                    // Confirm set
                    FVector CheckValue = bc->GetValueAsVector(FName("NextPatrolPoint"));
                    UE_LOG(LogTemp, Warning, TEXT("Blackboard After Set - Stored NextPatrolPoint = %s"), *CheckValue.ToString());

                    FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
                    return EBTNodeResult::Succeeded;
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("❌ BTTask_FindPathPoint: NPC has NO PatrolPath"));
                    return EBTNodeResult::Failed;
                }
            }
        }
    }

    UE_LOG(LogTemp, Error, TEXT("❌ BTTask_FindPathPoint: Missing AIController or Blackboard Component"));
    return EBTNodeResult::Failed;
}

