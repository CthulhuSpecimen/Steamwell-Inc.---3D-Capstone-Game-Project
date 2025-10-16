// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamwellEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FSteamwellEditorModule, SteamwellEditor);

DEFINE_LOG_CATEGORY(SteamwellEditor)

#define LOCTEXT_NAMESPACE "SteamwellEditor"

void FSteamwellEditorModule::StartupModule()
{
    UE_LOG(SteamwellEditor, Warning, TEXT("SteamwellEditor: Log Started"));
}

void FSteamwellEditorModule::ShutdownModule()
{
    UE_LOG(SteamwellEditor, Warning, TEXT("SteamwellEditor: Log Ended"));
}

#undef LOCTEXT_NAMESPACE
