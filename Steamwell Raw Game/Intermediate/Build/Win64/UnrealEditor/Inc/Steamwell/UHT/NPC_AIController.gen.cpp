// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/AI/NPC_AIController.h"
#include "../../AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_AIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ANPC_AIController();
	STEAMWELL_API UClass* Z_Construct_UClass_ANPC_AIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(ANPC_AIController::execDefuseEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DefuseEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPC_AIController::execOnPlayerLost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerLost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPC_AIController::execOnPlayerSpotted)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerSpotted(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPC_AIController::execOnTargetDetected)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetDetected(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPC_AIController::execOnPerceptionUpdated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Out_UpdatedActors);
		P_NATIVE_END;
	}
	void ANPC_AIController::StaticRegisterNativesANPC_AIController()
	{
		UClass* Class = ANPC_AIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DefuseEnemy", &ANPC_AIController::execDefuseEnemy },
			{ "OnPerceptionUpdated", &ANPC_AIController::execOnPerceptionUpdated },
			{ "OnPlayerLost", &ANPC_AIController::execOnPlayerLost },
			{ "OnPlayerSpotted", &ANPC_AIController::execOnPlayerSpotted },
			{ "OnTargetDetected", &ANPC_AIController::execOnTargetDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPC_AIController_DefuseEnemy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_DefuseEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_AIController_DefuseEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_AIController, nullptr, "DefuseEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_DefuseEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_DefuseEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_AIController_DefuseEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_AIController_DefuseEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics
	{
		struct NPC_AIController_eventOnPerceptionUpdated_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPC_AIController_eventOnPerceptionUpdated_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_AIController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::NPC_AIController_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPC_AIController_OnPlayerLost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_OnPlayerLost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_AIController_OnPlayerLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_AIController, nullptr, "OnPlayerLost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_OnPlayerLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnPlayerLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_AIController_OnPlayerLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_AIController_OnPlayerLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics
	{
		struct NPC_AIController_eventOnPlayerSpotted_Parms
		{
			AActor* Player;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPC_AIController_eventOnPlayerSpotted_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_AIController, nullptr, "OnPlayerSpotted", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::NPC_AIController_eventOnPlayerSpotted_Parms), Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics
	{
		struct NPC_AIController_eventOnTargetDetected_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPC_AIController_eventOnTargetDetected_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NPC_AIController_eventOnTargetDetected_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 576118341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_AIController, nullptr, "OnTargetDetected", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::NPC_AIController_eventOnTargetDetected_Parms), Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_AIController_OnTargetDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPC_AIController_OnTargetDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPC_AIController);
	UClass* Z_Construct_UClass_ANPC_AIController_NoRegister()
	{
		return ANPC_AIController::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LostSightTimeDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LostSightTimeDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTreeAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlackboardAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDefusedAnim_MetaData[];
#endif
		static void NewProp_isDefusedAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDefusedAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPC_AIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPC_AIController_DefuseEnemy, "DefuseEnemy" }, // 1146759143
		{ &Z_Construct_UFunction_ANPC_AIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 2363769160
		{ &Z_Construct_UFunction_ANPC_AIController_OnPlayerLost, "OnPlayerLost" }, // 3362458608
		{ &Z_Construct_UFunction_ANPC_AIController_OnPlayerSpotted, "OnPlayerSpotted" }, // 1696436680
		{ &Z_Construct_UFunction_ANPC_AIController_OnTargetDetected, "OnTargetDetected" }, // 920479758
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/NPC_AIController.h" },
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp_LostSightTimeDuration_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_LostSightTimeDuration = { "LostSightTimeDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANPC_AIController, LostSightTimeDuration), METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_LostSightTimeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_LostSightTimeDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "// BT & BB asset references that will be set in the Blueprint defaults\n" },
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
		{ "ToolTip", "BT & BB asset references that will be set in the Blueprint defaults" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANPC_AIController, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BehaviorTreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BehaviorTreeAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BlackboardAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANPC_AIController, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BlackboardAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BlackboardAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp_isDefusedAnim_MetaData[] = {
		{ "Category", "Pressure Plate Settings" },
		{ "ModuleRelativePath", "Public/AI/NPC_AIController.h" },
	};
#endif
	void Z_Construct_UClass_ANPC_AIController_Statics::NewProp_isDefusedAnim_SetBit(void* Obj)
	{
		((ANPC_AIController*)Obj)->isDefusedAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_isDefusedAnim = { "isDefusedAnim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ANPC_AIController), &Z_Construct_UClass_ANPC_AIController_Statics::NewProp_isDefusedAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_isDefusedAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_isDefusedAnim_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_AIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_LostSightTimeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BehaviorTreeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_BlackboardAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_isDefusedAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_AIController_Statics::ClassParams = {
		&ANPC_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPC_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC_AIController()
	{
		if (!Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton, Z_Construct_UClass_ANPC_AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPC_AIController.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ANPC_AIController>()
	{
		return ANPC_AIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_AIController);
	ANPC_AIController::~ANPC_AIController() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_NPC_AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_NPC_AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPC_AIController, ANPC_AIController::StaticClass, TEXT("ANPC_AIController"), &Z_Registration_Info_UClass_ANPC_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC_AIController), 1606230705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_NPC_AIController_h_2668826952(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_NPC_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_AI_NPC_AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
