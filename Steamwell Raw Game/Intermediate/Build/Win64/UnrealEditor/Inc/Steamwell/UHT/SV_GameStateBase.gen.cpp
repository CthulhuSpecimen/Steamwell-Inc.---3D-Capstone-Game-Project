// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/GameManager/SV_GameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_GameStateBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_GameStateBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_GameStateBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_GameStateBase::StaticRegisterNativesASV_GameStateBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_GameStateBase);
	UClass* Z_Construct_UClass_ASV_GameStateBase_NoRegister()
	{
		return ASV_GameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ASV_GameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_GameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_GameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameManager/SV_GameStateBase.h" },
		{ "ModuleRelativePath", "Public/GameManager/SV_GameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_GameStateBase_Statics::NewProp_ItemDB_MetaData[] = {
		{ "Category", "SV_GameStateBase" },
		{ "ModuleRelativePath", "Public/GameManager/SV_GameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_GameStateBase_Statics::NewProp_ItemDB = { "ItemDB", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_GameStateBase, ItemDB), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_GameStateBase_Statics::NewProp_ItemDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_GameStateBase_Statics::NewProp_ItemDB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_GameStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_GameStateBase_Statics::NewProp_ItemDB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_GameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_GameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_GameStateBase_Statics::ClassParams = {
		&ASV_GameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASV_GameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_GameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_GameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_GameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_GameStateBase()
	{
		if (!Z_Registration_Info_UClass_ASV_GameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_GameStateBase.OuterSingleton, Z_Construct_UClass_ASV_GameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_GameStateBase.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_GameStateBase>()
	{
		return ASV_GameStateBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_GameStateBase);
	ASV_GameStateBase::~ASV_GameStateBase() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_GameStateBase, ASV_GameStateBase::StaticClass, TEXT("ASV_GameStateBase"), &Z_Registration_Info_UClass_ASV_GameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_GameStateBase), 1139695217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameStateBase_h_940112638(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
