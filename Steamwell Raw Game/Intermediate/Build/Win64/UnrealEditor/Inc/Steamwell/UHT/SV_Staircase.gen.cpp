// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/Podium/SV_Staircase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_Staircase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_Podium_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_Staircase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_Staircase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	static FName NAME_ASV_Staircase_PodiumBroadcast = FName(TEXT("PodiumBroadcast"));
	void ASV_Staircase::PodiumBroadcast()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASV_Staircase_PodiumBroadcast),NULL);
	}
	void ASV_Staircase::StaticRegisterNativesASV_Staircase()
	{
	}
	struct Z_Construct_UFunction_ASV_Staircase_PodiumBroadcast_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_Staircase_PodiumBroadcast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Podium/SV_Staircase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_Staircase_PodiumBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_Staircase, nullptr, "PodiumBroadcast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_Staircase_PodiumBroadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_Staircase_PodiumBroadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_Staircase_PodiumBroadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_Staircase_PodiumBroadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_Staircase);
	UClass* Z_Construct_UClass_ASV_Staircase_NoRegister()
	{
		return ASV_Staircase::StaticClass();
	}
	struct Z_Construct_UClass_ASV_Staircase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Podium_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Podium;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_Staircase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASV_Staircase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASV_Staircase_PodiumBroadcast, "PodiumBroadcast" }, // 2066733376
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_Staircase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Podium/SV_Staircase.h" },
		{ "ModuleRelativePath", "Public/Items/Podium/SV_Staircase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_Staircase_Statics::NewProp_Podium_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SV_Staircase" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Items/Podium/SV_Staircase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASV_Staircase_Statics::NewProp_Podium = { "Podium", nullptr, (EPropertyFlags)0x0045000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_Staircase, Podium), Z_Construct_UClass_ASV_Podium_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_Staircase_Statics::NewProp_Podium_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Staircase_Statics::NewProp_Podium_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_Staircase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_Staircase_Statics::NewProp_Podium,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_Staircase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_Staircase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_Staircase_Statics::ClassParams = {
		&ASV_Staircase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASV_Staircase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Staircase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_Staircase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_Staircase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_Staircase()
	{
		if (!Z_Registration_Info_UClass_ASV_Staircase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_Staircase.OuterSingleton, Z_Construct_UClass_ASV_Staircase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_Staircase.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_Staircase>()
	{
		return ASV_Staircase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_Staircase);
	ASV_Staircase::~ASV_Staircase() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Staircase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Staircase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_Staircase, ASV_Staircase::StaticClass, TEXT("ASV_Staircase"), &Z_Registration_Info_UClass_ASV_Staircase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_Staircase), 4055460322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Staircase_h_1444288546(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Staircase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Podium_SV_Staircase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
