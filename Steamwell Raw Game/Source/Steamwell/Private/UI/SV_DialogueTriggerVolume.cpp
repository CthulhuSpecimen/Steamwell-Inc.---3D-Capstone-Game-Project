// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/SV_DialogueTriggerVolume.h"
#include "Components/BoxComponent.h"
#include "GameManager/SV_DialogueSubsystem.h"
#include "Player/SV_PlayerCharacter.h"



// Sets default values for this component's properties
USV_DialogueTriggerVolume::USV_DialogueTriggerVolume()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	
	DialogueTriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Volume"));
	DialogueTriggerVolume->SetupAttachment(this);
	DialogueTriggerVolume->SetGenerateOverlapEvents(true);
	DialogueTriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &USV_DialogueTriggerVolume::OnComponentBeginOverlap);
	
	// ...
}

void USV_DialogueTriggerVolume::OnRegister()
{
	Super::OnRegister();

	if (IsValid(this->DialogueTriggerVolume) && IsValid(this->GetAttachmentRoot()))
	{
		this->DialogueTriggerVolume->AttachToComponent(
			this->GetAttachmentRoot(),
			FAttachmentTransformRules::KeepRelativeTransform
		);
	}
}


// Called when the game starts
void USV_DialogueTriggerVolume::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Not calling this currently
void USV_DialogueTriggerVolume::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void USV_DialogueTriggerVolume::OnComponentBeginOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (UGameInstance* GameInstance = GetWorld()->GetGameInstance())
	{
		if (USV_DialogueSubsystem* DialogueSubsystem = GameInstance->GetSubsystem<USV_DialogueSubsystem>())
		{
			if (bHasNotBeenPlayed) // Right now only plays once
			{
				if (ASV_PlayerCharacter* PlayerCharacter = Cast<ASV_PlayerCharacter>(OtherActor)) 
				{
					DialogueSubsystem->PlayDialogue(DialogueKey);
					bHasNotBeenPlayed = false;
				}
			}
			
		}
	}
	
	
}
