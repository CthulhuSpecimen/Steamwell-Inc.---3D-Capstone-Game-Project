// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/SV_PipeSpin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PipeSpin() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PipeSpin();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PipeSpin_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PushableObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(ASV_PipeSpin::execOnRotate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRotate();
		P_NATIVE_END;
	}
	void ASV_PipeSpin::StaticRegisterNativesASV_PipeSpin()
	{
		UClass* Class = ASV_PipeSpin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRotate", &ASV_PipeSpin::execOnRotate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASV_PipeSpin_OnRotate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASV_PipeSpin_OnRotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SV_PipeSpin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASV_PipeSpin_OnRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASV_PipeSpin, nullptr, "OnRotate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASV_PipeSpin_OnRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASV_PipeSpin_OnRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASV_PipeSpin_OnRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASV_PipeSpin_OnRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PipeSpin);
	UClass* Z_Construct_UClass_ASV_PipeSpin_NoRegister()
	{
		return ASV_PipeSpin::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PipeSpin_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotaterPipe_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotaterPipe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotDegree_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotDegree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrigDegr_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrigDegr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PipeSpin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASV_PipeSpin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASV_PipeSpin_OnRotate, "OnRotate" }, // 383605217
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeSpin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SV_PipeSpin.h" },
		{ "ModuleRelativePath", "Public/SV_PipeSpin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Rotate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SV_PipeSpin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PipeSpin, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Rotate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SV_PipeSpin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PipeSpin, Bounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotaterPipe_MetaData[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/SV_PipeSpin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotaterPipe = { "RotaterPipe", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PipeSpin, RotaterPipe), Z_Construct_UClass_ASV_PushableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotaterPipe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotaterPipe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotDegree_MetaData[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/SV_PipeSpin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotDegree = { "RotDegree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PipeSpin, RotDegree), METADATA_PARAMS(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotDegree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotDegree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_OrigDegr_MetaData[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/SV_PipeSpin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_OrigDegr = { "OrigDegr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PipeSpin, OrigDegr), METADATA_PARAMS(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_OrigDegr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_OrigDegr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_PipeSpin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotaterPipe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_RotDegree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PipeSpin_Statics::NewProp_OrigDegr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PipeSpin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PipeSpin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PipeSpin_Statics::ClassParams = {
		&ASV_PipeSpin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASV_PipeSpin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_PipeSpin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PipeSpin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PipeSpin()
	{
		if (!Z_Registration_Info_UClass_ASV_PipeSpin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PipeSpin.OuterSingleton, Z_Construct_UClass_ASV_PipeSpin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PipeSpin.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PipeSpin>()
	{
		return ASV_PipeSpin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PipeSpin);
	ASV_PipeSpin::~ASV_PipeSpin() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeSpin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeSpin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PipeSpin, ASV_PipeSpin::StaticClass, TEXT("ASV_PipeSpin"), &Z_Registration_Info_UClass_ASV_PipeSpin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PipeSpin), 2304114147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeSpin_h_3181191822(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeSpin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PipeSpin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
