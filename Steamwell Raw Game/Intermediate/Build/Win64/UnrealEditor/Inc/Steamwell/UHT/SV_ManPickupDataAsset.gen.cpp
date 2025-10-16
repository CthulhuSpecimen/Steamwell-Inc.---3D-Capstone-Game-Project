// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/SV_ManPickupDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_ManPickupDataAsset() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_ManPickupDataAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_ManPickupDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_ManPickupDataAsset::StaticRegisterNativesUSV_ManPickupDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_ManPickupDataAsset);
	UClass* Z_Construct_UClass_USV_ManPickupDataAsset_NoRegister()
	{
		return USV_ManPickupDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USV_ManPickupDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_ManPickupDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USV_InventoryItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_ManPickupDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SV_ManPickupDataAsset.h" },
		{ "ModuleRelativePath", "Public/Items/SV_ManPickupDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_ManPickupDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_ManPickupDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_ManPickupDataAsset_Statics::ClassParams = {
		&USV_ManPickupDataAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USV_ManPickupDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_ManPickupDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_ManPickupDataAsset()
	{
		if (!Z_Registration_Info_UClass_USV_ManPickupDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_ManPickupDataAsset.OuterSingleton, Z_Construct_UClass_USV_ManPickupDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_ManPickupDataAsset.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_ManPickupDataAsset>()
	{
		return USV_ManPickupDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_ManPickupDataAsset);
	USV_ManPickupDataAsset::~USV_ManPickupDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManPickupDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManPickupDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_ManPickupDataAsset, USV_ManPickupDataAsset::StaticClass, TEXT("USV_ManPickupDataAsset"), &Z_Registration_Info_UClass_USV_ManPickupDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_ManPickupDataAsset), 700937312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManPickupDataAsset_h_1406667254(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManPickupDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_ManPickupDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
