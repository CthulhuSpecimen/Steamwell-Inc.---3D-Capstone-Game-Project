// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/SV_ManualPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_ManualPickup() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_InteractableBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_ManualPickup();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_ManualPickup_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_ManualPickup::StaticRegisterNativesASV_ManualPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_ManualPickup);
	UClass* Z_Construct_UClass_ASV_ManualPickup_NoRegister()
	{
		return ASV_ManualPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASV_ManualPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_ManualPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_InteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_ManualPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SV_ManualPickup.h" },
		{ "ModuleRelativePath", "Public/Items/SV_ManualPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupType_MetaData[] = {
		{ "Category", "SV_ManualPickup" },
		{ "ModuleRelativePath", "Public/Items/SV_ManualPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupType = { "PickupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_ManualPickup, PickupType), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "SV_ManualPickup" },
		{ "ModuleRelativePath", "Public/Items/SV_ManualPickup.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_ManualPickup, ItemID), METADATA_PARAMS(Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "SV_ManualPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SV_ManualPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_ManualPickup, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "SV_ManualPickup" },
		{ "ModuleRelativePath", "Public/Items/SV_ManualPickup.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_ManualPickup, Count), METADATA_PARAMS(Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_ManualPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_PickupMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_ManualPickup_Statics::NewProp_Count,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_ManualPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_ManualPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_ManualPickup_Statics::ClassParams = {
		&ASV_ManualPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASV_ManualPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_ManualPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_ManualPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_ManualPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_ManualPickup()
	{
		if (!Z_Registration_Info_UClass_ASV_ManualPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_ManualPickup.OuterSingleton, Z_Construct_UClass_ASV_ManualPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_ManualPickup.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_ManualPickup>()
	{
		return ASV_ManualPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_ManualPickup);
	ASV_ManualPickup::~ASV_ManualPickup() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManualPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManualPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_ManualPickup, ASV_ManualPickup::StaticClass, TEXT("ASV_ManualPickup"), &Z_Registration_Info_UClass_ASV_ManualPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_ManualPickup), 2367270814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManualPickup_h_3848412062(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManualPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManualPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
