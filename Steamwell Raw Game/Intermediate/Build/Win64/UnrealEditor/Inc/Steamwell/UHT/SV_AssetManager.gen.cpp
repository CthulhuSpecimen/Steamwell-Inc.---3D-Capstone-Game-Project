// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/GameManager/SV_AssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_AssetManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_AssetManager();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_AssetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_AssetManager::StaticRegisterNativesUSV_AssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_AssetManager);
	UClass* Z_Construct_UClass_USV_AssetManager_NoRegister()
	{
		return USV_AssetManager::StaticClass();
	}
	struct Z_Construct_UClass_USV_AssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_AssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_AssetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager/SV_AssetManager.h" },
		{ "ModuleRelativePath", "Public/GameManager/SV_AssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_AssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_AssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_AssetManager_Statics::ClassParams = {
		&USV_AssetManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USV_AssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_AssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_AssetManager()
	{
		if (!Z_Registration_Info_UClass_USV_AssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_AssetManager.OuterSingleton, Z_Construct_UClass_USV_AssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_AssetManager.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_AssetManager>()
	{
		return USV_AssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_AssetManager);
	USV_AssetManager::~USV_AssetManager() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_AssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_AssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_AssetManager, USV_AssetManager::StaticClass, TEXT("USV_AssetManager"), &Z_Registration_Info_UClass_USV_AssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_AssetManager), 3431871486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_AssetManager_h_3193405726(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_AssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_AssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
