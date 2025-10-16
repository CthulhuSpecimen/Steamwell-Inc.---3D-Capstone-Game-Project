// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/Podium/SV_Podium.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_Podium() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_InteractableBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_Podium();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_Podium_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_GearPickupAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_Podium::StaticRegisterNativesASV_Podium()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_Podium);
	UClass* Z_Construct_UClass_ASV_Podium_NoRegister()
	{
		return ASV_Podium::StaticClass();
	}
	struct Z_Construct_UClass_ASV_Podium_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredItemType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequiredItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PodiumActivateSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PodiumActivateSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_Podium_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_InteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_Podium_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/Podium/SV_Podium.h" },
		{ "ModuleRelativePath", "Public/Items/Podium/SV_Podium.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_Podium_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "SV_Podium" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Podium/SV_Podium.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_Podium_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_Podium, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_Podium_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Podium_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_Podium_Statics::NewProp_RequiredItemType_MetaData[] = {
		{ "Category", "SV_Podium" },
		{ "ModuleRelativePath", "Public/Items/Podium/SV_Podium.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_Podium_Statics::NewProp_RequiredItemType = { "RequiredItemType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_Podium, RequiredItemType), Z_Construct_UClass_USV_GearPickupAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_Podium_Statics::NewProp_RequiredItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Podium_Statics::NewProp_RequiredItemType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_Podium_Statics::NewProp_PodiumActivateSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Items/Podium/SV_Podium.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_Podium_Statics::NewProp_PodiumActivateSound = { "PodiumActivateSound", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_Podium, PodiumActivateSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_Podium_Statics::NewProp_PodiumActivateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Podium_Statics::NewProp_PodiumActivateSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_Podium_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_Podium_Statics::NewProp_BodyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_Podium_Statics::NewProp_RequiredItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_Podium_Statics::NewProp_PodiumActivateSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_Podium_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_Podium>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_Podium_Statics::ClassParams = {
		&ASV_Podium::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASV_Podium_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Podium_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_Podium_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Podium_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_Podium()
	{
		if (!Z_Registration_Info_UClass_ASV_Podium.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_Podium.OuterSingleton, Z_Construct_UClass_ASV_Podium_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_Podium.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_Podium>()
	{
		return ASV_Podium::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_Podium);
	ASV_Podium::~ASV_Podium() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Podium_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Podium_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_Podium, ASV_Podium::StaticClass, TEXT("ASV_Podium"), &Z_Registration_Info_UClass_ASV_Podium, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_Podium), 2893344060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Podium_h_107990784(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Podium_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Podium_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
