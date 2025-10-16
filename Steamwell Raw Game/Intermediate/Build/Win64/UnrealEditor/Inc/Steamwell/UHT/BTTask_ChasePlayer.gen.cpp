// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/AI/BTTask_ChasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ChasePlayer() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_UBTTask_ChasePlayer();
	STEAMWELL_API UClass* Z_Construct_UClass_UBTTask_ChasePlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void UBTTask_ChasePlayer::StaticRegisterNativesUBTTask_ChasePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ChasePlayer);
	UClass* Z_Construct_UClass_UBTTask_ChasePlayer_NoRegister()
	{
		return UBTTask_ChasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ChasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BotAgro_Cue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BotAgro_Cue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ChasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_ChasePlayer.h" },
		{ "ModuleRelativePath", "Public/AI/BTTask_ChasePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ChasePlayer_Statics::NewProp_BotAgro_Cue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/AI/BTTask_ChasePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_ChasePlayer_Statics::NewProp_BotAgro_Cue = { "BotAgro_Cue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_ChasePlayer, BotAgro_Cue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::NewProp_BotAgro_Cue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::NewProp_BotAgro_Cue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_ChasePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_ChasePlayer_Statics::NewProp_BotAgro_Cue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ChasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChasePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ChasePlayer_Statics::ClassParams = {
		&UBTTask_ChasePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_ChasePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_ChasePlayer()
	{
		if (!Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton, Z_Construct_UClass_UBTTask_ChasePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<UBTTask_ChasePlayer>()
	{
		return UBTTask_ChasePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ChasePlayer);
	UBTTask_ChasePlayer::~UBTTask_ChasePlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_ChasePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_ChasePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChasePlayer, UBTTask_ChasePlayer::StaticClass, TEXT("UBTTask_ChasePlayer"), &Z_Registration_Info_UClass_UBTTask_ChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChasePlayer), 1311301677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_ChasePlayer_h_1080166138(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_ChasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_BTTask_ChasePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
