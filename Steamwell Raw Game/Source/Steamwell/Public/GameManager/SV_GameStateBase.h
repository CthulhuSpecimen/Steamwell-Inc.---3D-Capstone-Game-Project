// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/GameStateBase.h"
#include "SV_GameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class STEAMWELL_API ASV_GameStateBase : public AGameStateBase
{
	GENERATED_BODY()

	ASV_GameStateBase();
public:
	UDataTable* GetItemDB() const;

protected:
	UPROPERTY(EditDefaultsOnly)
		class UDataTable* ItemDB;
};
