// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/Pickups/SV_PaperBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PaperBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_ManualPickup();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PaperBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PaperBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_PaperBase::StaticRegisterNativesASV_PaperBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PaperBase);
	UClass* Z_Construct_UClass_ASV_PaperBase_NoRegister()
	{
		return ASV_PaperBase::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PaperBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontSide_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackSide_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PaperBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_ManualPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PaperBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/Pickups/SV_PaperBase.h" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_PaperBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_FrontSide_MetaData[] = {
		{ "Category", "Sides" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_PaperBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_FrontSide = { "FrontSide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PaperBase, FrontSide), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_FrontSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_FrontSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_BackSide_MetaData[] = {
		{ "Category", "Sides" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_PaperBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_BackSide = { "BackSide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PaperBase, BackSide), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_BackSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_BackSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SV_PaperBase" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_PaperBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PaperBase, Key), METADATA_PARAMS(Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_PaperBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_FrontSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_BackSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PaperBase_Statics::NewProp_Key,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PaperBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PaperBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PaperBase_Statics::ClassParams = {
		&ASV_PaperBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASV_PaperBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PaperBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_PaperBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PaperBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PaperBase()
	{
		if (!Z_Registration_Info_UClass_ASV_PaperBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PaperBase.OuterSingleton, Z_Construct_UClass_ASV_PaperBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PaperBase.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PaperBase>()
	{
		return ASV_PaperBase::StaticClass();
	}
	ASV_PaperBase::ASV_PaperBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PaperBase);
	ASV_PaperBase::~ASV_PaperBase() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PaperBase, ASV_PaperBase::StaticClass, TEXT("ASV_PaperBase"), &Z_Registration_Info_UClass_ASV_PaperBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PaperBase), 1414314254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBase_h_3861454834(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
