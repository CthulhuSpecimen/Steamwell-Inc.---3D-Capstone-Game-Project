// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/SV_InventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_InventoryItem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset_NoRegister();
	STEAMWELL_API UFunction* Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature();
	STEAMWELL_API UFunction* Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature();
	STEAMWELL_API UScriptStruct* Z_Construct_UScriptStruct_FSV_InventoryItem();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References

static_assert(std::is_polymorphic<FSV_InventoryItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSV_InventoryItem cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SV_InventoryItem;
class UScriptStruct* FSV_InventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SV_InventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SV_InventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSV_InventoryItem, (UObject*)Z_Construct_UPackage__Script_Steamwell(), TEXT("SV_InventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_SV_InventoryItem.OuterSingleton;
}
template<> STEAMWELL_API UScriptStruct* StaticStruct<FSV_InventoryItem>()
{
	return FSV_InventoryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSV_InventoryItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// class USV_InventoryItemAsset; // TODO: read more on how forward declaration works\n" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItem.h" },
		{ "ToolTip", "class USV_InventoryItemAsset;  TODO: read more on how forward declaration works" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSV_InventoryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemCount_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSV_InventoryItem, ItemCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemLevel_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemLevel = { "ItemLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSV_InventoryItem, ItemLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewProp_ItemLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SV_InventoryItem",
		sizeof(FSV_InventoryItem),
		alignof(FSV_InventoryItem),
		Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSV_InventoryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_SV_InventoryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SV_InventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SV_InventoryItem.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics
	{
		struct _Script_Steamwell_eventOnInventoryItemChanged_Parms
		{
			bool bAdded;
			USV_InventoryItemAsset* Item;
		};
		static void NewProp_bAdded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdded;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_bAdded_SetBit(void* Obj)
	{
		((_Script_Steamwell_eventOnInventoryItemChanged_Parms*)Obj)->bAdded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_bAdded = { "bAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Steamwell_eventOnInventoryItemChanged_Parms), &Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_bAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Steamwell_eventOnInventoryItemChanged_Parms, Item), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_bAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Delegate called when an item in the inventory changes */" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItem.h" },
		{ "ToolTip", "Delegate called when an item in the inventory changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Steamwell, nullptr, "OnInventoryItemChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::_Script_Steamwell_eventOnInventoryItemChanged_Parms), Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInventoryItemChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryItemChanged, bool bAdded, USV_InventoryItemAsset* Item)
{
	struct _Script_Steamwell_eventOnInventoryItemChanged_Parms
	{
		bool bAdded;
		USV_InventoryItemAsset* Item;
	};
	_Script_Steamwell_eventOnInventoryItemChanged_Parms Parms;
	Parms.bAdded=bAdded ? true : false;
	Parms.Item=Item;
	OnInventoryItemChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Delegate called when the entire inventory has been loaded */" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItem.h" },
		{ "ToolTip", "Delegate called when the entire inventory has been loaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Steamwell, nullptr, "OnInventoryLoaded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInventoryLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryLoaded)
{
	OnInventoryLoaded.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItem_h_Statics::ScriptStructInfo[] = {
		{ FSV_InventoryItem::StaticStruct, Z_Construct_UScriptStruct_FSV_InventoryItem_Statics::NewStructOps, TEXT("SV_InventoryItem"), &Z_Registration_Info_UScriptStruct_SV_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSV_InventoryItem), 1258769010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItem_h_1208200715(TEXT("/Script/Steamwell"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
