// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/GameManager/BP_SaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_SaveGame() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	STEAMWELL_API UClass* Z_Construct_UClass_UBP_SaveGame();
	STEAMWELL_API UClass* Z_Construct_UClass_UBP_SaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void UBP_SaveGame::StaticRegisterNativesUBP_SaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBP_SaveGame);
	UClass* Z_Construct_UClass_UBP_SaveGame_NoRegister()
	{
		return UBP_SaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UBP_SaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPlayedBefore_MetaData[];
#endif
		static void NewProp_bHasPlayedBefore_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPlayedBefore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_SaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_SaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameManager/BP_SaveGame.h" },
		{ "ModuleRelativePath", "Public/GameManager/BP_SaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "SaveData" },
		{ "Comment", "// Player state\n" },
		{ "ModuleRelativePath", "Public/GameManager/BP_SaveGame.h" },
		{ "ToolTip", "Player state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBP_SaveGame, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_bHasPlayedBefore_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/GameManager/BP_SaveGame.h" },
	};
#endif
	void Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_bHasPlayedBefore_SetBit(void* Obj)
	{
		((UBP_SaveGame*)Obj)->bHasPlayedBefore = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_bHasPlayedBefore = { "bHasPlayedBefore", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBP_SaveGame), &Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_bHasPlayedBefore_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_bHasPlayedBefore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_bHasPlayedBefore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/GameManager/BP_SaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBP_SaveGame, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/GameManager/BP_SaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBP_SaveGame, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/GameManager/BP_SaveGame.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBP_SaveGame, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBP_SaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_bHasPlayedBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_PlayerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_SaveGame_Statics::NewProp_UserIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_SaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_SaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBP_SaveGame_Statics::ClassParams = {
		&UBP_SaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBP_SaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBP_SaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBP_SaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_SaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBP_SaveGame()
	{
		if (!Z_Registration_Info_UClass_UBP_SaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBP_SaveGame.OuterSingleton, Z_Construct_UClass_UBP_SaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBP_SaveGame.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<UBP_SaveGame>()
	{
		return UBP_SaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_SaveGame);
	UBP_SaveGame::~UBP_SaveGame() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_BP_SaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_BP_SaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBP_SaveGame, UBP_SaveGame::StaticClass, TEXT("UBP_SaveGame"), &Z_Registration_Info_UClass_UBP_SaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBP_SaveGame), 1396646854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_BP_SaveGame_h_2602103074(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_BP_SaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_BP_SaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
