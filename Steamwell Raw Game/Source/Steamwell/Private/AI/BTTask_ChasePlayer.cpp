#include "AI/BTTask_ChasePlayer.h"
#include "AI/NPC_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "AI/NPC.h"
#include "Engine/World.h"  

UBTTask_ChasePlayer::UBTTask_ChasePlayer(FObjectInitializer const& ObjectInitializer) :
	UBTTask_BlackboardBase{ ObjectInitializer },
	LastAgroSoundTime(0.0f) 
{
	NodeName = TEXT("Chase Player");
}

EBTNodeResult::Type UBTTask_ChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get target location from blackboard via the NPC's controller
	if (auto* const cont = Cast<ANPC_AIController>(OwnerComp.GetAIOwner()))
	{
		auto const PlayerLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(GetSelectedBlackboardKey());

		float CurrentTime = FPlatformTime::Seconds();

		// Check if 5 seconds have passed since the last sound was played
		if (CurrentTime - LastAgroSoundTime >= 5.0f)
		{
			// Load the Sound Cue at runtime
			USoundCue* AgroSound = Cast<USoundCue>(StaticLoadObject(USoundCue::StaticClass(), nullptr, TEXT("/Game/Steamwell_Sounds/Bot_Sounds/BotAgro_Cue.BotAgro_Cue")));

			if (AgroSound)
			{
				if (ANPC* NPC = Cast<ANPC>(cont->GetPawn()))
				{
					UGameplayStatics::PlaySoundAtLocation(NPC, AgroSound, NPC->GetActorLocation());
				}

				LastAgroSoundTime = CurrentTime;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Fail load BotAgro_Cue"));
			}
		}

		// Move to the player's location
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(cont, PlayerLocation);

		// Finish with success
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;

	// Checking if AI controller and blackboard are valid 
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController) return EBTNodeResult::Failed;

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp) return EBTNodeResult::Failed;

	// Check if defused
	bool bIsDefused = BlackboardComp->GetValueAsBool("IsDefused");
	if (bIsDefused)
	{
		return EBTNodeResult::Succeeded; 
	}
}
