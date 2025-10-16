// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/Pickups/SV_PaperBaseDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PaperBaseDataAsset() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_PaperBaseDataAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_PaperBaseDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(USV_PaperBaseDataAsset::execGetIsSlotActiveArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetIsSlotActiveArray();
		P_NATIVE_END;
	}
	void USV_PaperBaseDataAsset::StaticRegisterNativesUSV_PaperBaseDataAsset()
	{
		UClass* Class = USV_PaperBaseDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsSlotActiveArray", &USV_PaperBaseDataAsset::execGetIsSlotActiveArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics
	{
		struct SV_PaperBaseDataAsset_eventGetIsSlotActiveArray_Parms
		{
			TArray<bool> ReturnValue;
		};
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PaperBaseDataAsset_eventGetIsSlotActiveArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_PaperBaseDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_PaperBaseDataAsset, nullptr, "GetIsSlotActiveArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::SV_PaperBaseDataAsset_eventGetIsSlotActiveArray_Parms), Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_PaperBaseDataAsset);
	UClass* Z_Construct_UClass_USV_PaperBaseDataAsset_NoRegister()
	{
		return USV_PaperBaseDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USV_PaperBaseDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_PaperBaseDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USV_InventoryItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USV_PaperBaseDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USV_PaperBaseDataAsset_GetIsSlotActiveArray, "GetIsSlotActiveArray" }, // 1393693494
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_PaperBaseDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/Pickups/SV_PaperBaseDataAsset.h" },
		{ "ModuleRelativePath", "Public/Items/Pickups/SV_PaperBaseDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_PaperBaseDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_PaperBaseDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_PaperBaseDataAsset_Statics::ClassParams = {
		&USV_PaperBaseDataAsset::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_PaperBaseDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_PaperBaseDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_PaperBaseDataAsset()
	{
		if (!Z_Registration_Info_UClass_USV_PaperBaseDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_PaperBaseDataAsset.OuterSingleton, Z_Construct_UClass_USV_PaperBaseDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_PaperBaseDataAsset.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_PaperBaseDataAsset>()
	{
		return USV_PaperBaseDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_PaperBaseDataAsset);
	USV_PaperBaseDataAsset::~USV_PaperBaseDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBaseDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBaseDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_PaperBaseDataAsset, USV_PaperBaseDataAsset::StaticClass, TEXT("USV_PaperBaseDataAsset"), &Z_Registration_Info_UClass_USV_PaperBaseDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_PaperBaseDataAsset), 3608699764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBaseDataAsset_h_1192321842(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBaseDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_Pickups_SV_PaperBaseDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
