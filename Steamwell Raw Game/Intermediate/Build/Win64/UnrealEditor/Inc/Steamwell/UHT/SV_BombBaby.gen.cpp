// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Enemies/SV_BombBaby.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_BombBaby() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_BombBaby();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_BombBaby_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	static FName NAME_ASV_BombBaby_OnDefuse = FName(TEXT("OnDefuse"));
	void ASV_BombBaby::OnDefuse()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASV_BombBaby_OnDefuse),NULL);
	}
	static FName NAME_ASV_BombBaby_OnExplode = FName(TEXT("OnExplode"));
	void ASV_BombBaby::OnExplode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASV_BombBaby_OnExplode),NULL);
	}
	void ASV_BombBaby::StaticRegisterNativesASV_BombBaby()
	{
	}
	struct Z_Construct_UFunction_ASV_BombBaby_OnDefuse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_BombBaby_OnDefuse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_BombBaby_OnDefuse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_BombBaby, nullptr, "OnDefuse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_BombBaby_OnDefuse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_BombBaby_OnDefuse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_BombBaby_OnDefuse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_BombBaby_OnDefuse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_BombBaby_OnExplode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_BombBaby_OnExplode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_BombBaby_OnExplode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_BombBaby, nullptr, "OnExplode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_BombBaby_OnExplode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_BombBaby_OnExplode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_BombBaby_OnExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_BombBaby_OnExplode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_BombBaby);
	UClass* Z_Construct_UClass_ASV_BombBaby_NoRegister()
	{
		return ASV_BombBaby::StaticClass();
	}
	struct Z_Construct_UClass_ASV_BombBaby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombBabyExplode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BombBabyExplode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombBabyComplete_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BombBabyComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombBabyTick_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BombBabyTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombBabyStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BombBabyStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeUntilExplosion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeUntilExplosion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplosionTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_BombBaby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASV_BombBaby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASV_BombBaby_OnDefuse, "OnDefuse" }, // 683429928
		{ &Z_Construct_UFunction_ASV_BombBaby_OnExplode, "OnExplode" }, // 3978528199
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_BombBaby_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemies/SV_BombBaby.h" },
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "SV_BombBaby" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_BombBaby, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyExplode_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyExplode = { "BombBabyExplode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_BombBaby, BombBabyExplode), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyExplode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyExplode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyComplete_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyComplete = { "BombBabyComplete", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_BombBaby, BombBabyComplete), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyComplete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyTick = { "BombBabyTick", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_BombBaby, BombBabyTick), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyStart_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyStart = { "BombBabyStart", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_BombBaby, BombBabyStart), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_Identifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SV_BombBaby" },
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_BombBaby, Identifier), METADATA_PARAMS(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_TimeUntilExplosion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SV_BombBaby" },
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_TimeUntilExplosion = { "TimeUntilExplosion", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_BombBaby, TimeUntilExplosion), METADATA_PARAMS(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_TimeUntilExplosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_TimeUntilExplosion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_ExplosionTimerHandle_MetaData[] = {
		{ "Category", "SV_BombBaby" },
		{ "ModuleRelativePath", "Public/Enemies/SV_BombBaby.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_ExplosionTimerHandle = { "ExplosionTimerHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_BombBaby, ExplosionTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_ExplosionTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_ExplosionTimerHandle_MetaData)) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_BombBaby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyExplode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_BombBabyStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_TimeUntilExplosion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_BombBaby_Statics::NewProp_ExplosionTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_BombBaby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_BombBaby>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_BombBaby_Statics::ClassParams = {
		&ASV_BombBaby::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASV_BombBaby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_BombBaby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_BombBaby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_BombBaby()
	{
		if (!Z_Registration_Info_UClass_ASV_BombBaby.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_BombBaby.OuterSingleton, Z_Construct_UClass_ASV_BombBaby_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_BombBaby.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_BombBaby>()
	{
		return ASV_BombBaby::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_BombBaby);
	ASV_BombBaby::~ASV_BombBaby() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Enemies_SV_BombBaby_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Enemies_SV_BombBaby_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_BombBaby, ASV_BombBaby::StaticClass, TEXT("ASV_BombBaby"), &Z_Registration_Info_UClass_ASV_BombBaby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_BombBaby), 1985372132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Enemies_SV_BombBaby_h_367052077(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Enemies_SV_BombBaby_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Enemies_SV_BombBaby_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
