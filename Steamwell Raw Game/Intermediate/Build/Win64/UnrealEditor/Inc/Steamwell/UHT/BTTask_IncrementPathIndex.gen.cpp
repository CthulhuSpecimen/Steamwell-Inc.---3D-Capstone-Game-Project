// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/AI/BTTask_IncrementPathIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_IncrementPathIndex() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	STEAMWELL_API UClass* Z_Construct_UClass_UBTTask_IncrementPathIndex();
	STEAMWELL_API UClass* Z_Construct_UClass_UBTTask_IncrementPathIndex_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void UBTTask_IncrementPathIndex::StaticRegisterNativesUBTTask_IncrementPathIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_IncrementPathIndex);
	UClass* Z_Construct_UClass_UBTTask_IncrementPathIndex_NoRegister()
	{
		return UBTTask_IncrementPathIndex::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBiDirectional_MetaData[];
#endif
		static void NewProp_bBiDirectional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBiDirectional;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_IncrementPathIndex.h" },
		{ "ModuleRelativePath", "Public/AI/BTTask_IncrementPathIndex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/BTTask_IncrementPathIndex.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional_SetBit(void* Obj)
	{
		((UBTTask_IncrementPathIndex*)Obj)->bBiDirectional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional = { "bBiDirectional", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBTTask_IncrementPathIndex), &Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_IncrementPathIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::ClassParams = {
		&UBTTask_IncrementPathIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_IncrementPathIndex()
	{
		if (!Z_Registration_Info_UClass_UBTTask_IncrementPathIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_IncrementPathIndex.OuterSingleton, Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_IncrementPathIndex.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<UBTTask_IncrementPathIndex>()
	{
		return UBTTask_IncrementPathIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_IncrementPathIndex);
	UBTTask_IncrementPathIndex::~UBTTask_IncrementPathIndex() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_IncrementPathIndex_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_IncrementPathIndex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_IncrementPathIndex, UBTTask_IncrementPathIndex::StaticClass, TEXT("UBTTask_IncrementPathIndex"), &Z_Registration_Info_UClass_UBTTask_IncrementPathIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_IncrementPathIndex), 573981829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_IncrementPathIndex_h_40847092(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_IncrementPathIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_IncrementPathIndex_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
