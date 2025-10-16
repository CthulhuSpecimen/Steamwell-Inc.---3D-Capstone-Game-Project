// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/GameManager/SV_GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_GameModeBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_GameModeBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_GameModeBase_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(ASV_GameModeBase::execDefuseBombBaby)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DefuseBombBaby(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASV_GameModeBase::execActivateBombBaby)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateBombBaby(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASV_GameModeBase::execOnItemLoaded)
	{
		P_GET_OBJECT(USV_InventoryItemAsset,Z_Param_ItemToDrop);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemLoaded(Z_Param_ItemToDrop,Z_Param_SpawnLocation);
		P_NATIVE_END;
	}
	void ASV_GameModeBase::StaticRegisterNativesASV_GameModeBase()
	{
		UClass* Class = ASV_GameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateBombBaby", &ASV_GameModeBase::execActivateBombBaby },
			{ "DefuseBombBaby", &ASV_GameModeBase::execDefuseBombBaby },
			{ "OnItemLoaded", &ASV_GameModeBase::execOnItemLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics
	{
		struct SV_GameModeBase_eventActivateBombBaby_Parms
		{
			int32 ID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_GameModeBase_eventActivateBombBaby_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/SV_GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_GameModeBase, nullptr, "ActivateBombBaby", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::SV_GameModeBase_eventActivateBombBaby_Parms), Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics
	{
		struct SV_GameModeBase_eventDefuseBombBaby_Parms
		{
			int32 ID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_GameModeBase_eventDefuseBombBaby_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/SV_GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_GameModeBase, nullptr, "DefuseBombBaby", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::SV_GameModeBase_eventDefuseBombBaby_Parms), Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics
	{
		struct SV_GameModeBase_eventOnItemLoaded_Parms
		{
			USV_InventoryItemAsset* ItemToDrop;
			FVector SpawnLocation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToDrop;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::NewProp_ItemToDrop = { "ItemToDrop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_GameModeBase_eventOnItemLoaded_Parms, ItemToDrop), Z_Construct_UClass_USV_InventoryItemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_GameModeBase_eventOnItemLoaded_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::NewProp_ItemToDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::NewProp_SpawnLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/SV_GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_GameModeBase, nullptr, "OnItemLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::SV_GameModeBase_eventOnItemLoaded_Parms), Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_GameModeBase);
	UClass* Z_Construct_UClass_ASV_GameModeBase_NoRegister()
	{
		return ASV_GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASV_GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintImageMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintImageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintImageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BlueprintImageMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoteImageMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NoteImageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoteImageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NoteImageMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASV_GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASV_GameModeBase_ActivateBombBaby, "ActivateBombBaby" }, // 2254622297
		{ &Z_Construct_UFunction_ASV_GameModeBase_DefuseBombBaby, "DefuseBombBaby" }, // 3461453213
		{ &Z_Construct_UFunction_ASV_GameModeBase_OnItemLoaded, "OnItemLoaded" }, // 548921913
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameManager/SV_GameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameManager/SV_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_BlueprintImageMap_ValueProp = { "BlueprintImageMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_BlueprintImageMap_Key_KeyProp = { "BlueprintImageMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_BlueprintImageMap_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/GameManager/SV_GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_BlueprintImageMap = { "BlueprintImageMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_GameModeBase, BlueprintImageMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_BlueprintImageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_BlueprintImageMap_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_NoteImageMap_ValueProp = { "NoteImageMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_NoteImageMap_Key_KeyProp = { "NoteImageMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_NoteImageMap_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/GameManager/SV_GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_NoteImageMap = { "NoteImageMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_GameModeBase, NoteImageMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_NoteImageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_NoteImageMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_GameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_BlueprintImageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_BlueprintImageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_BlueprintImageMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_NoteImageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_NoteImageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_GameModeBase_Statics::NewProp_NoteImageMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_GameModeBase_Statics::ClassParams = {
		&ASV_GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASV_GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASV_GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASV_GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_GameModeBase.OuterSingleton, Z_Construct_UClass_ASV_GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_GameModeBase.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_GameModeBase>()
	{
		return ASV_GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_GameModeBase);
	ASV_GameModeBase::~ASV_GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_GameModeBase, ASV_GameModeBase::StaticClass, TEXT("ASV_GameModeBase"), &Z_Registration_Info_UClass_ASV_GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_GameModeBase), 2056438137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameModeBase_h_2210300468(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
