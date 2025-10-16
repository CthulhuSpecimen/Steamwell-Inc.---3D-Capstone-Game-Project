// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/UI/SV_SecondaryInventoryLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_SecondaryInventoryLayout() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventorySlot_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_PaperBaseDataAsset_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_SecondaryInventoryLayout();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_SecondaryInventoryLayout_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(USV_SecondaryInventoryLayout::execGenerateInventorySlots)
	{
		P_GET_OBJECT(USV_PaperBaseDataAsset,Z_Param_DataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateInventorySlots(Z_Param_DataAsset);
		P_NATIVE_END;
	}
	void USV_SecondaryInventoryLayout::StaticRegisterNativesUSV_SecondaryInventoryLayout()
	{
		UClass* Class = USV_SecondaryInventoryLayout::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateInventorySlots", &USV_SecondaryInventoryLayout::execGenerateInventorySlots },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics
	{
		struct SV_SecondaryInventoryLayout_eventGenerateInventorySlots_Parms
		{
			USV_PaperBaseDataAsset* DataAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_SecondaryInventoryLayout_eventGenerateInventorySlots_Parms, DataAsset), Z_Construct_UClass_USV_PaperBaseDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::NewProp_DataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SV_SecondaryInventoryLayout.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_SecondaryInventoryLayout, nullptr, "GenerateInventorySlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::SV_SecondaryInventoryLayout_eventGenerateInventorySlots_Parms), Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_SecondaryInventoryLayout);
	UClass* Z_Construct_UClass_USV_SecondaryInventoryLayout_NoRegister()
	{
		return USV_SecondaryInventoryLayout::StaticClass();
	}
	struct Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventorySlotClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Grid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USV_SecondaryInventoryLayout_GenerateInventorySlots, "GenerateInventorySlots" }, // 395783680
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/SV_SecondaryInventoryLayout.h" },
		{ "ModuleRelativePath", "Public/UI/SV_SecondaryInventoryLayout.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_InventorySlotClass_MetaData[] = {
		{ "Category", "Secondary Inventory Layout" },
		{ "ModuleRelativePath", "Public/UI/SV_SecondaryInventoryLayout.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_InventorySlotClass = { "InventorySlotClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_SecondaryInventoryLayout, InventorySlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USV_InventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_InventorySlotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_InventorySlotClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_Grid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Secondary Inventory Layout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SV_SecondaryInventoryLayout.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x001400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_SecondaryInventoryLayout, Grid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_Grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_Grid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_InventorySlotClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::NewProp_Grid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_SecondaryInventoryLayout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::ClassParams = {
		&USV_SecondaryInventoryLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_SecondaryInventoryLayout()
	{
		if (!Z_Registration_Info_UClass_USV_SecondaryInventoryLayout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_SecondaryInventoryLayout.OuterSingleton, Z_Construct_UClass_USV_SecondaryInventoryLayout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_SecondaryInventoryLayout.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_SecondaryInventoryLayout>()
	{
		return USV_SecondaryInventoryLayout::StaticClass();
	}
	USV_SecondaryInventoryLayout::USV_SecondaryInventoryLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_SecondaryInventoryLayout);
	USV_SecondaryInventoryLayout::~USV_SecondaryInventoryLayout() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_SecondaryInventoryLayout_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_SecondaryInventoryLayout_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_SecondaryInventoryLayout, USV_SecondaryInventoryLayout::StaticClass, TEXT("USV_SecondaryInventoryLayout"), &Z_Registration_Info_UClass_USV_SecondaryInventoryLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_SecondaryInventoryLayout), 2304019294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_SecondaryInventoryLayout_h_3254160124(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_SecondaryInventoryLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_SecondaryInventoryLayout_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
