// Fill out your copyright notice in the Description page of Project Settings.

#include "AI/BTTask_IncrementPathIndex.h"
#include "AI/NPC.h"
#include "AI/NPC_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_IncrementPathIndex::UBTTask_IncrementPathIndex(FObjectInitializer const& ObjectInitializer) :
    UBTTask_BlackboardBase{ ObjectInitializer }
{
    NodeName = TEXT("Increment Path Index");
}

EBTNodeResult::Type UBTTask_IncrementPathIndex::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    // try and get the AI controller
    if (auto* const Cont = Cast<ANPC_AIController>(OwnerComp.GetAIOwner()))
    {
        UBlackboardComponent* BC = OwnerComp.GetBlackboardComponent(); // Declare BC here

        //try and get npc
        if (auto* const NPC = Cast<ANPC>(Cont->GetPawn()))
        {
            if (BC) // Now BC is always valid within this scope if Cont is valid
            {
                if (NPC->GetPatrolPath())
                {
                    auto const NoOfPoints = NPC->GetPatrolPath()->Num();
                    auto const MinIndex = 0;
                    auto const MaxIndex = NoOfPoints - 1;
                    auto Index = BC->GetValueAsInt(GetSelectedBlackboardKey());

                    UE_LOG(LogTemp, Warning, TEXT("UBTTask_IncrementPathIndex: Retrieved Index: %d, NoOfPoints: %d"), Index, NoOfPoints);

                    if (bBiDirectional)
                    {
                        if (Index >= MaxIndex && Direction == EDirectionType::Forward)
                        {
                            Direction = EDirectionType::Reverse;
                        }
                        else if (Index <= MinIndex && Direction == EDirectionType::Reverse) // Changed >= to <=
                        {
                            Direction = EDirectionType::Forward;
                        }
                    }

                    int32 NewIndex = (Direction == EDirectionType::Forward ? ++Index : --Index);

                    // Handle wrapping correctly
                    if (NewIndex >= NoOfPoints)
                    {
                        NewIndex = 0;
                    }
                    else if (NewIndex < 0)
                    {
                        NewIndex = NoOfPoints - 1;
                    }

                    BC->SetValueAsInt(GetSelectedBlackboardKey(), NewIndex);

                    UE_LOG(LogTemp, Warning, TEXT("UBTTask_IncrementPathIndex: Setting New Index: %d"), NewIndex);

                    FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
                    return EBTNodeResult::Succeeded;
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("UBTTask_IncrementPathIndex: NPC has no Patrol Path!"));
                    return EBTNodeResult::Failed;
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("UBTTask_IncrementPathIndex: Blackboard Component is NULL!"));
                return EBTNodeResult::Failed;
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("UBTTask_IncrementPathIndex: NPC is NULL!"));
            return EBTNodeResult::Failed;
        }
    }
    UE_LOG(LogTemp, Error, TEXT("UBTTask_IncrementPathIndex: AI Controller is NULL!"));
    return EBTNodeResult::Failed;
}