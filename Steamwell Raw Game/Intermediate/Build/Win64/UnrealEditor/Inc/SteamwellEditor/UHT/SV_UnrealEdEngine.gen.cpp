// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Config/SV_UnrealEdEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_UnrealEdEngine() {}
// Cross Module References
	STEAMWELLEDITOR_API UClass* Z_Construct_UClass_USV_UnrealEdEngine();
	STEAMWELLEDITOR_API UClass* Z_Construct_UClass_USV_UnrealEdEngine_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
	UPackage* Z_Construct_UPackage__Script_SteamwellEditor();
// End Cross Module References
	void USV_UnrealEdEngine::StaticRegisterNativesUSV_UnrealEdEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_UnrealEdEngine);
	UClass* Z_Construct_UClass_USV_UnrealEdEngine_NoRegister()
	{
		return USV_UnrealEdEngine::StaticClass();
	}
	struct Z_Construct_UClass_USV_UnrealEdEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_UnrealEdEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnrealEdEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamwellEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_UnrealEdEngine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Config/SV_UnrealEdEngine.h" },
		{ "ModuleRelativePath", "Public/Config/SV_UnrealEdEngine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_UnrealEdEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_UnrealEdEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_UnrealEdEngine_Statics::ClassParams = {
		&USV_UnrealEdEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USV_UnrealEdEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_UnrealEdEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_UnrealEdEngine()
	{
		if (!Z_Registration_Info_UClass_USV_UnrealEdEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_UnrealEdEngine.OuterSingleton, Z_Construct_UClass_USV_UnrealEdEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_UnrealEdEngine.OuterSingleton;
	}
	template<> STEAMWELLEDITOR_API UClass* StaticClass<USV_UnrealEdEngine>()
	{
		return USV_UnrealEdEngine::StaticClass();
	}
	USV_UnrealEdEngine::USV_UnrealEdEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_UnrealEdEngine);
	USV_UnrealEdEngine::~USV_UnrealEdEngine() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_SteamwellEditor_Public_Config_SV_UnrealEdEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_SteamwellEditor_Public_Config_SV_UnrealEdEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_UnrealEdEngine, USV_UnrealEdEngine::StaticClass, TEXT("USV_UnrealEdEngine"), &Z_Registration_Info_UClass_USV_UnrealEdEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_UnrealEdEngine), 1638899854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_SteamwellEditor_Public_Config_SV_UnrealEdEngine_h_269699476(TEXT("/Script/SteamwellEditor"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_SteamwellEditor_Public_Config_SV_UnrealEdEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_SteamwellEditor_Public_Config_SV_UnrealEdEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
