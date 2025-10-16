// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Lift_Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLift_Door() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	STEAMWELL_API UClass* Z_Construct_UClass_ALift_Door();
	STEAMWELL_API UClass* Z_Construct_UClass_ALift_Door_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	void ALift_Door::StaticRegisterNativesALift_Door()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALift_Door);
	UClass* Z_Construct_UClass_ALift_Door_NoRegister()
	{
		return ALift_Door::StaticClass();
	}
	struct Z_Construct_UClass_ALift_Door_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALift_Door_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALift_Door_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lift_Door.h" },
		{ "ModuleRelativePath", "Public/Lift_Door.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALift_Door_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALift_Door>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALift_Door_Statics::ClassParams = {
		&ALift_Door::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALift_Door_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALift_Door_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALift_Door()
	{
		if (!Z_Registration_Info_UClass_ALift_Door.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALift_Door.OuterSingleton, Z_Construct_UClass_ALift_Door_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALift_Door.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<ALift_Door>()
	{
		return ALift_Door::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALift_Door);
	ALift_Door::~ALift_Door() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Lift_Door_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Lift_Door_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALift_Door, ALift_Door::StaticClass, TEXT("ALift_Door"), &Z_Registration_Info_UClass_ALift_Door, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALift_Door), 2785655854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Lift_Door_h_4076193026(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Lift_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Lift_Door_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
