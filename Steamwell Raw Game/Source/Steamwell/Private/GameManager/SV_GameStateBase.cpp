// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager/SV_GameStateBase.h"

ASV_GameStateBase::ASV_GameStateBase()
{
    
}


UDataTable* ASV_GameStateBase::GetItemDB() const
{
    
    return ItemDB;
}