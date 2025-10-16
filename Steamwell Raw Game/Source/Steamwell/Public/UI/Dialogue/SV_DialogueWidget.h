// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "SV_DialogueWidget.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API USV_DialogueWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue")
		void SetDialogueText(const FText &NewText, float SoundDuration);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = true))
		TObjectPtr<UTextBlock> DialogueText;
};

