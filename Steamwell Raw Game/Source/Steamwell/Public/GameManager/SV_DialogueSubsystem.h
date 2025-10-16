// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/DataTable.h"
#include "Engine/StreamableManager.h"
#include "Data/SV_DialogueEntry.h"

#include "SV_DialogueSubsystem.generated.h"

/**
 * 
 */
DECLARE_DELEGATE_TwoParams(FOnDialogueTextUpdatedSignature, FText /* UpdatedText */, float /* SoundDuration */);

UCLASS()
class STEAMWELL_API USV_DialogueSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()


		
public:
	UFUNCTION(BlueprintCallable)
		void PlayDialogue(FName DialogueKey);

	FOnDialogueTextUpdatedSignature OnDialogueTextUpdatedDelegate;
	

protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

private: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue", meta = (AllowPrivateAccess = "true"))
		class UDataTable* DialogueTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue", meta = (AllowPrivateAccess = "true"))
		class USV_DialogueWidget* DialogueWidget;

	void OnDataAssetLoaded(FSV_DialogueEntry* DataEntry);

	UAudioComponent* CurrentlyPlayingSound;
};



