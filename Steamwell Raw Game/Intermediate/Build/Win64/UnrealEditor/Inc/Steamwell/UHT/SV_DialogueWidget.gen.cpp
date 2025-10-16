// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/UI/Dialogue/SV_DialogueWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_DialogueWidget() {}
// Cross Module References
	STEAMWELL_API UClass* Z_Construct_UClass_USV_DialogueWidget();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_DialogueWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	struct SV_DialogueWidget_eventSetDialogueText_Parms
	{
		FText NewText;
		float SoundDuration;
	};
	static FName NAME_USV_DialogueWidget_SetDialogueText = FName(TEXT("SetDialogueText"));
	void USV_DialogueWidget::SetDialogueText(FText const& NewText, float SoundDuration)
	{
		SV_DialogueWidget_eventSetDialogueText_Parms Parms;
		Parms.NewText=NewText;
		Parms.SoundDuration=SoundDuration;
		ProcessEvent(FindFunctionChecked(NAME_USV_DialogueWidget_SetDialogueText),&Parms);
	}
	void USV_DialogueWidget::StaticRegisterNativesUSV_DialogueWidget()
	{
	}
	struct Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_DialogueWidget_eventSetDialogueText_Parms, NewText), METADATA_PARAMS(Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::NewProp_NewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::NewProp_NewText_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::NewProp_SoundDuration = { "SoundDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_DialogueWidget_eventSetDialogueText_Parms, SoundDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::NewProp_NewText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::NewProp_SoundDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/UI/Dialogue/SV_DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_DialogueWidget, nullptr, "SetDialogueText", nullptr, nullptr, sizeof(SV_DialogueWidget_eventSetDialogueText_Parms), Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_DialogueWidget);
	UClass* Z_Construct_UClass_USV_DialogueWidget_NoRegister()
	{
		return USV_DialogueWidget::StaticClass();
	}
	struct Z_Construct_UClass_USV_DialogueWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DialogueText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_DialogueWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USV_DialogueWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USV_DialogueWidget_SetDialogueText, "SetDialogueText" }, // 1469610447
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_DialogueWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Dialogue/SV_DialogueWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Dialogue/SV_DialogueWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_DialogueWidget_Statics::NewProp_DialogueText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "SV_DialogueWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Dialogue/SV_DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USV_DialogueWidget_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_DialogueWidget, DialogueText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_DialogueWidget_Statics::NewProp_DialogueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueWidget_Statics::NewProp_DialogueText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USV_DialogueWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_DialogueWidget_Statics::NewProp_DialogueText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_DialogueWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_DialogueWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_DialogueWidget_Statics::ClassParams = {
		&USV_DialogueWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USV_DialogueWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USV_DialogueWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_DialogueWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_DialogueWidget()
	{
		if (!Z_Registration_Info_UClass_USV_DialogueWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_DialogueWidget.OuterSingleton, Z_Construct_UClass_USV_DialogueWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_DialogueWidget.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_DialogueWidget>()
	{
		return USV_DialogueWidget::StaticClass();
	}
	USV_DialogueWidget::USV_DialogueWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_DialogueWidget);
	USV_DialogueWidget::~USV_DialogueWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Dialogue_SV_DialogueWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Dialogue_SV_DialogueWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_DialogueWidget, USV_DialogueWidget::StaticClass, TEXT("USV_DialogueWidget"), &Z_Registration_Info_UClass_USV_DialogueWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_DialogueWidget), 1205828332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Dialogue_SV_DialogueWidget_h_1066500759(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Dialogue_SV_DialogueWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_Dialogue_SV_DialogueWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
