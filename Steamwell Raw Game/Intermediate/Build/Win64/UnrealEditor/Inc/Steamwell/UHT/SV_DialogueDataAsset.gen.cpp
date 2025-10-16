// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Data/SV_DialogueDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_DialogueDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_DialogueDataAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_DialogueDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_DialogueDataAsset::StaticRegisterNativesUSV_DialogueDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_DialogueDataAsset);
	UClass* Z_Construct_UClass_USV_DialogueDataAsset_NoRegister()
	{
		return USV_DialogueDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USV_DialogueDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceLine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_DialogueDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_DialogueDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/SV_DialogueDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/SV_DialogueDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_DialogueDataAsset_Statics::NewProp_VoiceLine_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Data/SV_DialogueDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USV_DialogueDataAsset_Statics::NewProp_VoiceLine = { "VoiceLine", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_DialogueDataAsset, VoiceLine), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_DialogueDataAsset_Statics::NewProp_VoiceLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueDataAsset_Statics::NewProp_VoiceLine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USV_DialogueDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_DialogueDataAsset_Statics::NewProp_VoiceLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_DialogueDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_DialogueDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_DialogueDataAsset_Statics::ClassParams = {
		&USV_DialogueDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USV_DialogueDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_DialogueDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_DialogueDataAsset()
	{
		if (!Z_Registration_Info_UClass_USV_DialogueDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_DialogueDataAsset.OuterSingleton, Z_Construct_UClass_USV_DialogueDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_DialogueDataAsset.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_DialogueDataAsset>()
	{
		return USV_DialogueDataAsset::StaticClass();
	}
	USV_DialogueDataAsset::USV_DialogueDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_DialogueDataAsset);
	USV_DialogueDataAsset::~USV_DialogueDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_DialogueDataAsset, USV_DialogueDataAsset::StaticClass, TEXT("USV_DialogueDataAsset"), &Z_Registration_Info_UClass_USV_DialogueDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_DialogueDataAsset), 1406421831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueDataAsset_h_3928399709(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
