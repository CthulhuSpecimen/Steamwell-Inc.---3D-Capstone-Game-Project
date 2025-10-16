// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/UI/SV_ListItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_ListItem() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_USV_ListItem();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_ListItem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_ListItem::StaticRegisterNativesUSV_ListItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_ListItem);
	UClass* Z_Construct_UClass_USV_ListItem_NoRegister()
	{
		return USV_ListItem::StaticClass();
	}
	struct Z_Construct_UClass_USV_ListItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_ListItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_ListItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/SV_ListItem.h" },
		{ "ModuleRelativePath", "Public/UI/SV_ListItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_ListItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_ListItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_ListItem, ItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_ListItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_ListItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_ListItem, ItemCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USV_ListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_ListItem_Statics::NewProp_ItemCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_ListItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_ListItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_ListItem_Statics::ClassParams = {
		&USV_ListItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USV_ListItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USV_ListItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_ListItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_ListItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_ListItem()
	{
		if (!Z_Registration_Info_UClass_USV_ListItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_ListItem.OuterSingleton, Z_Construct_UClass_USV_ListItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_ListItem.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_ListItem>()
	{
		return USV_ListItem::StaticClass();
	}
	USV_ListItem::USV_ListItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_ListItem);
	USV_ListItem::~USV_ListItem() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_ListItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_ListItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_ListItem, USV_ListItem::StaticClass, TEXT("USV_ListItem"), &Z_Registration_Info_UClass_USV_ListItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_ListItem), 2153820862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_ListItem_h_1163041291(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_ListItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_ListItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
