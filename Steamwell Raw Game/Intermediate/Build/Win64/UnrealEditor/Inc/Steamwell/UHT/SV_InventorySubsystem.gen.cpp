// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/GameManager/SV_InventorySubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_InventorySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventorySubsystem();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventorySubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_InventorySubsystem::StaticRegisterNativesUSV_InventorySubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_InventorySubsystem);
	UClass* Z_Construct_UClass_USV_InventorySubsystem_NoRegister()
	{
		return USV_InventorySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USV_InventorySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_InventorySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventorySubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameManager/SV_InventorySubsystem.h" },
		{ "ModuleRelativePath", "Public/GameManager/SV_InventorySubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_InventorySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_InventorySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_InventorySubsystem_Statics::ClassParams = {
		&USV_InventorySubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USV_InventorySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventorySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_InventorySubsystem()
	{
		if (!Z_Registration_Info_UClass_USV_InventorySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_InventorySubsystem.OuterSingleton, Z_Construct_UClass_USV_InventorySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_InventorySubsystem.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_InventorySubsystem>()
	{
		return USV_InventorySubsystem::StaticClass();
	}
	USV_InventorySubsystem::USV_InventorySubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_InventorySubsystem);
	USV_InventorySubsystem::~USV_InventorySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_InventorySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_InventorySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_InventorySubsystem, USV_InventorySubsystem::StaticClass, TEXT("USV_InventorySubsystem"), &Z_Registration_Info_UClass_USV_InventorySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_InventorySubsystem), 2886067432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_InventorySubsystem_h_3666220204(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_InventorySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_InventorySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
