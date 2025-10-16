// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/SV_PressurePlateManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PressurePlateManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PressurePlate_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PressurePlateManager();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PressurePlateManager_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PushableObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(ASV_PressurePlateManager::execCheckPlates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckPlates();
		P_NATIVE_END;
	}
	static FName NAME_ASV_PressurePlateManager_PlatesComplete = FName(TEXT("PlatesComplete"));
	void ASV_PressurePlateManager::PlatesComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASV_PressurePlateManager_PlatesComplete),NULL);
	}
	static FName NAME_ASV_PressurePlateManager_PlatesPreRejected = FName(TEXT("PlatesPreRejected"));
	void ASV_PressurePlateManager::PlatesPreRejected()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASV_PressurePlateManager_PlatesPreRejected),NULL);
	}
	static FName NAME_ASV_PressurePlateManager_PlatesRejected = FName(TEXT("PlatesRejected"));
	void ASV_PressurePlateManager::PlatesRejected()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASV_PressurePlateManager_PlatesRejected),NULL);
	}
	void ASV_PressurePlateManager::StaticRegisterNativesASV_PressurePlateManager()
	{
		UClass* Class = ASV_PressurePlateManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckPlates", &ASV_PressurePlateManager::execCheckPlates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASV_PressurePlateManager_CheckPlates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PressurePlateManager_CheckPlates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PressurePlateManager_CheckPlates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PressurePlateManager, nullptr, "CheckPlates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PressurePlateManager_CheckPlates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlateManager_CheckPlates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PressurePlateManager_CheckPlates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PressurePlateManager_CheckPlates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PressurePlateManager_PlatesComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PressurePlateManager_PlatesComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PressurePlateManager_PlatesComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PressurePlateManager, nullptr, "PlatesComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PressurePlateManager_PlatesComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlateManager_PlatesComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PressurePlateManager_PlatesComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PressurePlateManager_PlatesComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PressurePlateManager_PlatesPreRejected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PressurePlateManager_PlatesPreRejected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PressurePlateManager_PlatesPreRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PressurePlateManager, nullptr, "PlatesPreRejected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PressurePlateManager_PlatesPreRejected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlateManager_PlatesPreRejected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PressurePlateManager_PlatesPreRejected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PressurePlateManager_PlatesPreRejected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PressurePlateManager_PlatesRejected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PressurePlateManager_PlatesRejected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PressurePlateManager_PlatesRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PressurePlateManager, nullptr, "PlatesRejected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PressurePlateManager_PlatesRejected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlateManager_PlatesRejected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PressurePlateManager_PlatesRejected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PressurePlateManager_PlatesRejected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PressurePlateManager);
	UClass* Z_Construct_UClass_ASV_PressurePlateManager_NoRegister()
	{
		return ASV_PressurePlateManager::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PressurePlateManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepPlates_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DepPlates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isPattern_MetaData[];
#endif
		static void NewProp_isPattern_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatternComplete_MetaData[];
#endif
		static void NewProp_PatternComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PatternComplete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatternPlates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatternPlates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatternPlates;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatternPipes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatternPipes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatternPipes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PressurePlateManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASV_PressurePlateManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASV_PressurePlateManager_CheckPlates, "CheckPlates" }, // 871796368
		{ &Z_Construct_UFunction_ASV_PressurePlateManager_PlatesComplete, "PlatesComplete" }, // 2232920365
		{ &Z_Construct_UFunction_ASV_PressurePlateManager_PlatesPreRejected, "PlatesPreRejected" }, // 920012711
		{ &Z_Construct_UFunction_ASV_PressurePlateManager_PlatesRejected, "PlatesRejected" }, // 279017384
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlateManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Forward declaration\n" },
		{ "IncludePath", "SV_PressurePlateManager.h" },
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
		{ "ToolTip", "Forward declaration" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_DepPlates_MetaData[] = {
		{ "Category", "SV_PressurePlateManager" },
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_DepPlates = { "DepPlates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PressurePlateManager, DepPlates), METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_DepPlates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_DepPlates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_isPattern_MetaData[] = {
		{ "Category", "SV_PressurePlateManager" },
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
	};
#endif
	void Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_isPattern_SetBit(void* Obj)
	{
		((ASV_PressurePlateManager*)Obj)->isPattern = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_isPattern = { "isPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASV_PressurePlateManager), &Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_isPattern_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_isPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_isPattern_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternComplete_MetaData[] = {
		{ "Category", "SV_PressurePlateManager" },
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
	};
#endif
	void Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternComplete_SetBit(void* Obj)
	{
		((ASV_PressurePlateManager*)Obj)->PatternComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternComplete = { "PatternComplete", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASV_PressurePlateManager), &Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternComplete_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPlates_Inner = { "PatternPlates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ASV_PressurePlate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPlates_MetaData[] = {
		{ "Category", "SV_PressurePlateManager" },
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPlates = { "PatternPlates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PressurePlateManager, PatternPlates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPlates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPlates_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPipes_Inner = { "PatternPipes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ASV_PushableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPipes_MetaData[] = {
		{ "Category", "SV_PressurePlateManager" },
		{ "ModuleRelativePath", "Public/SV_PressurePlateManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPipes = { "PatternPipes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PressurePlateManager, PatternPipes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPipes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPipes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_PressurePlateManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_DepPlates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_isPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPlates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPlates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPipes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlateManager_Statics::NewProp_PatternPipes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PressurePlateManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PressurePlateManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PressurePlateManager_Statics::ClassParams = {
		&ASV_PressurePlateManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASV_PressurePlateManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlateManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlateManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlateManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PressurePlateManager()
	{
		if (!Z_Registration_Info_UClass_ASV_PressurePlateManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PressurePlateManager.OuterSingleton, Z_Construct_UClass_ASV_PressurePlateManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PressurePlateManager.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PressurePlateManager>()
	{
		return ASV_PressurePlateManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PressurePlateManager);
	ASV_PressurePlateManager::~ASV_PressurePlateManager() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlateManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlateManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PressurePlateManager, ASV_PressurePlateManager::StaticClass, TEXT("ASV_PressurePlateManager"), &Z_Registration_Info_UClass_ASV_PressurePlateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PressurePlateManager), 2034226976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlateManager_h_546859657(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlateManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
