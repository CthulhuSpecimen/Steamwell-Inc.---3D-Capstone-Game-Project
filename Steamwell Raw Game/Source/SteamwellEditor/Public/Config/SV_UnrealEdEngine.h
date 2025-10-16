// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/UnrealEdEngine.h"
#include "SV_UnrealEdEngine.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELLEDITOR_API USV_UnrealEdEngine : public UUnrealEdEngine
{
	GENERATED_BODY()
	virtual void Init(IEngineLoop* InEngineLoop) override;
};
