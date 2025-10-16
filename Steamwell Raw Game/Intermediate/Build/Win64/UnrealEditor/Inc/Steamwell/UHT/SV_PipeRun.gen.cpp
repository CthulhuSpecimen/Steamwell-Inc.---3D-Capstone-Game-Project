// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/SV_PipeRun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PipeRun() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_InteractableBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PipeRun();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PipeRun_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PressurePlateManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_PipeRun::StaticRegisterNativesASV_PipeRun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PipeRun);
	UClass* Z_Construct_UClass_ASV_PipeRun_NoRegister()
	{
		return ASV_PipeRun::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PipeRun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PPManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PPManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PipeRun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_InteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeRun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SV_PipeRun.h" },
		{ "ModuleRelativePath", "Public/Items/SV_PipeRun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_PPManager_MetaData[] = {
		{ "Category", "SV_PipeRun" },
		{ "ModuleRelativePath", "Public/Items/SV_PipeRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_PPManager = { "PPManager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PipeRun, PPManager), Z_Construct_UClass_ASV_PressurePlateManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_PPManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_PPManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "SV_PipeRun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SV_PipeRun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PipeRun, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_BodyMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_PipeRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_PPManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PipeRun_Statics::NewProp_BodyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PipeRun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PipeRun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PipeRun_Statics::ClassParams = {
		&ASV_PipeRun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASV_PipeRun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeRun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_PipeRun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeRun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PipeRun()
	{
		if (!Z_Registration_Info_UClass_ASV_PipeRun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PipeRun.OuterSingleton, Z_Construct_UClass_ASV_PipeRun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PipeRun.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PipeRun>()
	{
		return ASV_PipeRun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PipeRun);
	ASV_PipeRun::~ASV_PipeRun() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeRun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeRun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PipeRun, ASV_PipeRun::StaticClass, TEXT("ASV_PipeRun"), &Z_Registration_Info_UClass_ASV_PipeRun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PipeRun), 3131321544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeRun_h_388283991(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeRun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeRun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
