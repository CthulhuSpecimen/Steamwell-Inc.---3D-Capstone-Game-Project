// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/SV_PushableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_PushableObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_InteractableBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PushableObject();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_PushableObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_PushableObject::StaticRegisterNativesASV_PushableObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_PushableObject);
	UClass* Z_Construct_UClass_ASV_PushableObject_NoRegister()
	{
		return ASV_PushableObject::StaticClass();
	}
	struct Z_Construct_UClass_ASV_PushableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressureID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PressureID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isPlaced_MetaData[];
#endif
		static void NewProp_isPlaced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPlaced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RotID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_PushableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_InteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PushableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SV_PushableObject.h" },
		{ "ModuleRelativePath", "Public/SV_PushableObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Pushable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SV_PushableObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PushableObject, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_PressureID_MetaData[] = {
		{ "Category", "Pressure Plate Settings" },
		{ "ModuleRelativePath", "Public/SV_PushableObject.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_PressureID = { "PressureID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PushableObject, PressureID), METADATA_PARAMS(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_PressureID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_PressureID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_isPlaced_MetaData[] = {
		{ "Category", "Pressure Plate Settings" },
		{ "ModuleRelativePath", "Public/SV_PushableObject.h" },
	};
#endif
	void Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_isPlaced_SetBit(void* Obj)
	{
		((ASV_PushableObject*)Obj)->isPlaced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_isPlaced = { "isPlaced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASV_PushableObject), &Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_isPlaced_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_isPlaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_isPlaced_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Push Settings" },
		{ "ModuleRelativePath", "Public/SV_PushableObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PushableObject, MoveDistance), METADATA_PARAMS(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Push Settings" },
		{ "ModuleRelativePath", "Public/SV_PushableObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PushableObject, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_RotID_MetaData[] = {
		{ "Category", "Pressure Plate Settings" },
		{ "ModuleRelativePath", "Public/SV_PushableObject.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_RotID = { "RotID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_PushableObject, RotID), METADATA_PARAMS(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_RotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_RotID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_PushableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_PressureID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_isPlaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_PushableObject_Statics::NewProp_RotID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_PushableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_PushableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_PushableObject_Statics::ClassParams = {
		&ASV_PushableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASV_PushableObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PushableObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_PushableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_PushableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_PushableObject()
	{
		if (!Z_Registration_Info_UClass_ASV_PushableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_PushableObject.OuterSingleton, Z_Construct_UClass_ASV_PushableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_PushableObject.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_PushableObject>()
	{
		return ASV_PushableObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_PushableObject);
	ASV_PushableObject::~ASV_PushableObject() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PushableObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PushableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_PushableObject, ASV_PushableObject::StaticClass, TEXT("ASV_PushableObject"), &Z_Registration_Info_UClass_ASV_PushableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_PushableObject), 3990461197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PushableObject_h_3917650260(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PushableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PushableObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
