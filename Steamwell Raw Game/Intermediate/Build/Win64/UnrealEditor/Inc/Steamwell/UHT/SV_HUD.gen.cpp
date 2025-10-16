// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/UI/SV_HUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_HUD() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PlayerController_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_DialogueWidget_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_HUD();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_HUD_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventorySlot_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_ListItem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_HUD::StaticRegisterNativesUSV_HUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_HUD);
	UClass* Z_Construct_UClass_USV_HUD_NoRegister()
	{
		return USV_HUD::StaticClass();
	}
	struct Z_Construct_UClass_USV_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryArray;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryOutlineArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOutlineArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryOutlineArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItem1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryItem1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItem2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryItem2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItem3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryItem3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItem4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryItem4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOutline1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryOutline1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOutline2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryOutline2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOutline3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryOutline3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryOutline4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryOutline4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DialogueText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListItemClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ListItemClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/SV_HUD.h" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryArray_Inner = { "InventoryArray", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USV_InventorySlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryArray = { "InventoryArray", nullptr, (EPropertyFlags)0x004000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryArray_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutlineArray_Inner = { "InventoryOutlineArray", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutlineArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutlineArray = { "InventoryOutlineArray", nullptr, (EPropertyFlags)0x004000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryOutlineArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutlineArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutlineArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem1 = { "InventoryItem1", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryItem1), Z_Construct_UClass_USV_InventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem2 = { "InventoryItem2", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryItem2), Z_Construct_UClass_USV_InventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem3 = { "InventoryItem3", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryItem3), Z_Construct_UClass_USV_InventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem4 = { "InventoryItem4", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryItem4), Z_Construct_UClass_USV_InventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline1 = { "InventoryOutline1", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryOutline1), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline2 = { "InventoryOutline2", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryOutline2), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline3 = { "InventoryOutline3", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryOutline3), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline4 = { "InventoryOutline4", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, InventoryOutline4), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_DialogueText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, DialogueText), Z_Construct_UClass_USV_DialogueWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_DialogueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_DialogueText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SV_HUD" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0045000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, PlayerController), Z_Construct_UClass_ASV_PlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_HUD_Statics::NewProp_ListItemClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SV_HUD" },
		{ "ModuleRelativePath", "Public/UI/SV_HUD.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USV_HUD_Statics::NewProp_ListItemClass = { "ListItemClass", nullptr, (EPropertyFlags)0x0044000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_HUD, ListItemClass), Z_Construct_UClass_USV_ListItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::NewProp_ListItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::NewProp_ListItemClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USV_HUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutlineArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutlineArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryItem4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_InventoryOutline4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_DialogueText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_HUD_Statics::NewProp_ListItemClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_HUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_HUD_Statics::ClassParams = {
		&USV_HUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USV_HUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_HUD()
	{
		if (!Z_Registration_Info_UClass_USV_HUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_HUD.OuterSingleton, Z_Construct_UClass_USV_HUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_HUD.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_HUD>()
	{
		return USV_HUD::StaticClass();
	}
	USV_HUD::USV_HUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_HUD);
	USV_HUD::~USV_HUD() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_HUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_HUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_HUD, USV_HUD::StaticClass, TEXT("USV_HUD"), &Z_Registration_Info_UClass_USV_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_HUD), 4039871379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_HUD_h_3346508626(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_HUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
