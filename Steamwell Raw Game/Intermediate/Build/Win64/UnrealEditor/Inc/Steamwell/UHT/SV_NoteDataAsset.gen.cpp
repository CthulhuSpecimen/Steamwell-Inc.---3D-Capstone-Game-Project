// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/Pickups/SV_NoteDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_NoteDataAsset() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_USV_NoteDataAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_NoteDataAsset_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_PaperBaseDataAsset();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_NoteDataAsset::StaticRegisterNativesUSV_NoteDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_NoteDataAsset);
	UClass* Z_Construct_UClass_USV_NoteDataAsset_NoRegister()
	{
		return USV_NoteDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USV_NoteDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_NoteDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USV_PaperBaseDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_NoteDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/Pickups/SV_NoteDataAsset.h" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_NoteDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_NoteDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_NoteDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_NoteDataAsset_Statics::ClassParams = {
		&USV_NoteDataAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USV_NoteDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_NoteDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_NoteDataAsset()
	{
		if (!Z_Registration_Info_UClass_USV_NoteDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_NoteDataAsset.OuterSingleton, Z_Construct_UClass_USV_NoteDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_NoteDataAsset.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_NoteDataAsset>()
	{
		return USV_NoteDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_NoteDataAsset);
	USV_NoteDataAsset::~USV_NoteDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_NoteDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_NoteDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_NoteDataAsset, USV_NoteDataAsset::StaticClass, TEXT("USV_NoteDataAsset"), &Z_Registration_Info_UClass_USV_NoteDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_NoteDataAsset), 1500655470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_NoteDataAsset_h_399663282(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_NoteDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_NoteDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
