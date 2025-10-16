// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/Pickups/SV_Note.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_Note() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_Note();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_Note_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PaperBase();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_Note::StaticRegisterNativesASV_Note()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_Note);
	UClass* Z_Construct_UClass_ASV_Note_NoRegister()
	{
		return ASV_Note::StaticClass();
	}
	struct Z_Construct_UClass_ASV_Note_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_Note_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_PaperBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_Note_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/Pickups/SV_Note.h" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_Note.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_Note_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_Note>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_Note_Statics::ClassParams = {
		&ASV_Note::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_Note_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Note_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_Note()
	{
		if (!Z_Registration_Info_UClass_ASV_Note.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_Note.OuterSingleton, Z_Construct_UClass_ASV_Note_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_Note.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_Note>()
	{
		return ASV_Note::StaticClass();
	}
	ASV_Note::ASV_Note() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_Note);
	ASV_Note::~ASV_Note() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_Note_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_Note_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_Note, ASV_Note::StaticClass, TEXT("ASV_Note"), &Z_Registration_Info_UClass_ASV_Note, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_Note), 1864490162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_Note_h_3754808916(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_Note_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_Note_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
