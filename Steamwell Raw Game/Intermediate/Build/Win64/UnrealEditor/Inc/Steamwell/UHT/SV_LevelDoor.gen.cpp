// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/SV_LevelDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_LevelDoor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_InteractableBase();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_LevelDoor();
	STEAMWELL_API UClass* Z_Construct_UClass_ASV_LevelDoor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ASV_LevelDoor::StaticRegisterNativesASV_LevelDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASV_LevelDoor);
	UClass* Z_Construct_UClass_ASV_LevelDoor_NoRegister()
	{
		return ASV_LevelDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASV_LevelDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearReq_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GearReq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASV_LevelDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASV_InteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_LevelDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SV_LevelDoor.h" },
		{ "ModuleRelativePath", "Public/Items/SV_LevelDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_GearReq_MetaData[] = {
		{ "Category", "SV_LevelDoor" },
		{ "ModuleRelativePath", "Public/Items/SV_LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_GearReq = { "GearReq", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_LevelDoor, GearReq), METADATA_PARAMS(Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_GearReq_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_GearReq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "SV_LevelDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SV_LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASV_LevelDoor, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_PickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_PickupMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASV_LevelDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_GearReq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASV_LevelDoor_Statics::NewProp_PickupMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASV_LevelDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASV_LevelDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASV_LevelDoor_Statics::ClassParams = {
		&ASV_LevelDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASV_LevelDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASV_LevelDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASV_LevelDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASV_LevelDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASV_LevelDoor()
	{
		if (!Z_Registration_Info_UClass_ASV_LevelDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASV_LevelDoor.OuterSingleton, Z_Construct_UClass_ASV_LevelDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASV_LevelDoor.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ASV_LevelDoor>()
	{
		return ASV_LevelDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASV_LevelDoor);
	ASV_LevelDoor::~ASV_LevelDoor() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_LevelDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_LevelDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASV_LevelDoor, ASV_LevelDoor::StaticClass, TEXT("ASV_LevelDoor"), &Z_Registration_Info_UClass_ASV_LevelDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASV_LevelDoor), 3321455240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_LevelDoor_h_846072508(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_LevelDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_LevelDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
