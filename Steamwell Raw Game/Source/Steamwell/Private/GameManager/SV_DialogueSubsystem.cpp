// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/SV_DialogueSubsystem.h"

#include "UI/Dialogue/SV_DialogueWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Kismet/GameplayStatics.h"
#include "GameManager/SV_AssetManager.h"
#include "Components/AudioComponent.h"


void USV_DialogueSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	DialogueTable = LoadObject<UDataTable>(nullptr, TEXT("/Game/Data/Dialogue/DialogueDT.DialogueDT"));
	DialogueWidget = CreateWidget<USV_DialogueWidget>(GetWorld(), USV_DialogueWidget::StaticClass());
	const FString WidgetName = FString::Printf(TEXT("DialogueText")); // initializes DialogueText
	DialogueWidget->DialogueText = DialogueWidget->WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), FName(WidgetName));
	
}

void USV_DialogueSubsystem::PlayDialogue(FName DialogueKey)
{
	FSV_DialogueEntry* DialogueEntry = DialogueTable->FindRow<FSV_DialogueEntry>(DialogueKey, FString(TEXT("Log")));
	if (DialogueEntry)
	{
		

		// Play Sound
		FSoftObjectPath DataAssetPath = DialogueEntry->DialogueDataAsset.ToSoftObjectPath();
		FStreamableManager& AssetLoader = USV_AssetManager::GetStreamableManager(); // maybe only call this once?
		TSharedPtr<FStreamableHandle> Handle = AssetLoader.RequestAsyncLoad(DataAssetPath, FStreamableDelegate::CreateUObject(this, &USV_DialogueSubsystem::OnDataAssetLoaded, DialogueEntry));
		/*if (Handle.IsValid() && Handle->HasLoadCompleted())
		{
			USV_DialogueDataAsset* DataAsset = DialogueEntry->DialogueDataAsset.Get();
			
			// FSoftObjectPath VoiceLinePath = DataAsset->VoiceLine.ToSoftObjectPath();
			// Handle = AssetLoader.RequestAsyncLoad(VoiceLinePath);
			// USoundCue* VoiceLine = DataAsset->VoiceLine.Get();
			
		}*/
		
		// UGameplayStatics::PlaySound2D(GetWorld(), VoiceLine.Get());
		/*DialogueWidget->SetDialogueText(DialogueEntry->DialogueText);
		const FString WidgetName = FString::Printf(TEXT("DialogueText"));
		if (UWidget* test = DialogueWidget->WidgetTree->FindWidget(FName(WidgetName)))
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Widget Added in WidgetTree"));
			}
		}
		DialogueWidget->AddToViewport();*/
		

		
	}
}

void USV_DialogueSubsystem::OnDataAssetLoaded(FSV_DialogueEntry* DialogueEntry)
{
	USV_DialogueDataAsset* DataAsset = DialogueEntry->DialogueDataAsset.Get();
	if (CurrentlyPlayingSound && CurrentlyPlayingSound->IsActive())
	{
		CurrentlyPlayingSound->Stop(); // Interrupts a dialogue line
	}
	if (DataAsset)
	{
		if (DataAsset->VoiceLine)
		{
			CurrentlyPlayingSound = UGameplayStatics::SpawnSound2D(GetWorld(), DataAsset->VoiceLine, 6.0);
			OnDialogueTextUpdatedDelegate.Execute(DialogueEntry->DialogueText, DataAsset->VoiceLine->GetDuration() + 3);
		}
		
	}
	
}