// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/GameManager/SV_DialogueSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_DialogueSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_DialogueSubsystem();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_DialogueSubsystem_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_DialogueWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(USV_DialogueSubsystem::execPlayDialogue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_DialogueKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDialogue(Z_Param_DialogueKey);
		P_NATIVE_END;
	}
	void USV_DialogueSubsystem::StaticRegisterNativesUSV_DialogueSubsystem()
	{
		UClass* Class = USV_DialogueSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayDialogue", &USV_DialogueSubsystem::execPlayDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics
	{
		struct SV_DialogueSubsystem_eventPlayDialogue_Parms
		{
			FName DialogueKey;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::NewProp_DialogueKey = { "DialogueKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_DialogueSubsystem_eventPlayDialogue_Parms, DialogueKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::NewProp_DialogueKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManager/SV_DialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_DialogueSubsystem, nullptr, "PlayDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::SV_DialogueSubsystem_eventPlayDialogue_Parms), Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_DialogueSubsystem);
	UClass* Z_Construct_UClass_USV_DialogueSubsystem_NoRegister()
	{
		return USV_DialogueSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USV_DialogueSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_DialogueSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USV_DialogueSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USV_DialogueSubsystem_PlayDialogue, "PlayDialogue" }, // 2886875771
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_DialogueSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager/SV_DialogueSubsystem.h" },
		{ "ModuleRelativePath", "Public/GameManager/SV_DialogueSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/GameManager/SV_DialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueTable = { "DialogueTable", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_DialogueSubsystem, DialogueTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameManager/SV_DialogueSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueWidget = { "DialogueWidget", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_DialogueSubsystem, DialogueWidget), Z_Construct_UClass_USV_DialogueWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USV_DialogueSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_DialogueSubsystem_Statics::NewProp_DialogueWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_DialogueSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_DialogueSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_DialogueSubsystem_Statics::ClassParams = {
		&USV_DialogueSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USV_DialogueSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_DialogueSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_DialogueSubsystem()
	{
		if (!Z_Registration_Info_UClass_USV_DialogueSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_DialogueSubsystem.OuterSingleton, Z_Construct_UClass_USV_DialogueSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_DialogueSubsystem.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_DialogueSubsystem>()
	{
		return USV_DialogueSubsystem::StaticClass();
	}
	USV_DialogueSubsystem::USV_DialogueSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_DialogueSubsystem);
	USV_DialogueSubsystem::~USV_DialogueSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_DialogueSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_DialogueSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_DialogueSubsystem, USV_DialogueSubsystem::StaticClass, TEXT("USV_DialogueSubsystem"), &Z_Registration_Info_UClass_USV_DialogueSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_DialogueSubsystem), 2116850661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_DialogueSubsystem_h_1613249068(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_DialogueSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_DialogueSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
