// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/SteamwellGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamwellGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASteamwellGameModeBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASteamwellGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASteamwellGameModeBase::StaticRegisterNativesASteamwellGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteamwellGameModeBase);
	UClass* Z_Construct_UClass_ASteamwellGameModeBase_NoRegister()
	{
		return ASteamwellGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASteamwellGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteamwellGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteamwellGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SteamwellGameModeBase.h" },
		{ "ModuleRelativePath", "SteamwellGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteamwellGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamwellGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteamwellGameModeBase_Statics::ClassParams = {
		&ASteamwellGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASteamwellGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASteamwellGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASteamwellGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASteamwellGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamwellGameModeBase.OuterSingleton, Z_Construct_UClass_ASteamwellGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASteamwellGameModeBase.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASteamwellGameModeBase>()
	{
		return ASteamwellGameModeBase::StaticClass();
	}
	ASteamwellGameModeBase::ASteamwellGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamwellGameModeBase);
	ASteamwellGameModeBase::~ASteamwellGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_SteamwellGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_SteamwellGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASteamwellGameModeBase, ASteamwellGameModeBase::StaticClass, TEXT("ASteamwellGameModeBase"), &Z_Registration_Info_UClass_ASteamwellGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamwellGameModeBase), 2997894379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_SteamwellGameModeBase_h_4206597174(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_SteamwellGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_SteamwellGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
