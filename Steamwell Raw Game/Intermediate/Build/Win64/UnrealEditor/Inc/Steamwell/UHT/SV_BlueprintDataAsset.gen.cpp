// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/Pickups/SV_BlueprintDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_BlueprintDataAsset() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_USV_BlueprintDataAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_BlueprintDataAsset_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_PaperBaseDataAsset();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_BlueprintDataAsset::StaticRegisterNativesUSV_BlueprintDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_BlueprintDataAsset);
	UClass* Z_Construct_UClass_USV_BlueprintDataAsset_NoRegister()
	{
		return USV_BlueprintDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USV_BlueprintDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_BlueprintDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USV_PaperBaseDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_BlueprintDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/Pickups/SV_BlueprintDataAsset.h" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_BlueprintDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_BlueprintDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_BlueprintDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_BlueprintDataAsset_Statics::ClassParams = {
		&USV_BlueprintDataAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USV_BlueprintDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_BlueprintDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_BlueprintDataAsset()
	{
		if (!Z_Registration_Info_UClass_USV_BlueprintDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_BlueprintDataAsset.OuterSingleton, Z_Construct_UClass_USV_BlueprintDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_BlueprintDataAsset.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_BlueprintDataAsset>()
	{
		return USV_BlueprintDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_BlueprintDataAsset);
	USV_BlueprintDataAsset::~USV_BlueprintDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_BlueprintDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_BlueprintDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_BlueprintDataAsset, USV_BlueprintDataAsset::StaticClass, TEXT("USV_BlueprintDataAsset"), &Z_Registration_Info_UClass_USV_BlueprintDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_BlueprintDataAsset), 330084835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_BlueprintDataAsset_h_2722971528(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_BlueprintDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_BlueprintDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
