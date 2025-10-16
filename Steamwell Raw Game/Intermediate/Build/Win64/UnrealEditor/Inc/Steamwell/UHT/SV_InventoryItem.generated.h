// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/SV_InventoryItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USV_InventoryItemAsset;
#ifdef STEAMWELL_SV_InventoryItem_generated_h
#error "SV_InventoryItem.generated.h already included, missing '#pragma once' in SV_InventoryItem.h"
#endif
#define STEAMWELL_SV_InventoryItem_generated_h

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItem_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSV_InventoryItem_Statics; \
	STEAMWELL_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> STEAMWELL_API UScriptStruct* StaticStruct<struct FSV_InventoryItem>();

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItem_h_84_DELEGATE \
STEAMWELL_API void FOnInventoryItemChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryItemChanged, bool bAdded, USV_InventoryItemAsset* Item);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItem_h_88_DELEGATE \
STEAMWELL_API void FOnInventoryLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryLoaded);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
