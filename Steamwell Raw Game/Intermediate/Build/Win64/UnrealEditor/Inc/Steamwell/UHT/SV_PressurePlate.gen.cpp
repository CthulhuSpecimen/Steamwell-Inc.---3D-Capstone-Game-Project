// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/SV_PressurePlate.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PressurePlate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PressurePlate();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PressurePlate_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PressurePlateManager_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PushableObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(ASV_PressurePlate::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	struct SV_PressurePlate_eventBlockPlaced_Parms
	{
		ASV_PushableObject* PushedObject;
	};
	static FName NAME_ASV_PressurePlate_BlockPlaced = FName(TEXT("BlockPlaced"));
	void ASV_PressurePlate::BlockPlaced(ASV_PushableObject* PushedObject)
	{
		SV_PressurePlate_eventBlockPlaced_Parms Parms;
		Parms.PushedObject=PushedObject;
		ProcessEvent(FindFunctionChecked(NAME_ASV_PressurePlate_BlockPlaced),&Parms);
	}
	void ASV_PressurePlate::StaticRegisterNativesASV_PressurePlate()
	{
		UClass* Class = ASV_PressurePlate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ASV_PressurePlate::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PushedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::NewProp_PushedObject = { "PushedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PressurePlate_eventBlockPlaced_Parms, PushedObject), Z_Construct_UClass_ASV_PushableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::NewProp_PushedObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SV_PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PressurePlate, nullptr, "BlockPlaced", nullptr, nullptr, sizeof(SV_PressurePlate_eventBlockPlaced_Parms), Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics
	{
		struct SV_PressurePlate_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PressurePlate_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PressurePlate_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PressurePlate_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PressurePlate_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SV_PressurePlate_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SV_PressurePlate_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_PressurePlate_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SV_PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PressurePlate, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::SV_PressurePlate_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PressurePlate);
	UClass* Z_Construct_UClass_ASV_PressurePlate_NoRegister()
	{
		return ASV_PressurePlate::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PressurePlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressureID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PressureID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isPlaced_MetaData[];
#endif
		static void NewProp_isPlaced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPlaced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PressurePlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASV_PressurePlate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASV_PressurePlate_BlockPlaced, "BlockPlaced" }, // 886105666
		{ &Z_Construct_UFunction_ASV_PressurePlate_OnOverlapBegin, "OnOverlapBegin" }, // 2699468138
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SV_PressurePlate.h" },
		{ "ModuleRelativePath", "Public/SV_PressurePlate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Pushable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SV_PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PressurePlate, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Pushable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SV_PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PressurePlate, Bounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Manager_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Public/SV_PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PressurePlate, Manager), Z_Construct_UClass_ASV_PressurePlateManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Manager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_PressureID_MetaData[] = {
		{ "Category", "SV_PressurePlate" },
		{ "ModuleRelativePath", "Public/SV_PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_PressureID = { "PressureID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PressurePlate, PressureID), METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_PressureID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_PressureID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_isPlaced_MetaData[] = {
		{ "Category", "SV_PressurePlate" },
		{ "ModuleRelativePath", "Public/SV_PressurePlate.h" },
	};
#endif
	void Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_isPlaced_SetBit(void* Obj)
	{
		((ASV_PressurePlate*)Obj)->isPlaced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_isPlaced = { "isPlaced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASV_PressurePlate), &Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_isPlaced_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_isPlaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_isPlaced_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_PressurePlate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_Manager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_PressureID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PressurePlate_Statics::NewProp_isPlaced,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PressurePlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PressurePlate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PressurePlate_Statics::ClassParams = {
		&ASV_PressurePlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASV_PressurePlate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_PressurePlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PressurePlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PressurePlate()
	{
		if (!Z_Registration_Info_UClass_ASV_PressurePlate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PressurePlate.OuterSingleton, Z_Construct_UClass_ASV_PressurePlate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PressurePlate.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PressurePlate>()
	{
		return ASV_PressurePlate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PressurePlate);
	ASV_PressurePlate::~ASV_PressurePlate() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PressurePlate, ASV_PressurePlate::StaticClass, TEXT("ASV_PressurePlate"), &Z_Registration_Info_UClass_ASV_PressurePlate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PressurePlate), 4189555503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_3383904430(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
