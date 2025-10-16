// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/SV_PipeSpinActivate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PipeSpinActivate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_InteractableBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PipeSpin_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PipeSpinActivate();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PipeSpinActivate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_PipeSpinActivate::StaticRegisterNativesASV_PipeSpinActivate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PipeSpinActivate);
	UClass* Z_Construct_UClass_ASV_PipeSpinActivate_NoRegister()
	{
		return ASV_PipeSpinActivate::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PipeSpinActivate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipeSpinArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PipeSpinArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PipeSpinActivate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_InteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeSpinActivate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SV_PipeSpinActivate.h" },
		{ "ModuleRelativePath", "Public/Items/SV_PipeSpinActivate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_PipeSpinArea_MetaData[] = {
		{ "Category", "SV_PipeSpinActivate" },
		{ "ModuleRelativePath", "Public/Items/SV_PipeSpinActivate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_PipeSpinArea = { "PipeSpinArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PipeSpinActivate, PipeSpinArea), Z_Construct_UClass_ASV_PipeSpin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_PipeSpinArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_PipeSpinArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "SV_PipeSpinActivate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SV_PipeSpinActivate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PipeSpinActivate, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_BodyMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_PipeSpinActivate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_PipeSpinArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PipeSpinActivate_Statics::NewProp_BodyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PipeSpinActivate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PipeSpinActivate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PipeSpinActivate_Statics::ClassParams = {
		&ASV_PipeSpinActivate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASV_PipeSpinActivate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpinActivate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_PipeSpinActivate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpinActivate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PipeSpinActivate()
	{
		if (!Z_Registration_Info_UClass_ASV_PipeSpinActivate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PipeSpinActivate.OuterSingleton, Z_Construct_UClass_ASV_PipeSpinActivate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PipeSpinActivate.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PipeSpinActivate>()
	{
		return ASV_PipeSpinActivate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PipeSpinActivate);
	ASV_PipeSpinActivate::~ASV_PipeSpinActivate() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeSpinActivate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeSpinActivate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PipeSpinActivate, ASV_PipeSpinActivate::StaticClass, TEXT("ASV_PipeSpinActivate"), &Z_Registration_Info_UClass_ASV_PipeSpinActivate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PipeSpinActivate), 2708915125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeSpinActivate_h_3352986690(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeSpinActivate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_PipeSpinActivate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
