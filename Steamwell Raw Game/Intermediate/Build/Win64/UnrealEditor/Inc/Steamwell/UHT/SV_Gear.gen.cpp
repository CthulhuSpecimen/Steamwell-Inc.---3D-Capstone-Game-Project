// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/SV_Gear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_Gear() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_Gear();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_Gear_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_ManualPickup();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_Gear::StaticRegisterNativesASV_Gear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_Gear);
	UClass* Z_Construct_UClass_ASV_Gear_NoRegister()
	{
		return ASV_Gear::StaticClass();
	}
	struct Z_Construct_UClass_ASV_Gear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_Gear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_ManualPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_Gear_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SV_Gear.h" },
		{ "ModuleRelativePath", "Public/Items/SV_Gear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_Gear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_Gear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_Gear_Statics::ClassParams = {
		&ASV_Gear::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASV_Gear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Gear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_Gear()
	{
		if (!Z_Registration_Info_UClass_ASV_Gear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_Gear.OuterSingleton, Z_Construct_UClass_ASV_Gear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_Gear.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_Gear>()
	{
		return ASV_Gear::StaticClass();
	}
	ASV_Gear::ASV_Gear() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_Gear);
	ASV_Gear::~ASV_Gear() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_Gear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_Gear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_Gear, ASV_Gear::StaticClass, TEXT("ASV_Gear"), &Z_Registration_Info_UClass_ASV_Gear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_Gear), 3056951937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_Gear_h_1380376992(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_Gear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_Gear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
