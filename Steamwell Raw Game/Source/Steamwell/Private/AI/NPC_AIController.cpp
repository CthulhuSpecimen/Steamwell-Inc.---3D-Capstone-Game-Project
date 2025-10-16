// Fill out your copyright notice in the Description page of Project Settings.

#include "AI/NPC_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AI/NPC.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Player/SV_PlayerCharacter.h"
#include "Player/SV_PlayerController.h"
#include "Kismet/GameplayStatics.h" // For GetWorldTimerManager
#include "NavigationSystem.h"


ANPC_AIController::ANPC_AIController(FObjectInitializer const& ObjectInitializer)
{
    BehaviorComponent = CreateDefaultSubobject<UBehaviorTreeComponent>
        (TEXT("BehaviorComponent"));
    BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>
        (TEXT("BlackboardComponent"));
    SetupPerceptionSystem();
}

/*void ANPC_AIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    ANPC* NPC = Cast<ANPC>(InPawn);

    if (!BehaviorTreeAsset || !BlackboardAsset)
    {
        UE_LOG(LogTemp, Error, TEXT("NPC_AIController: Missing BehaviorTreeAsset or BlackboardAsset!"));
        return;
    }

    if (BlackboardComponent && UseBlackboard(BlackboardAsset, BlackboardComponent))
    {
        BlackboardComponent->SetValueAsInt(FName("PatrolPathIndex"), 0);

        if (NPC)
        {
            APatrolPath* PatrolPath = NPC->GetPatrolPath();
            if (PatrolPath)
            {
                FVector FirstPoint = PatrolPath->GetPatrolPoint(0);
                BlackboardComponent->SetValueAsVector(FName("NextPatrolPoint"), FirstPoint);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("NPC_AIController: NPC has no PatrolPath assigned!"));
            }
        }

        UE_LOG(LogTemp, Warning, TEXT("Starting Behavior Tree from controller reference."));
        BehaviorComponent->StartTree(*BehaviorTreeAsset);
    }
} */

void ANPC_AIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    UE_LOG(LogTemp, Warning, TEXT("✅ OnPossess: AIController possessed: %s"), *InPawn->GetName());

    if (ANPC* npc = Cast<ANPC>(InPawn))
    {
        if (UBehaviorTree* BT = npc->GetBehaviorTree())
        {
            UE_LOG(LogTemp, Warning, TEXT("✅ Starting BehaviorTree from AIController"));

            // Initialize blackboard before running tree
            if (BT->BlackboardAsset)
            {
                BlackboardComponent->InitializeBlackboard(*BT->BlackboardAsset);

                // Optionally set default blackboard values here:
                BlackboardComponent->SetValueAsInt(FName("PatrolPathIndex"), 0);

                if (APatrolPath* PatrolPath = npc->GetPatrolPath())
                {
                    if (PatrolPath->Num() > 0)
                    {
                        FVector FirstPoint = PatrolPath->GetPatrolPoint(0);
                        BlackboardComponent->SetValueAsVector(FName("NextPatrolPoint"), FirstPoint);
                    }
                }

                RunBehaviorTree(BT);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("❌ BehaviorTree has no BlackboardAsset!"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("❌ NPC has no BehaviorTree assigned!"));
        }
    }
}


    // Comment out these manual Blackboard sets
    // if (Blackboard)
    // {
    //     FVector TestLocation = FVector(1000, 1000, 0); // Set a test position
    //     Blackboard->SetValueAsVector(FName("PatrolPathPoint"), TestLocation);
    //     FVector CheckLocation = Blackboard->GetValueAsVector(FName("PatrolPathPoint"));
    //     UE_LOG(LogTemp, Warning, TEXT("Manual Blackboard Test (OnPossess) - Read Value: %s"), *CheckLocation.ToString());
    // }


void ANPC_AIController::SetupPerceptionSystem()
{
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
    if (SightConfig)
    {
        SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
        SightConfig->SightRadius = 750.f;
        SightConfig->LoseSightRadius = SightConfig->SightRadius + 25.f;
        SightConfig->PeripheralVisionAngleDegrees = 90.f;
        SightConfig->SetMaxAge(5.f);
        SightConfig->AutoSuccessRangeFromLastSeenLocation = 520.f;
        SightConfig->DetectionByAffiliation.bDetectEnemies = true;
        SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
        SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

        // Explicitly set the NPC's team ID (e.g., Enemy)
        SetGenericTeamId(FGenericTeamId(1)); // Or another ID

        // Configure which teams are considered enemies, friendlies, and neutrals
        FGenericTeamId EnemyTeam(0);   // Assuming Player is Team 0
        FGenericTeamId FriendlyTeam(1); // Assuming NPC is Team 1
        FGenericTeamId NeutralTeam(2);  // Example Neutral Team

        /*SetTeamAttitudeTowardsTeam(EnemyTeam, ETeamAttitude::Hostile);
        SetTeamAttitudeTowardsTeam(FriendlyTeam, ETeamAttitude::Friendly);
        SetTeamAttitudeTowardsTeam(NeutralTeam, ETeamAttitude::Neutral);*/


        GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
        GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &ANPC_AIController::OnPerceptionUpdated);
        GetPerceptionComponent()->ConfigureSense((*SightConfig));
    }
}

void ANPC_AIController::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("ANPC_AIController: AI Controller is active!"));

    APawn* MyPawn = GetPawn();
    if (!MyPawn)
    {
       
        UE_LOG(LogTemp, Error, TEXT("ANPC_AIController: No pawn is assigned to this AI Controller!"));
        return;
    }
    UE_LOG(LogTemp, Warning, TEXT("AI Controller successfully possessed: %s"), *MyPawn->GetName());
    ANPC* const npc = Cast<ANPC>(MyPawn);
    if (!npc)
    {
        UE_LOG(LogTemp, Error, TEXT("ANPC_AIController: Pawn is NOT an NPC!"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("ANPC_AIController: NPC is assigned!"));

    if (npc->GetBehaviorTree())
    {
       //  UE_LOG(LogTemp, Warning, TEXT("ANPC_AIController: Found Behavior Tree, running it now."));
       // RunBehaviorTree(npc->GetBehaviorTree());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("ANPC_AIController: NPC has no Behavior Tree assigned!"));
        UE_LOG(LogTemp, Error, TEXT("AI Controller failed to possess a pawn!"));
    }

    if (BlackboardComponent && GetPawn())
    {
        FVector Target = BlackboardComponent->GetValueAsVector("NextPatrolPoint");

        UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
        if (NavSys)
        {
            bool bCanPath = NavSys->TestPathSync(FPathFindingQuery(this, *NavSys->GetDefaultNavDataInstance(), GetPawn()->GetActorLocation(), Target));
            UE_LOG(LogTemp, Warning, TEXT("🧭 NavMesh Check — Can Reach Patrol Point? %s"), bCanPath ? TEXT("YES") : TEXT("NO"));
        }
    }

}

    // Comment out these manual Blackboard sets
    // if (Blackboard)
    // {
    //     FVector TestLocation = FVector(500, 500, 0); // Test Position
    //     Blackboard->SetValueAsVector(FName("PatrolPathPoint"), TestLocation);
    //     FVector CheckLocation = Blackboard->GetValueAsVector(FName("PatrolPathPoint"));
    //     UE_LOG(LogTemp, Warning, TEXT("Manual Blackboard Test (BeginPlay) - Read Value: %s"), *CheckLocation.ToString());
    // }


void ANPC_AIController::OnTargetDetected(AActor* Actor, FAIStimulus Stimulus)
{
    if (!Actor) return;

    UE_LOG(LogTemp, Warning, TEXT("NPC Sensed: %s"), *Actor->GetName());
    UE_LOG(LogTemp, Warning, TEXT("Stimulus Sensed: %s"), Stimulus.WasSuccessfullySensed() ? TEXT("Yes") : TEXT("No"));

    ASV_PlayerCharacter* Player = Cast<ASV_PlayerCharacter>(Actor);
    if (!Player) return;

    if (Stimulus.WasSuccessfullySensed())
    {
        OnPlayerSpotted(Actor);
    }
    else
    {
        OnPlayerLost();
    }
}

void ANPC_AIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
    if (NavSys && GetPawn())
    {
        bool bCanReach = NavSys->TestPathSync(FPathFindingQuery(this, *NavSys->GetDefaultNavDataInstance(), GetPawn()->GetActorLocation(), BlackboardComponent->GetValueAsVector("NextPatrolPoint")));

        UE_LOG(LogTemp, Warning, TEXT("NPC AI Path Check: %s"), bCanReach ? TEXT("Can Reach") : TEXT("CANNOT Reach!"));
    }

    if (BlackboardComponent)
    {
        FName PatrolKey = FName("NextPatrolPoint");
        FVector PatrolPoint = BlackboardComponent->GetValueAsVector(FName("NextPatrolPoint"));

        UE_LOG(LogTemp, Warning, TEXT("AI Read Blackboard Key %s: %s"),
            *PatrolKey.ToString(), *PatrolPoint.ToString());

        if (!PatrolPoint.IsNearlyZero())
        {
            UE_LOG(LogTemp, Warning, TEXT("AI attempting to move to: %s"), *PatrolPoint.ToString());
            // MoveToLocation(PatrolPoint);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Blackboard patrol point is invalid!"));
        }
    }
}

void ANPC_AIController::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{
    UE_LOG(LogTemp, Warning, TEXT("ANPC_AIController::OnPerceptionUpdated - Called. UpdatedActors count: %d"), UpdatedActors.Num());
    for (AActor* Actor : UpdatedActors)
    {
        UE_LOG(LogTemp, Warning, TEXT("ANPC_AIController::OnPerceptionUpdated - Sensed Actor: %s, Class: %s"), *Actor->GetName(), *Actor->GetClass()->GetName());
        FActorPerceptionBlueprintInfo Info;
        GetPerceptionComponent()->GetActorsPerception(Actor, Info);
        bool bSuccessfullySensed = Info.LastSensedStimuli[0].WasSuccessfullySensed();
        UE_LOG(LogTemp, Warning, TEXT("ANPC_AIController::OnPerceptionUpdated - Successfully Sensed: %s"), bSuccessfullySensed ? TEXT("true") : TEXT("false"));

        if (Actor->IsA(ACharacter::StaticClass()))
        {
            UE_LOG(LogTemp, Warning, TEXT("ANPC_AIController::OnPerceptionUpdated - Sensed Actor IS A Character."));
            if (bSuccessfullySensed)
            {
                OnPlayerSpotted(Actor);
            }
            else
            {
                OnPlayerLost();
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("ANPC_AIController::OnPerceptionUpdated - Sensed Actor is NOT a Character."));
        }
        if (BlackboardComponent)
        {
            bool currentCanSee = BlackboardComponent->GetValueAsBool(FName("CanSeePlayer"));
            UE_LOG(LogTemp, Warning, TEXT("NPC_AIController::OnPerceptionUpdated - CanSeePlayer: %s"), currentCanSee ? TEXT("true") : TEXT("false"));
        }
    }
}

void ANPC_AIController::OnPlayerSpotted(AActor* Player)
{
    if (BlackboardComponent)
    {
        BlackboardComponent->SetValueAsObject(FName("TargetActor"), Player);
        LastSeenLocation = Player->GetActorLocation();
        BlackboardComponent->SetValueAsVector(FName("LastSeenLocation"), LastSeenLocation);
        bPlayerLost = false;
        GetWorldTimerManager().ClearTimer(LostSightTimerHandle);
        // Log when CanSeePlayer becomes true
        BlackboardComponent->SetValueAsBool(FName("CanSeePlayer"), true);
        UE_LOG(LogTemp, Warning, TEXT("NPC_AIController::OnPlayerSpotted - CanSeePlayer set to: true"));
    }
}

void ANPC_AIController::OnPlayerLost()
{
    if (!bPlayerLost)
    {
        bPlayerLost = true;
        if (BlackboardComponent)
        {
            AActor* LastSeenActor = Cast<AActor>(BlackboardComponent->GetValueAsObject(FName("TargetActor")));
            if (LastSeenActor)
            {
                LastSeenLocation = LastSeenActor->GetActorLocation();
            }
            BlackboardComponent->SetValueAsVector(FName("LastSeenLocation"), LastSeenLocation);
            GetWorldTimerManager().SetTimer(LostSightTimerHandle, this, &ANPC_AIController::ReturnToPatrol, LostSightTimeDuration, false);
            // Log when CanSeePlayer becomes false
            BlackboardComponent->SetValueAsBool(FName("CanSeePlayer"), false);
            UE_LOG(LogTemp, Warning, TEXT("NPC_AIController::OnPlayerLost - CanSeePlayer set to: false"));
        }
    }
}

void ANPC_AIController::ReturnToPatrol()
{
    bPlayerLost = false;
    if (BlackboardComponent)
    {
        BlackboardComponent->ClearValue(FName("TargetActor"));
        BlackboardComponent->ClearValue(FName("LastSeenLocation"));
    }
}

void ANPC_AIController::DefuseEnemy()
{
    UE_LOG(LogTemp, Warning, TEXT("Enemy Defused!"));
    APawn* ControlledPawn = GetPawn();
    if (ControlledPawn)
    {
        UCharacterMovementComponent* MovementComp = ControlledPawn->FindComponentByClass<UCharacterMovementComponent>();
        UE_LOG(LogTemp, Warning, TEXT("Controlled pawn: %s"), *ControlledPawn->GetName());
        
        isDefusedAnim = true;
        if (MovementComp)
        {
            MovementComp->StopMovementImmediately();
        }
        if (ANPC* NPC = Cast<ANPC>(ControlledPawn)) {
            NPC->DeactivateEnemy();
        }
    }
    if (BlackboardComponent)
    {
        BlackboardComponent->SetValueAsBool("IsDefused", true);
    }


    if (BehaviorComponent)
    {
        BehaviorComponent->StopTree(EBTStopMode::Safe); // 🔥 Stops behavior loop
        UE_LOG(LogTemp, Warning, TEXT("Behavior Tree stopped."));

    }

    if (GetPerceptionComponent())
    {
        GetPerceptionComponent()->DestroyComponent();
    }
}

bool ANPC_AIController::CanDefuseEnemy(ASV_PlayerCharacter* Player)
{
    if (!Player)
    {
        UE_LOG(LogTemp, Warning, TEXT("CanDefuseEnemy: Player is NULL"));
        return false;
    }

    ASV_PlayerController* PlayerController = Cast<ASV_PlayerController>(Player->GetController());
    if (!PlayerController)
    {
        UE_LOG(LogTemp, Warning, TEXT("CanDefuseEnemy: PlayerController is NULL"));
        return false;
    }

    USV_InventoryItemAsset* SelectedItem = PlayerController->GetCurrentlySelectedItem();
    if (!SelectedItem)
    {
        UE_LOG(LogTemp, Warning, TEXT("CanDefuseEnemy: No item is selected"));
        return false;
    }

    FString ItemTypeStr = SelectedItem->ItemType.ToString();
    UE_LOG(LogTemp, Warning, TEXT("Selected item type: %s"), *ItemTypeStr);

    // FIX: Use string matching instead of invalid enum comparison
    if (!ItemTypeStr.Contains("Wrench", ESearchCase::IgnoreCase))
    {
        UE_LOG(LogTemp, Warning, TEXT("Selected item is not a wrench"));
        return false;
    }

    // Dot product check
    FVector NPCForward = GetPawn()->GetActorForwardVector();
    FVector EnemyToPlayer = (Player->GetActorLocation() - GetPawn()->GetActorLocation()).GetSafeNormal();
    float DotProduct = FVector::DotProduct(NPCForward, EnemyToPlayer);

    UE_LOG(LogTemp, Warning, TEXT("Dot Product (player behind check): %f"), DotProduct);

    if (DotProduct < -0.5f)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player is behind the NPC"));
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Player is NOT behind the NPC"));
        return false;
    }
}




void ANPC_AIController::ResetDefusedState()
{
    UE_LOG(LogTemp, Warning, TEXT("Enemy Resetting from Defused State!"));
    if (BlackboardComponent)
    {
        BlackboardComponent->SetValueAsBool("IsDefused", false);
        BlackboardComponent->ClearValue(FName("TargetActor"));
    }
    if (GetPerceptionComponent() && !GetPerceptionComponent()->IsRegistered())
    {
        GetPerceptionComponent()->RegisterComponent();
    }
}