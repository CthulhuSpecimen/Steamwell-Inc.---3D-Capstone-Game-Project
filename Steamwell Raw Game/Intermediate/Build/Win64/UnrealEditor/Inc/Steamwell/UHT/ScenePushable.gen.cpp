// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/ScenePushable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScenePushable() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_AScenePushable();
	STEAMWELL_API UClass* Z_Construct_UClass_AScenePushable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(AScenePushable::execApplyForce)
	{
		P_GET_STRUCT(FVector,Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyForce(Z_Param_Force);
		P_NATIVE_END;
	}
	void AScenePushable::StaticRegisterNativesAScenePushable()
	{
		UClass* Class = AScenePushable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyForce", &AScenePushable::execApplyForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScenePushable_ApplyForce_Statics
	{
		struct ScenePushable_eventApplyForce_Parms
		{
			FVector Force;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScenePushable_eventApplyForce_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pushable" },
		{ "ModuleRelativePath", "Public/ScenePushable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScenePushable, nullptr, "ApplyForce", nullptr, nullptr, sizeof(Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::ScenePushable_eventApplyForce_Parms), Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScenePushable_ApplyForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScenePushable_ApplyForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScenePushable);
	UClass* Z_Construct_UClass_AScenePushable_NoRegister()
	{
		return AScenePushable::StaticClass();
	}
	struct Z_Construct_UClass_AScenePushable_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScenePushable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScenePushable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScenePushable_ApplyForce, "ApplyForce" }, // 1211978204
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenePushable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScenePushable.h" },
		{ "ModuleRelativePath", "Public/ScenePushable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenePushable_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Pushable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScenePushable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScenePushable_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AScenePushable, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScenePushable_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenePushable_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenePushable_Statics::NewProp_PhysicsComponent_MetaData[] = {
		{ "Category", "Pushable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScenePushable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScenePushable_Statics::NewProp_PhysicsComponent = { "PhysicsComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AScenePushable, PhysicsComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScenePushable_Statics::NewProp_PhysicsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenePushable_Statics::NewProp_PhysicsComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScenePushable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenePushable_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenePushable_Statics::NewProp_PhysicsComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScenePushable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScenePushable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScenePushable_Statics::ClassParams = {
		&AScenePushable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AScenePushable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AScenePushable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScenePushable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScenePushable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScenePushable()
	{
		if (!Z_Registration_Info_UClass_AScenePushable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScenePushable.OuterSingleton, Z_Construct_UClass_AScenePushable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AScenePushable.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<AScenePushable>()
	{
		return AScenePushable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScenePushable);
	AScenePushable::~AScenePushable() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_ScenePushable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_ScenePushable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AScenePushable, AScenePushable::StaticClass, TEXT("AScenePushable"), &Z_Registration_Info_UClass_AScenePushable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScenePushable), 2875710426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_ScenePushable_h_1104389939(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_ScenePushable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_ScenePushable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
