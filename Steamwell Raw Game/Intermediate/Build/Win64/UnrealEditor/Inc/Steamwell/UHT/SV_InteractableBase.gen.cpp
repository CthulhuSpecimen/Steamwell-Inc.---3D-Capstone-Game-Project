// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/SV_InteractableBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_InteractableBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_InteractableBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_InteractableBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(ASV_InteractableBase::execGetInteractText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetInteractText();
		P_NATIVE_END;
	}
	void ASV_InteractableBase::StaticRegisterNativesASV_InteractableBase()
	{
		UClass* Class = ASV_InteractableBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInteractText", &ASV_InteractableBase::execGetInteractText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics
	{
		struct SV_InteractableBase_eventGetInteractText_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_InteractableBase_eventGetInteractText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Items/SV_InteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_InteractableBase, nullptr, "GetInteractText", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::SV_InteractableBase_eventGetInteractText_Parms), Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_InteractableBase_GetInteractText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_InteractableBase_GetInteractText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_InteractableBase);
	UClass* Z_Construct_UClass_ASV_InteractableBase_NoRegister()
	{
		return ASV_InteractableBase::StaticClass();
	}
	struct Z_Construct_UClass_ASV_InteractableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_InteractableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASV_InteractableBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASV_InteractableBase_GetInteractText, "GetInteractText" }, // 87757992
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_InteractableBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/SV_InteractableBase.h" },
		{ "ModuleRelativePath", "Public/Items/SV_InteractableBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SV_InteractableBase" },
		{ "ModuleRelativePath", "Public/Items/SV_InteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_InteractableBase, Name), METADATA_PARAMS(Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "SV_InteractableBase" },
		{ "ModuleRelativePath", "Public/Items/SV_InteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_InteractableBase, Action), METADATA_PARAMS(Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Button_MetaData[] = {
		{ "Category", "SV_InteractableBase" },
		{ "ModuleRelativePath", "Public/Items/SV_InteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_InteractableBase, Button), METADATA_PARAMS(Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Button_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_InteractableBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_InteractableBase_Statics::NewProp_Button,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_InteractableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_InteractableBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_InteractableBase_Statics::ClassParams = {
		&ASV_InteractableBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASV_InteractableBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_InteractableBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_InteractableBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_InteractableBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_InteractableBase()
	{
		if (!Z_Registration_Info_UClass_ASV_InteractableBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_InteractableBase.OuterSingleton, Z_Construct_UClass_ASV_InteractableBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_InteractableBase.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_InteractableBase>()
	{
		return ASV_InteractableBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_InteractableBase);
	ASV_InteractableBase::~ASV_InteractableBase() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_InteractableBase, ASV_InteractableBase::StaticClass, TEXT("ASV_InteractableBase"), &Z_Registration_Info_UClass_ASV_InteractableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_InteractableBase), 3750401872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_3939592970(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
