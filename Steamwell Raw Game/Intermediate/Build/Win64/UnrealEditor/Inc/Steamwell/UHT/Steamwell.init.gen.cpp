// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamwell_init() {}
	STEAMWELL_API UFunction* Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature();
	STEAMWELL_API UFunction* Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Steamwell;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Steamwell()
	{
		if (!Z_Registration_Info_UPackage__Script_Steamwell.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Steamwell_OnInventoryItemChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Steamwell_OnInventoryLoaded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Steamwell",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x32A6C829,
				0x89864CC5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Steamwell.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Steamwell.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Steamwell(Z_Construct_UPackage__Script_Steamwell, TEXT("/Script/Steamwell"), Z_Registration_Info_UPackage__Script_Steamwell, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x32A6C829, 0x89864CC5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
