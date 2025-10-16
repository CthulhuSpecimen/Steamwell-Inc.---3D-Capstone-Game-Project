// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/GameManager/SV_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_GameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_GameInstance();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_GameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(USV_GameInstance::execLoadGame)
	{
		P_GET_OBJECT(AActor,Z_Param_PlayerActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame(Z_Param_PlayerActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USV_GameInstance::execSaveGame)
	{
		P_GET_OBJECT(AActor,Z_Param_PlayerActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame(Z_Param_PlayerActor);
		P_NATIVE_END;
	}
	void USV_GameInstance::StaticRegisterNativesUSV_GameInstance()
	{
		UClass* Class = USV_GameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGame", &USV_GameInstance::execLoadGame },
			{ "SaveGame", &USV_GameInstance::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics
	{
		struct SV_GameInstance_eventLoadGame_Parms
		{
			AActor* PlayerActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_GameInstance_eventLoadGame_Parms, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::NewProp_PlayerActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "Comment", "// Load the game state\n" },
		{ "ModuleRelativePath", "Public/GameManager/SV_GameInstance.h" },
		{ "ToolTip", "Load the game state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_GameInstance, nullptr, "LoadGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::SV_GameInstance_eventLoadGame_Parms), Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_GameInstance_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_GameInstance_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics
	{
		struct SV_GameInstance_eventSaveGame_Parms
		{
			AActor* PlayerActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_GameInstance_eventSaveGame_Parms, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::NewProp_PlayerActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveSystem" },
		{ "Comment", "// Save the game state\n" },
		{ "ModuleRelativePath", "Public/GameManager/SV_GameInstance.h" },
		{ "ToolTip", "Save the game state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_GameInstance, nullptr, "SaveGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::SV_GameInstance_eventSaveGame_Parms), Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_GameInstance_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_GameInstance_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_GameInstance);
	UClass* Z_Construct_UClass_USV_GameInstance_NoRegister()
	{
		return USV_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USV_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USV_GameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USV_GameInstance_LoadGame, "LoadGame" }, // 4082937000
		{ &Z_Construct_UFunction_USV_GameInstance_SaveGame, "SaveGame" }, // 2810730712
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameManager/SV_GameInstance.h" },
		{ "ModuleRelativePath", "Public/GameManager/SV_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_GameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_GameInstance_Statics::ClassParams = {
		&USV_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USV_GameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_GameInstance()
	{
		if (!Z_Registration_Info_UClass_USV_GameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_GameInstance.OuterSingleton, Z_Construct_UClass_USV_GameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_GameInstance.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_GameInstance>()
	{
		return USV_GameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_GameInstance);
	USV_GameInstance::~USV_GameInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_GameInstance, USV_GameInstance::StaticClass, TEXT("USV_GameInstance"), &Z_Registration_Info_UClass_USV_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_GameInstance), 3939846453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_3409316874(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
