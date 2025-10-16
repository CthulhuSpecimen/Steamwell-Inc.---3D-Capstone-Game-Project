// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/Pickups/SV_GearPickupAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_GearPickupAsset() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_USV_GearPickupAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_GearPickupAsset_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_GearPickupAsset::StaticRegisterNativesUSV_GearPickupAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_GearPickupAsset);
	UClass* Z_Construct_UClass_USV_GearPickupAsset_NoRegister()
	{
		return USV_GearPickupAsset::StaticClass();
	}
	struct Z_Construct_UClass_USV_GearPickupAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_GearPickupAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USV_InventoryItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_GearPickupAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/Pickups/SV_GearPickupAsset.h" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_GearPickupAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_GearPickupAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_GearPickupAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_GearPickupAsset_Statics::ClassParams = {
		&USV_GearPickupAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_GearPickupAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_GearPickupAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_GearPickupAsset()
	{
		if (!Z_Registration_Info_UClass_USV_GearPickupAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_GearPickupAsset.OuterSingleton, Z_Construct_UClass_USV_GearPickupAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_GearPickupAsset.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_GearPickupAsset>()
	{
		return USV_GearPickupAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_GearPickupAsset);
	USV_GearPickupAsset::~USV_GearPickupAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_GearPickupAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_GearPickupAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_GearPickupAsset, USV_GearPickupAsset::StaticClass, TEXT("USV_GearPickupAsset"), &Z_Registration_Info_UClass_USV_GearPickupAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_GearPickupAsset), 3717461866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_GearPickupAsset_h_106523819(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_GearPickupAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_GearPickupAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
