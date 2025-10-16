// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SV_PlayerController.h"
#include "Player/SV_PlayerCharacter.h"


#include "AI/NPC_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h" // Include BehaviorTree
#include "AI/NPC.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

#include "GameManager/SV_GameModeBase.h"

#include "Sound/SoundCue.h"

#include "Kismet/GameplayStatics.h"    
#include "Engine/Engine.h"              

#include "GameManager/SV_GameStateBase.h"
#include "GameManager/SV_AssetManager.h"
#include "Items/SV_InteractableBase.h"
#include "Items/SV_InventoryItem.h"
#include "Items/SV_Gear.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

#include "Items/SV_InventoryItemAsset.h"
#include "Items/Pickups/SV_PaperBaseDataAsset.h"
#include "DrawDebugHelpers.h"



ASV_PlayerController::ASV_PlayerController()
{
	InventorySlotLimit = 10;
	bCanInteract = true;
	bCanDropItem = true;

}

void ASV_PlayerController::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("ASV_PlayerController input setup running!"));

	Super::BeginPlay();
	SetupInputComponent();

	// LoadInventory
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

}

void ASV_PlayerController::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Interact() called"));
	if (CurrentInteractable && bCanInteract)
	{
		UE_LOG(LogTemp, Warning, TEXT("Interacting with: %s"), *CurrentInteractable->GetName());
		bCanInteract = false;
		CurrentInteractable->Interact(this);
		GetWorld()->GetTimerManager().SetTimer(ClickTimerHandle, this, &ASV_PlayerController::ResetInteractFlag, 0.2f, false);
	}

	
}

void ASV_PlayerController::ResetInteractFlag()
{
	bCanInteract = true;
}

void ASV_PlayerController::DropItem()
{
	if (bCanInteract)
	{
		bCanInteract = false;
		// USV_AssetManager::GearPickupType;
		TArray<USV_InventoryItemAsset*> Items;
		if (!CurrentlySelectedItem)
		{
			bCanInteract = true;
			return;
		}
		// We don't want to drop stuff like Notes and Blueprints
		if (USV_PaperBaseDataAsset* PaperAsset = Cast<USV_PaperBaseDataAsset>(CurrentlySelectedItem))
		{
			ToggleSecondaryInventory(PaperAsset); // Blueprint
			bCanInteract = true;
			return;
		}
		bCanInteract = true;
		return;
		GetInventoryItems(Items, CurrentlySelectedItem->ItemType);
		if (Items.Num() > 0)  
		{
			if (ASV_PlayerCharacter* PlayerCharacter = Cast<ASV_PlayerCharacter>(GetPawn()))
			{
				FVector DropLocation = PlayerCharacter->GetActorLocation() + (PlayerCharacter->GetActorForwardVector() * 200);
				FTransform Transform;
				Transform.SetLocation(DropLocation);
				FActorSpawnParameters SpawnParams;
				USV_InventoryItemAsset* ItemToDrop = Items[0];
				bool bItemRemoved = RemoveInventoryItem(ItemToDrop, 1);

				if (bItemRemoved)
				{
					// Play drop sound using the sound cue assigned in Blueprint
					if (DropCue && PlayerCharacter->GetWorld())
					{
						UGameplayStatics::PlaySoundAtLocation(PlayerCharacter->GetWorld(), DropCue, DropLocation);
					}
				}

				FRotator Rotation(0.0f, 0.0f, 0.0f);
				ASV_GameModeBase* GameMode = Cast<ASV_GameModeBase>(GetWorld()->GetAuthGameMode());
				FStreamableDelegate ItemLoadDelegate = FStreamableDelegate::CreateUObject(GameMode, &ASV_GameModeBase::OnItemLoaded, ItemToDrop, DropLocation);
				 // need to fix this to allow any item to be dropped
				if (USV_AssetManager* AssetManager = Cast<USV_AssetManager>(USV_AssetManager::GetIfValid()))
				{
					TArray<FName> Bundles;
					// GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("PrimaryAssetID: %s"), *ItemToDrop->GetPrimaryAssetId().ToString()));
					AssetManager->LoadPrimaryAsset(ItemToDrop->GetPrimaryAssetId(), Bundles, ItemLoadDelegate);	// I don't think this even loads anything but it calls the delegate lol				
				}
			}
			
		}
		GetWorld()->GetTimerManager().SetTimer(ClickTimerHandle, this, &ASV_PlayerController::ResetInteractFlag, 0.2f, false);
	}
	
	
}

void ASV_PlayerController::SelectItemAction()
{
	FKey One { FKey("One") }; // Init keys to check
	FKey Two{ FKey("Two") };
	FKey Three{ FKey("Three") };
	FKey Four{ FKey("Four") };
	if (this->WasInputKeyJustPressed(One))
	{
		OnInventoryItemSelected.Execute(1);
	}
	if (this->WasInputKeyJustPressed(Two))
	{
		OnInventoryItemSelected.Execute(2);
	}
	if (this->WasInputKeyJustPressed(Three))
	{
		OnInventoryItemSelected.Execute(3);
	}
	if (this->WasInputKeyJustPressed(Four))
	{
		OnInventoryItemSelected.Execute(4);
	}
	
}



void ASV_PlayerController::SetupInputComponent()
{
	UE_LOG(LogTemp, Warning, TEXT("Setting up input bindings..."));
	Super::SetupInputComponent();
	UE_LOG(LogTemp, Warning, TEXT("SetupInputComponent is running!"));

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);

	}
	// EnhancedInput doesn't support passing parameter so it's attached to the regular input component instead
	InputComponent->BindAction("Select Inventory Item", EInputEvent::IE_Pressed, this, &ASV_PlayerController::SelectItemAction);
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		//Interacting
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &ASV_PlayerController::Interact);
		EnhancedInputComponent->BindAction(DropAction, ETriggerEvent::Triggered, this, &ASV_PlayerController::DropItem);
		EnhancedInputComponent->BindAction(SelectAction, ETriggerEvent::Triggered, this, &ASV_PlayerController::SelectItemAction);
		EnhancedInputComponent->BindAction(DefuseAction, ETriggerEvent::Started, this, &ASV_PlayerController::TryDefuseEnemy); // Bind the new action
	}

	if (IA_Defuse)
	{
		UE_LOG(LogTemp, Warning, TEXT("IA_Defuse is valid"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("IA_Defuse is NULL — not loaded or assigned!"));
	}
}

void ASV_PlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GEngine)
	{
		if (CurrentInteractable)
		{
			GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Red, FString::Printf(TEXT("Current Interactable: %s"), *CurrentInteractable->GetInteractText()));
			
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Green, FString::Printf(TEXT("Current Interactable: None")));
		}

		if (CurrentlySelectedItem)
		{
			GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Turquoise, FString::Printf(TEXT("CurrentlySelectedItem: %s"), *CurrentlySelectedItem->ItemType.ToString()));

		}
		else
		{
			GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Turquoise, FString::Printf(TEXT("CurrentlySelectedItem: nullptr")));
		}
		
	}
}



bool ASV_PlayerController::AddInventoryItem(USV_InventoryItemAsset* NewItem, int32 ItemCount, int32 ItemLevel)

{
	if (InventoryData.Num() > MaxInventorySize)
	{
		return false;
	}
	bool bChanged{ false };
	if (!NewItem)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Red, FString::Printf(TEXT("Added Item is nullptr")));			
		}
		return false;
	}
	if (ItemCount <= 0 || ItemLevel <= 0)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Red, FString::Printf(TEXT("Failed Trying to add item with negative level or count")));
			
		}
		return false;
	}
	
	// Find current item data
	FSV_InventoryItem OldData;
	GetInventoryItemData(NewItem, OldData);

	// Find modified data
	FSV_InventoryItem NewData{ OldData };
	NewData.UpdateItemData(FSV_InventoryItem(ItemCount, ItemLevel), NewItem->MaxCount, NewItem->MaxLevel);

	if (OldData != NewData)
	{
		// If data changed, update storage and call callback
		InventoryData.Add(NewItem, NewData);

		GEngine->AddOnScreenDebugMessage(1, 3.f, FColor::Orange, FString::Printf(TEXT("Gear Retrieved")));
		NotifyInventoryItemChanged(true, NewItem);
		bChanged = true;
	}
	if (bChanged)
	{
		if (InventoryChangeSoundCue)
		{
			UGameplayStatics::PlaySound2D(this, InventoryChangeSoundCue);
		}

		// SaveInventory();
		
		return true;
	}
	return false;
}

bool ASV_PlayerController::RemoveInventoryItem(USV_InventoryItemAsset* RemovedItem, int32 RemoveCount)
{
	if (!RemovedItem)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Red, FString::Printf(TEXT("Removed Item is nullptr")));
		}
		return false;
	}

	// Find current item data, can be empty
	
	FSV_InventoryItem NewData;
	GetInventoryItemData(RemovedItem, NewData);
	if (!NewData.IsValid())
	{
		// not found
		return false;
	}

	if (RemoveCount <= 0)
	{
		NewData.ItemCount = 0; // delete all
	}
	else
	{
		NewData.ItemCount -= RemoveCount;
	}

	if (NewData.ItemCount > 0)
	{
		InventoryData.Add(RemovedItem, NewData); // replaces existing entry with new data
	}
	else
	{
		InventoryData.Remove(RemovedItem); // TODO: Add support for slotting
	}

	NotifyInventoryItemChanged(false, RemovedItem);
	// SaveInventory();
	return true;
}

void ASV_PlayerController::GetInventoryItems(TArray< USV_InventoryItemAsset*>& Items, FPrimaryAssetType ItemType)
{
	for (const TPair<USV_InventoryItemAsset*, FSV_InventoryItem>& Pair : InventoryData)
	{
		if (Pair.Key)
		{
			FPrimaryAssetId AssetId{ Pair.Key->GetPrimaryAssetId() };
			if (AssetId.PrimaryAssetType == ItemType || !ItemType.IsValid())
			{
				Items.Add(Pair.Key);
			}
		}
	}
}

void ASV_PlayerController::SetCurrentSelectedItem(USV_InventoryItemAsset* SelectedItem)
{
	CurrentlySelectedItem = SelectedItem;
}

int32 ASV_PlayerController::GetInventoryItemCount(const USV_InventoryItemAsset* Item) const
{
	const FSV_InventoryItem* FoundItem{ InventoryData.Find(Item) };

	if (FoundItem)
	{
		return FoundItem->ItemCount;
	}
	return 0;
}

bool ASV_PlayerController::GetInventoryItemData(const USV_InventoryItemAsset* Item, FSV_InventoryItem& ItemData) const
{
	
	const FSV_InventoryItem* FoundItem{ InventoryData.Find(Item) };

	if (FoundItem)
	{
		ItemData = *FoundItem;
		return true;
	}
	ItemData = FSV_InventoryItem(0, 0);
	return false;
}

void ASV_PlayerController::NotifyInventoryItemChanged(bool bAdded, USV_InventoryItemAsset* Item)
{
	// native first
	OnInventoryItemChangedNative.Broadcast(bAdded, Item);
	OnInventoryItemChanged.Broadcast(bAdded, Item);

	InventoryItemChanged(bAdded, Item);
}

void ASV_PlayerController::NotifyInventoryLoaded()
{
	OnInventoryLoadedNative.Broadcast();
	OnInventoryLoaded.Broadcast();
}

USV_InventoryItemAsset* ASV_PlayerController::GetCurrentlySelectedItem() const
{
	return CurrentlySelectedItem;
} 


void ASV_PlayerController::TryDefuseEnemy()
{
	UE_LOG(LogTemp, Warning, TEXT("TryDefuseEnemy: Defuse action triggered"));
	UE_LOG(LogTemp, Warning, TEXT("🎯 Defuse input received!"));

	ASV_PlayerCharacter* PlayerCharacter = Cast<ASV_PlayerCharacter>(GetPawn());
	if (!PlayerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("TryDefuseEnemy: PlayerCharacter is NULL"));
		return;
	}

	// Make sure player has selected an item
	if (!CurrentlySelectedItem)
	{
		UE_LOG(LogTemp, Warning, TEXT("TryDefuseEnemy: No item is selected"));
		return;
	}

	// Check if the selected item is a wrench
	FString ItemTypeStr = CurrentlySelectedItem->ItemType.ToString();
	UE_LOG(LogTemp, Warning, TEXT("Selected item type string: %s"), *ItemTypeStr);

	if (!ItemTypeStr.Contains("Wrench", ESearchCase::IgnoreCase))

	{
		UE_LOG(LogTemp, Warning, TEXT("TryDefuseEnemy: Selected item is a wrench"));
		return;
	}


	// Search for nearby enemies
	float DetectionRadius = 200.f; // adjust based on your level
	FVector PlayerLocation = PlayerCharacter->GetActorLocation();
	TArray<AActor*> FoundActors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANPC::StaticClass(), FoundActors);

	ANPC* ClosestEnemy = nullptr;
	float ClosestDistSq = DetectionRadius * DetectionRadius;

	for (AActor* Actor : FoundActors)
	{
		ANPC* Enemy = Cast<ANPC>(Actor);
		if (!Enemy) continue;

		float DistSq = FVector::DistSquared(Enemy->GetActorLocation(), PlayerLocation);
		if (DistSq <= ClosestDistSq)
		{
			// Check if player is behind enemy using Dot Product
			FVector NPCForward = Enemy->GetActorForwardVector();
			FVector EnemyToPlayer = (PlayerLocation - Enemy->GetActorLocation()).GetSafeNormal();
			float DotProduct = FVector::DotProduct(NPCForward, EnemyToPlayer);

			// LOGGING
			UE_LOG(LogTemp, Warning, TEXT("🧭 Enemy: %s"), *Enemy->GetName());
			UE_LOG(LogTemp, Warning, TEXT("Enemy Location: %s"), *Enemy->GetActorLocation().ToString());
			UE_LOG(LogTemp, Warning, TEXT("Enemy Forward Vector: %s"), *NPCForward.ToString());
			UE_LOG(LogTemp, Warning, TEXT("EnemyToPlayer Vector: %s"), *EnemyToPlayer.ToString());
			UE_LOG(LogTemp, Warning, TEXT("🎯 Dot Product (Behind Check): %f"), DotProduct);

			// Draw enemy forward for reference
			DrawDebugLine(
				GetWorld(),
				Enemy->GetActorLocation(),
				Enemy->GetActorLocation() + NPCForward * 200,
				FColor::Red, false, 2.0f, 0, 2.0f
			);

			// This now works correctly
			if (DotProduct < -0.5f)
			{
				UE_LOG(LogTemp, Warning, TEXT("✅ Player is behind the enemy and within range: %s"), *Enemy->GetName());
				ClosestEnemy = Enemy;
				ClosestDistSq = DistSq;
			}

		}
	}

	if (!ClosestEnemy)
	{
		UE_LOG(LogTemp, Warning, TEXT("TryDefuseEnemy: No enemy found behind player in range"));
		return;
	}

	// Attempt to defuse the enemy
	ANPC_AIController* EnemyController = Cast<ANPC_AIController>(ClosestEnemy->GetController());
	if (!EnemyController)
	{
		UE_LOG(LogTemp, Warning, TEXT("TryDefuseEnemy: EnemyController is NULL"));
		return;
	}

	bool bCanDefuse = EnemyController->CanDefuseEnemy(PlayerCharacter);
	UE_LOG(LogTemp, Warning, TEXT("TryDefuseEnemy: CanDefuseEnemy returned %s"), bCanDefuse ? TEXT("true") : TEXT("false"));

	if (bCanDefuse)
	{
		EnemyController->DefuseEnemy();
		UE_LOG(LogTemp, Warning, TEXT("TryDefuseEnemy: Enemy successfully defused"));
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("💥 Enemy DEFUSED haha lmao!"));

		if (DefuseSoundCue && PlayerCharacter && PlayerCharacter->GetWorld())
		{
			FVector DefuseLocation = EnemyController->GetPawn()->GetActorLocation(); 
			UGameplayStatics::PlaySoundAtLocation(PlayerCharacter->GetWorld(), DefuseSoundCue, DefuseLocation);
		}

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TryDefuseEnemy: Conditions failed — cannot defuse"));
	}
}


