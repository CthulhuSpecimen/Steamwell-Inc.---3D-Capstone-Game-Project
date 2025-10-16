// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Interfaces/SV_InventoryInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_InventoryInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryInterface();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void USV_InventoryInterface::StaticRegisterNativesUSV_InventoryInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_InventoryInterface);
	UClass* Z_Construct_UClass_USV_InventoryInterface_NoRegister()
	{
		return USV_InventoryInterface::StaticClass();
	}
	struct Z_Construct_UClass_USV_InventoryInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_InventoryInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/SV_InventoryInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_InventoryInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISV_InventoryInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_InventoryInterface_Statics::ClassParams = {
		&USV_InventoryInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USV_InventoryInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_InventoryInterface()
	{
		if (!Z_Registration_Info_UClass_USV_InventoryInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_InventoryInterface.OuterSingleton, Z_Construct_UClass_USV_InventoryInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_InventoryInterface.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_InventoryInterface>()
	{
		return USV_InventoryInterface::StaticClass();
	}
	USV_InventoryInterface::USV_InventoryInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_InventoryInterface);
	USV_InventoryInterface::~USV_InventoryInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Interfaces_SV_InventoryInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Interfaces_SV_InventoryInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_InventoryInterface, USV_InventoryInterface::StaticClass, TEXT("USV_InventoryInterface"), &Z_Registration_Info_UClass_USV_InventoryInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_InventoryInterface), 378965296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Interfaces_SV_InventoryInterface_h_2725521442(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Interfaces_SV_InventoryInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Interfaces_SV_InventoryInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
