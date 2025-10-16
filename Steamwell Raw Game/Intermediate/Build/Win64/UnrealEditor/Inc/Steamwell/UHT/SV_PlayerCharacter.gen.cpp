// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Player/SV_PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PlayerCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PlayerCharacter();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PlayerCharacter_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PushableObject_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_ScenePushable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(ASV_PlayerCharacter::execCheckPushableObjects)
	{
		P_GET_OBJECT(ASV_PushableObject,Z_Param_SentPushable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckPushableObjects(Z_Param_SentPushable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASV_PlayerCharacter::execPerformLineTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformLineTrace();
		P_NATIVE_END;
	}
	void ASV_PlayerCharacter::StaticRegisterNativesASV_PlayerCharacter()
	{
		UClass* Class = ASV_PlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckPushableObjects", &ASV_PlayerCharacter::execCheckPushableObjects },
			{ "PerformLineTrace", &ASV_PlayerCharacter::execPerformLineTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics
	{
		struct SV_PlayerCharacter_eventCheckPushableObjects_Parms
		{
			ASV_PushableObject* SentPushable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SentPushable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::NewProp_SentPushable = { "SentPushable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PlayerCharacter_eventCheckPushableObjects_Parms, SentPushable), Z_Construct_UClass_ASV_PushableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::NewProp_SentPushable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerCharacter, nullptr, "CheckPushableObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::SV_PlayerCharacter_eventCheckPushableObjects_Parms), Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PlayerCharacter_PerformLineTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PlayerCharacter_PerformLineTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PlayerCharacter_PerformLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PlayerCharacter, nullptr, "PerformLineTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PlayerCharacter_PerformLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PlayerCharacter_PerformLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PlayerCharacter_PerformLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PlayerCharacter_PerformLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PlayerCharacter);
	UClass* Z_Construct_UClass_ASV_PlayerCharacter_NoRegister()
	{
		return ASV_PlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPushable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPushable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPushable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPushable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PushForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardMovementValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardMovementValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isPushing_MetaData[];
#endif
		static void NewProp_isPushing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPushing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushStartCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PushStartCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushEndCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PushEndCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASV_PlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASV_PlayerCharacter_CheckPushableObjects, "CheckPushableObjects" }, // 3617902472
		{ &Z_Construct_UFunction_ASV_PlayerCharacter_PerformLineTrace, "PerformLineTrace" }, // 2416526134
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SV_PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CurrentPushable_MetaData[] = {
		{ "Comment", "// Reference to the current pushable object\n" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
		{ "ToolTip", "Reference to the current pushable object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CurrentPushable = { "CurrentPushable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, CurrentPushable), Z_Construct_UClass_ASV_ScenePushable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CurrentPushable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CurrentPushable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_SelectedPushable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_SelectedPushable = { "SelectedPushable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, SelectedPushable), Z_Construct_UClass_ASV_PushableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_SelectedPushable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_SelectedPushable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushForce_MetaData[] = {
		{ "Category", "Pushable" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushForce = { "PushForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, PushForce), METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_ForwardMovementValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_ForwardMovementValue = { "ForwardMovementValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, ForwardMovementValue), METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_ForwardMovementValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_ForwardMovementValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_isPushing_MetaData[] = {
		{ "Category", "Pushable" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_isPushing_SetBit(void* Obj)
	{
		((ASV_PlayerCharacter*)Obj)->isPushing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_isPushing = { "isPushing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASV_PlayerCharacter), &Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_isPushing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_isPushing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_isPushing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_maxDist_MetaData[] = {
		{ "Category", "Pushable" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_maxDist = { "maxDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, maxDist), METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_maxDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_maxDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushStartCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushStartCue = { "PushStartCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, PushStartCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushStartCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushStartCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushEndCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Player/SV_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushEndCue = { "PushEndCue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PlayerCharacter, PushEndCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushEndCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushEndCue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_PlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_CurrentPushable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_SelectedPushable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_ForwardMovementValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_isPushing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_maxDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushStartCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PlayerCharacter_Statics::NewProp_PushEndCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PlayerCharacter_Statics::ClassParams = {
		&ASV_PlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASV_PlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_PlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_ASV_PlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PlayerCharacter.OuterSingleton, Z_Construct_UClass_ASV_PlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PlayerCharacter.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PlayerCharacter>()
	{
		return ASV_PlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PlayerCharacter);
	ASV_PlayerCharacter::~ASV_PlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PlayerCharacter, ASV_PlayerCharacter::StaticClass, TEXT("ASV_PlayerCharacter"), &Z_Registration_Info_UClass_ASV_PlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PlayerCharacter), 4206352655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_2974301677(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
