// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Data/SV_DialogueDataAsset.h"
#include "SV_DialogueEntry.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FSV_DialogueEntry : public FTableRowBase
{
	GENERATED_BODY()
public:
	FSV_DialogueEntry();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
		FText DialogueText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
		TSoftObjectPtr<USV_DialogueDataAsset> DialogueDataAsset;

};
