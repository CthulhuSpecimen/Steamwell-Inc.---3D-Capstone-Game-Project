// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/SV_PipeRotator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PipeRotator() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PipeRotator();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PipeRotator_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PressurePlate();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_PipeRotator::StaticRegisterNativesASV_PipeRotator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PipeRotator);
	UClass* Z_Construct_UClass_ASV_PipeRotator_NoRegister()
	{
		return ASV_PipeRotator::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PipeRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PipeRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_PressurePlate,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeRotator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SV_PipeRotator.h" },
		{ "ModuleRelativePath", "Public/SV_PipeRotator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PipeRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PipeRotator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PipeRotator_Statics::ClassParams = {
		&ASV_PipeRotator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASV_PipeRotator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeRotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PipeRotator()
	{
		if (!Z_Registration_Info_UClass_ASV_PipeRotator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PipeRotator.OuterSingleton, Z_Construct_UClass_ASV_PipeRotator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PipeRotator.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PipeRotator>()
	{
		return ASV_PipeRotator::StaticClass();
	}
	ASV_PipeRotator::ASV_PipeRotator() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PipeRotator);
	ASV_PipeRotator::~ASV_PipeRotator() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeRotator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeRotator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PipeRotator, ASV_PipeRotator::StaticClass, TEXT("ASV_PipeRotator"), &Z_Registration_Info_UClass_ASV_PipeRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PipeRotator), 653527380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeRotator_h_3693077488(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeRotator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
