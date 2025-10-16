// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Player/SV_PlayerController.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "Steamwell/Public/Items/SV_InventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_InteractableBase_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PlayerController();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PlayerController_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryInterface_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_PaperBaseDataAsset_NoRegister();
	STEAMWELL_API UFunction* Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature();
	STEAMWELL_API UFunction* Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature();
	STEAMWELL_API UScriptStruct* Z_Construct_UScriptStruct_FSV_InventoryItem();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(ASV_PlayerController::execTryDefuseEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryDefuseEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASV_PlayerController::execResetInteractFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInteractFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASV_PlayerController::execGetInventoryItemData)
	{
		P_GET_OBJECT(USV_InventoryItemAsset,Z_Param_Item);
		P_GET_STRUCT_REF(FSV_InventoryItem,Z_Param_Out_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInventoryItemData(Z_Param_Item,Z_Param_Out_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASV_PlayerController::execGetInventoryItemCount)
	{
		P_GET_OBJECT(USV_InventoryItemAsset,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInventoryItemCount(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASV_PlayerController::execSetCurrentSelectedItem)
	{
		P_GET_OBJECT(USV_InventoryItemAsset,Z_Param_SelectedItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentSelectedItem(Z_Param_SelectedItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASV_PlayerController::execRemoveInventoryItem)
	{
		P_GET_OBJECT(USV_InventoryItemAsset,Z_Param_RemovedItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveInventoryItem(Z_Param_RemovedItem,Z_Param_RemoveCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASV_PlayerController::execAddInventoryItem)
	{
		P_GET_OBJECT(USV_InventoryItemAsset,Z_Param_NewItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddInventoryItem(Z_Param_NewItem,Z_Param_ItemCount,Z_Param_ItemLevel);
		P_NATIVE_END;
	}
	struct SV_PlayerController_eventInventoryItemChanged_Parms
	{
		bool bAdded;
		USV_InventoryItemAsset* Item;
	};
	struct SV_PlayerController_eventToggleSecondaryInventory_Parms
	{
		USV_PaperBaseDataAsset* PaperAsset;
	};
	static FName NAME_ASV_PlayerController_InventoryItemChanged = FName(TEXT("InventoryItemChanged"));
	void ASV_PlayerController::InventoryItemChanged(bool bAdded, USV_InventoryItemAsset* Item)
	{
		SV_PlayerController_eventInventoryItemChanged_Parms Parms;
		Parms.bAdded=bAdded ? true : false;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_ASV_PlayerController_InventoryItemChanged),&Parms);
	}
	static FName NAME_ASV_PlayerController_ReloadInventory = FName(TEXT("ReloadInventory"));
	void ASV_PlayerController::ReloadInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASV_PlayerController_ReloadInventory),NULL);
	}
	static FName NAME_ASV_PlayerController_ToggleSecondaryInventory = FName(TEXT("ToggleSecondaryInventory"));
	void ASV_PlayerController::ToggleSecondaryInventory(USV_PaperBaseDataAsset* PaperAsset)
	{
		SV_PlayerController_eventToggleSecondaryInventory_Parms Parms;
		Parms.PaperAsset=PaperAsset;
		ProcessEvent(FindFunctionChecked(NAME_ASV_PlayerController_ToggleSecondaryInventory),&Parms);
	}
	void ASV_PlayerController::StaticRegisterNativesASV_PlayerController()
	{
		UClass* Class = ASV_PlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInventoryItem", &ASV_PlayerController::execAddInventoryItem },
			{ "GetInventoryItemCount", &ASV_PlayerController::execGetInventoryItemCount },
			{ "GetInventoryItemData", &ASV_PlayerController::execGetInventoryItemData },
			{ "RemoveInventoryItem", &ASV_PlayerController::execRemoveInventoryItem },
			{ "ResetInteractFlag", &ASV_PlayerController::execResetInteractFlag },
			{ "SetCurrentSelectedItem", &ASV_PlayerController::execSetCurrentSelectedItem },
			{ "TryDefuseEnemy", &ASV_PlayerController::execTryDefuseEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics
	{
		struct SV_PlayerController_eventAddInventoryItem_Parms
		{
			USV_InventoryItemAsset* NewItem;
			int32 ItemCount;
			int32 ItemLevel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemLevel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventAddInventoryItem_Parms, NewItem), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventAddInventoryItem_Parms, ItemCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_ItemLevel = { "ItemLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventAddInventoryItem_Parms, ItemLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SV_PlayerController_eventAddInventoryItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SV_PlayerController_eventAddInventoryItem_Parms), &Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_NewItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_ItemCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_ItemLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_ItemCount", "1" },
		{ "CPP_Default_ItemLevel", "1" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "AddInventoryItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::SV_PlayerController_eventAddInventoryItem_Parms), Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics
	{
		struct SV_PlayerController_eventGetInventoryItemCount_Parms
		{
			const USV_InventoryItemAsset* Item;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventGetInventoryItemCount_Parms, Item), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::NewProp_Item_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventGetInventoryItemCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "GetInventoryItemCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::SV_PlayerController_eventGetInventoryItemCount_Parms), Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics
	{
		struct SV_PlayerController_eventGetInventoryItemData_Parms
		{
			const USV_InventoryItemAsset* Item;
			FSV_InventoryItem ItemData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventGetInventoryItemData_Parms, Item), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_Item_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventGetInventoryItemData_Parms, ItemData), Z_Construct_UScriptStruct_FSV_InventoryItem, METADATA_PARAMS(nullptr, 0) }; // 1258769010
	void Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SV_PlayerController_eventGetInventoryItemData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SV_PlayerController_eventGetInventoryItemData_Parms), &Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/* Return item data associated with item, false if not found*/" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
		{ "ToolTip", "Return item data associated with item, false if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "GetInventoryItemData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::SV_PlayerController_eventGetInventoryItemData_Parms), Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics
	{
		static void NewProp_bAdded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdded;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::NewProp_bAdded_SetBit(void* Obj)
	{
		((SV_PlayerController_eventInventoryItemChanged_Parms*)Obj)->bAdded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::NewProp_bAdded = { "bAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SV_PlayerController_eventInventoryItemChanged_Parms), &Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::NewProp_bAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventInventoryItemChanged_Parms, Item), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::NewProp_bAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/* Called after inventory changed and all delegates notified*/" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
		{ "ToolTip", "Called after inventory changed and all delegates notified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "InventoryItemChanged", nullptr, nullptr, sizeof(SV_PlayerController_eventInventoryItemChanged_Parms), Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerController_ReloadInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_ReloadInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_ReloadInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "ReloadInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_ReloadInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_ReloadInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_ReloadInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_ReloadInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics
	{
		struct SV_PlayerController_eventRemoveInventoryItem_Parms
		{
			USV_InventoryItemAsset* RemovedItem;
			int32 RemoveCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RemovedItem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoveCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::NewProp_RemovedItem = { "RemovedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventRemoveInventoryItem_Parms, RemovedItem), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::NewProp_RemoveCount = { "RemoveCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventRemoveInventoryItem_Parms, RemoveCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SV_PlayerController_eventRemoveInventoryItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SV_PlayerController_eventRemoveInventoryItem_Parms), &Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::NewProp_RemovedItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::NewProp_RemoveCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "CPP_Default_RemoveCount", "1" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "RemoveInventoryItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::SV_PlayerController_eventRemoveInventoryItem_Parms), Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerController_ResetInteractFlag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_ResetInteractFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_ResetInteractFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "ResetInteractFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_ResetInteractFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_ResetInteractFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_ResetInteractFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_ResetInteractFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics
	{
		struct SV_PlayerController_eventSetCurrentSelectedItem_Parms
		{
			USV_InventoryItemAsset* SelectedItem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventSetCurrentSelectedItem_Parms, SelectedItem), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::NewProp_SelectedItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "SetCurrentSelectedItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::SV_PlayerController_eventSetCurrentSelectedItem_Parms), Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::NewProp_PaperAsset = { "PaperAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerController_eventToggleSecondaryInventory_Parms, PaperAsset), Z_Construct_UClass_USV_PaperBaseDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::NewProp_PaperAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "ToggleSecondaryInventory", nullptr, nullptr, sizeof(SV_PlayerController_eventToggleSecondaryInventory_Parms), Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerController_TryDefuseEnemy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerController_TryDefuseEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerController_TryDefuseEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerController, nullptr, "TryDefuseEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerController_TryDefuseEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerController_TryDefuseEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerController_TryDefuseEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerController_TryDefuseEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PlayerController);
	UClass* Z_Construct_UClass_ASV_PlayerController_NoRegister()
	{
		return ASV_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryData_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InventoryData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryItemChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryItemChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryChangeSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryChangeSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DropCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefuseSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefuseSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearCt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GearCt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DropAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefuseAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefuseAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_Defuse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Defuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[];
#endif
		static void NewProp_bCanInteract_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDropItem_MetaData[];
#endif
		static void NewProp_bCanDropItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDropItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASV_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASV_PlayerController_AddInventoryItem, "AddInventoryItem" }, // 389226168
		{ &Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemCount, "GetInventoryItemCount" }, // 619915115
		{ &Z_Construct_UFunction_ASV_PlayerController_GetInventoryItemData, "GetInventoryItemData" }, // 2145978352
		{ &Z_Construct_UFunction_ASV_PlayerController_InventoryItemChanged, "InventoryItemChanged" }, // 2170268806
		{ &Z_Construct_UFunction_ASV_PlayerController_ReloadInventory, "ReloadInventory" }, // 2090218313
		{ &Z_Construct_UFunction_ASV_PlayerController_RemoveInventoryItem, "RemoveInventoryItem" }, // 2962212819
		{ &Z_Construct_UFunction_ASV_PlayerController_ResetInteractFlag, "ResetInteractFlag" }, // 3864355969
		{ &Z_Construct_UFunction_ASV_PlayerController_SetCurrentSelectedItem, "SetCurrentSelectedItem" }, // 3755736458
		{ &Z_Construct_UFunction_ASV_PlayerController_ToggleSecondaryInventory, "ToggleSecondaryInventory" }, // 1921005307
		{ &Z_Construct_UFunction_ASV_PlayerController_TryDefuseEnemy, "TryDefuseEnemy" }, // 2470913460
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/SV_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryData_ValueProp = { "InventoryData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSV_InventoryItem, METADATA_PARAMS(nullptr, 0) }; // 1258769010
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryData_Key_KeyProp = { "InventoryData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/************************************************\n    *                   Inventory\n     ************************************************/// Map to hold data for any item in the inventory (useful for UI and other info)\n" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
		{ "ToolTip", "Inventory\n**********************************************// Map to hold data for any item in the inventory (useful for UI and other info)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, InventoryData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryData_MetaData)) }; // 1258769010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryItemChanged_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryItemChanged = { "OnInventoryItemChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, OnInventoryItemChanged), Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryItemChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryItemChanged_MetaData)) }; // 2218950240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryLoaded_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryLoaded = { "OnInventoryLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, OnInventoryLoaded), Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryLoaded_MetaData)) }; // 1011357643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryChangeSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryChangeSoundCue = { "InventoryChangeSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, InventoryChangeSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryChangeSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryChangeSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropCue = { "DropCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, DropCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseSoundCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseSoundCue = { "DefuseSoundCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, DefuseSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "Category", "SV_PlayerController" },
		{ "Comment", "// LoadInventory()\n" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
		{ "ToolTip", "LoadInventory()" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, CurrentInteractable), Z_Construct_UClass_ASV_InteractableBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_CurrentInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_CurrentInteractable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_GearCt_MetaData[] = {
		{ "Category", "SV_PlayerController" },
		{ "Comment", "// stores reference to object\n" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
		{ "ToolTip", "stores reference to object" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_GearCt = { "GearCt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, GearCt), METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_GearCt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_GearCt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventorySlotLimit_MetaData[] = {
		{ "Category", "SV_PlayerController" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventorySlotLimit = { "InventorySlotLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, InventorySlotLimit), METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventorySlotLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventorySlotLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InteractAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InteractAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropAction = { "DropAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, DropAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_SelectAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_SelectAction = { "SelectAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, SelectAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_SelectAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_SelectAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseAction = { "DefuseAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, DefuseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_IA_Defuse_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_IA_Defuse = { "IA_Defuse", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, IA_Defuse), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_IA_Defuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_IA_Defuse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanInteract_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanInteract_SetBit(void* Obj)
	{
		((ASV_PlayerController*)Obj)->bCanInteract = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASV_PlayerController), &Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanInteract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanDropItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanDropItem_SetBit(void* Obj)
	{
		((ASV_PlayerController*)Obj)->bCanDropItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanDropItem = { "bCanDropItem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASV_PlayerController), &Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanDropItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanDropItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanDropItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_ClickTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SV_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_ClickTimerHandle = { "ClickTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerController, ClickTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_ClickTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_ClickTimerHandle_MetaData)) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryItemChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_OnInventoryLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventoryChangeSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_CurrentInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_GearCt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InventorySlotLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DropAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_SelectAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefuseAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_IA_Defuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_bCanDropItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerController_Statics::NewProp_ClickTimerHandle,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASV_PlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USV_InventoryInterface_NoRegister, (int32)VTABLE_OFFSET(ASV_PlayerController, ISV_InventoryInterface), false },  // 378965296
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PlayerController_Statics::ClassParams = {
		&ASV_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASV_PlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PlayerController()
	{
		if (!Z_Registration_Info_UClass_ASV_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PlayerController.OuterSingleton, Z_Construct_UClass_ASV_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PlayerController.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PlayerController>()
	{
		return ASV_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PlayerController);
	ASV_PlayerController::~ASV_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PlayerController, ASV_PlayerController::StaticClass, TEXT("ASV_PlayerController"), &Z_Registration_Info_UClass_ASV_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PlayerController), 1078897750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_1863260152(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
