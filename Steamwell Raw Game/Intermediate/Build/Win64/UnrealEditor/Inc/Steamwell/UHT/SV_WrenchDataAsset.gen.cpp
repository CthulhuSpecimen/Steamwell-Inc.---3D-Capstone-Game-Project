// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/Pickups/SV_WrenchDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_WrenchDataAsset() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_WrenchDataAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_WrenchDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_WrenchDataAsset::StaticRegisterNativesUSV_WrenchDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_WrenchDataAsset);
	UClass* Z_Construct_UClass_USV_WrenchDataAsset_NoRegister()
	{
		return USV_WrenchDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USV_WrenchDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_WrenchDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USV_InventoryItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_WrenchDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/Pickups/SV_WrenchDataAsset.h" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_WrenchDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_WrenchDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_WrenchDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_WrenchDataAsset_Statics::ClassParams = {
		&USV_WrenchDataAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USV_WrenchDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_WrenchDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_WrenchDataAsset()
	{
		if (!Z_Registration_Info_UClass_USV_WrenchDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_WrenchDataAsset.OuterSingleton, Z_Construct_UClass_USV_WrenchDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_WrenchDataAsset.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_WrenchDataAsset>()
	{
		return USV_WrenchDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_WrenchDataAsset);
	USV_WrenchDataAsset::~USV_WrenchDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_WrenchDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_WrenchDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_WrenchDataAsset, USV_WrenchDataAsset::StaticClass, TEXT("USV_WrenchDataAsset"), &Z_Registration_Info_UClass_USV_WrenchDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_WrenchDataAsset), 3810786154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_WrenchDataAsset_h_3683596898(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_WrenchDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_WrenchDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
