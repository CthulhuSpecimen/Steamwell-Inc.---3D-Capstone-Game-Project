// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask_FindRandomLocation.h"

#include "NavigationSystem.h"
#include "AI/NPC_AIController.h" 
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_FindRandomLocation::UBTTask_FindRandomLocation(FObjectInitializer const& ObjectInitializer) : 
	UBTTask_BlackboardBase{ ObjectInitializer }
{
	NodeName = "Find Random Location in NavMesh";
}

EBTNodeResult::Type UBTTask_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Warning, TEXT("MoveTo Task Started!"));

	//get AI controller and its npc
	if (ANPC_AIController* const cont = Cast<ANPC_AIController>(OwnerComp.GetAIOwner())) // gets controller and the behavior tree
	{
		if (auto* const npc = cont->GetPawn())
		{
			// obtain npc location to use as an origin
			auto const Origin = npc->GetActorLocation();

			//get the navigation system and generate a random location
			if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				FNavLocation Loc;
				if (NavSys->GetRandomPointInNavigableRadius(Origin, SearchRadius, Loc)) //searches for a random point in the level starting at that origin and within the radius, and puts the output in a loc variable. returns true if radius is found
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);
					UE_LOG(LogTemp, Warning, TEXT("Found Valid Random Location: %s"), *Loc.Location.ToString()); // Debugging

				}

				else
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to Find a Random Location!"));
				}

				//finish with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}

		return Super::ExecuteTask(OwnerComp, NodeMemory);
	}
	return EBTNodeResult::Failed;
}

