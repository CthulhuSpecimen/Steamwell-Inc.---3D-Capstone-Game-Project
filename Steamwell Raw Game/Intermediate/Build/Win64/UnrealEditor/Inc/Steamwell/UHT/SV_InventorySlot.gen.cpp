// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/UI/SV_InventorySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_InventorySlot() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventorySlot();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventorySlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(USV_InventorySlot::execDisplayPaper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayPaper();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USV_InventorySlot::execSetDefaultTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USV_InventorySlot::execSetItemTexture)
	{
		P_GET_OBJECT(USV_InventoryItemAsset,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemTexture(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USV_InventorySlot::execSetEquippedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquippedItem();
		P_NATIVE_END;
	}
	struct SV_InventorySlot_eventSetupPaperWidget_Parms
	{
		UTexture2D* Image;
	};
	static FName NAME_USV_InventorySlot_SetupPaperWidget = FName(TEXT("SetupPaperWidget"));
	void USV_InventorySlot::SetupPaperWidget(UTexture2D* Image)
	{
		SV_InventorySlot_eventSetupPaperWidget_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_USV_InventorySlot_SetupPaperWidget),&Parms);
	}
	void USV_InventorySlot::StaticRegisterNativesUSV_InventorySlot()
	{
		UClass* Class = USV_InventorySlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayPaper", &USV_InventorySlot::execDisplayPaper },
			{ "SetDefaultTexture", &USV_InventorySlot::execSetDefaultTexture },
			{ "SetEquippedItem", &USV_InventorySlot::execSetEquippedItem },
			{ "SetItemTexture", &USV_InventorySlot::execSetItemTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USV_InventorySlot_DisplayPaper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_InventorySlot_DisplayPaper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_InventorySlot_DisplayPaper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_InventorySlot, nullptr, "DisplayPaper", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_InventorySlot_DisplayPaper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventorySlot_DisplayPaper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_InventorySlot_DisplayPaper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_InventorySlot_DisplayPaper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USV_InventorySlot_SetDefaultTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_InventorySlot_SetDefaultTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_InventorySlot_SetDefaultTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_InventorySlot, nullptr, "SetDefaultTexture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_InventorySlot_SetDefaultTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventorySlot_SetDefaultTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_InventorySlot_SetDefaultTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_InventorySlot_SetDefaultTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USV_InventorySlot_SetEquippedItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_InventorySlot_SetEquippedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/*Tells the player the equip the represented item from this widget*/" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
		{ "ToolTip", "Tells the player the equip the represented item from this widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_InventorySlot_SetEquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_InventorySlot, nullptr, "SetEquippedItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_InventorySlot_SetEquippedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventorySlot_SetEquippedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_InventorySlot_SetEquippedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_InventorySlot_SetEquippedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics
	{
		struct SV_InventorySlot_eventSetItemTexture_Parms
		{
			USV_InventoryItemAsset* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_InventorySlot_eventSetItemTexture_Parms, Item), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/*Set item texture*/" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
		{ "ToolTip", "Set item texture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_InventorySlot, nullptr, "SetItemTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::SV_InventorySlot_eventSetItemTexture_Parms), Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_InventorySlot_SetItemTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_InventorySlot_SetItemTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_InventorySlot_eventSetupPaperWidget_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_InventorySlot, nullptr, "SetupPaperWidget", nullptr, nullptr, sizeof(SV_InventorySlot_eventSetupPaperWidget_Parms), Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_InventorySlot);
	UClass* Z_Construct_UClass_USV_InventorySlot_NoRegister()
	{
		return USV_InventorySlot::StaticClass();
	}
	struct Z_Construct_UClass_USV_InventorySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_InventorySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USV_InventorySlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USV_InventorySlot_DisplayPaper, "DisplayPaper" }, // 3017045306
		{ &Z_Construct_UFunction_USV_InventorySlot_SetDefaultTexture, "SetDefaultTexture" }, // 1860230010
		{ &Z_Construct_UFunction_USV_InventorySlot_SetEquippedItem, "SetEquippedItem" }, // 4062434658
		{ &Z_Construct_UFunction_USV_InventorySlot_SetItemTexture, "SetItemTexture" }, // 3178043972
		{ &Z_Construct_UFunction_USV_InventorySlot_SetupPaperWidget, "SetupPaperWidget" }, // 4284412510
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventorySlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/SV_InventorySlot.h" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventorySlot, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemAsset_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemAsset = { "ItemAsset", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventorySlot, ItemAsset), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventorySlot, Count), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_MainButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_InventorySlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_MainButton = { "MainButton", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventorySlot, MainButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_MainButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_MainButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_SlotID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/UI/SV_InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventorySlot, SlotID), METADATA_PARAMS(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_SlotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_SlotID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USV_InventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_ItemAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_MainButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventorySlot_Statics::NewProp_SlotID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_InventorySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_InventorySlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_InventorySlot_Statics::ClassParams = {
		&USV_InventorySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USV_InventorySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventorySlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_InventorySlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventorySlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_InventorySlot()
	{
		if (!Z_Registration_Info_UClass_USV_InventorySlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_InventorySlot.OuterSingleton, Z_Construct_UClass_USV_InventorySlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_InventorySlot.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_InventorySlot>()
	{
		return USV_InventorySlot::StaticClass();
	}
	USV_InventorySlot::USV_InventorySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_InventorySlot);
	USV_InventorySlot::~USV_InventorySlot() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_InventorySlot, USV_InventorySlot::StaticClass, TEXT("USV_InventorySlot"), &Z_Registration_Info_UClass_USV_InventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_InventorySlot), 1683780867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_2239761612(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
