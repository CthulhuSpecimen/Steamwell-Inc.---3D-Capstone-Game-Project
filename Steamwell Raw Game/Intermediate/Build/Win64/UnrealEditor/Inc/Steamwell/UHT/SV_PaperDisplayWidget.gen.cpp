// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/UI/Inventory/SV_PaperDisplayWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PaperDisplayWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_PaperDisplayWidget();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_PaperDisplayWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(USV_PaperDisplayWidget::execSetImage)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Image);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImage(Z_Param_Image);
		P_NATIVE_END;
	}
	void USV_PaperDisplayWidget::StaticRegisterNativesUSV_PaperDisplayWidget()
	{
		UClass* Class = USV_PaperDisplayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetImage", &USV_PaperDisplayWidget::execSetImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics
	{
		struct SV_PaperDisplayWidget_eventSetImage_Parms
		{
			UTexture2D* Image;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PaperDisplayWidget_eventSetImage_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/Inventory/SV_PaperDisplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_PaperDisplayWidget, nullptr, "SetImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::SV_PaperDisplayWidget_eventSetImage_Parms), Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_PaperDisplayWidget);
	UClass* Z_Construct_UClass_USV_PaperDisplayWidget_NoRegister()
	{
		return USV_PaperDisplayWidget::StaticClass();
	}
	struct Z_Construct_UClass_USV_PaperDisplayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaperImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_PaperDisplayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USV_PaperDisplayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USV_PaperDisplayWidget_SetImage, "SetImage" }, // 1819130962
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_PaperDisplayWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Inventory/SV_PaperDisplayWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Inventory/SV_PaperDisplayWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_PaperDisplayWidget_Statics::NewProp_PaperImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SV_PaperDisplayWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Inventory/SV_PaperDisplayWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USV_PaperDisplayWidget_Statics::NewProp_PaperImage = { "PaperImage", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_PaperDisplayWidget, PaperImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_PaperDisplayWidget_Statics::NewProp_PaperImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_PaperDisplayWidget_Statics::NewProp_PaperImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USV_PaperDisplayWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_PaperDisplayWidget_Statics::NewProp_PaperImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_PaperDisplayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_PaperDisplayWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_PaperDisplayWidget_Statics::ClassParams = {
		&USV_PaperDisplayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USV_PaperDisplayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USV_PaperDisplayWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_PaperDisplayWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_PaperDisplayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_PaperDisplayWidget()
	{
		if (!Z_Registration_Info_UClass_USV_PaperDisplayWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_PaperDisplayWidget.OuterSingleton, Z_Construct_UClass_USV_PaperDisplayWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_PaperDisplayWidget.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_PaperDisplayWidget>()
	{
		return USV_PaperDisplayWidget::StaticClass();
	}
	USV_PaperDisplayWidget::USV_PaperDisplayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_PaperDisplayWidget);
	USV_PaperDisplayWidget::~USV_PaperDisplayWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Inventory_SV_PaperDisplayWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Inventory_SV_PaperDisplayWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_PaperDisplayWidget, USV_PaperDisplayWidget::StaticClass, TEXT("USV_PaperDisplayWidget"), &Z_Registration_Info_UClass_USV_PaperDisplayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_PaperDisplayWidget), 287642354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Inventory_SV_PaperDisplayWidget_h_3183033050(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Inventory_SV_PaperDisplayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Inventory_SV_PaperDisplayWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
