// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Data/SV_DialogueEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_DialogueEntry() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_DialogueDataAsset_NoRegister();
	STEAMWELL_API UScriptStruct* Z_Construct_UScriptStruct_FSV_DialogueEntry();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References

static_assert(std::is_polymorphic<FSV_DialogueEntry>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSV_DialogueEntry cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SV_DialogueEntry;
class UScriptStruct* FSV_DialogueEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SV_DialogueEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SV_DialogueEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSV_DialogueEntry, (UObject*)Z_Construct_UPackage__Script_Steamwell(), TEXT("SV_DialogueEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SV_DialogueEntry.OuterSingleton;
}
template<> STEAMWELL_API UScriptStruct* StaticStruct<FSV_DialogueEntry>()
{
	return FSV_DialogueEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DialogueDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Data/SV_DialogueEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSV_DialogueEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueText_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Data/SV_DialogueEntry.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSV_DialogueEntry, DialogueText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueDataAsset_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Data/SV_DialogueEntry.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueDataAsset = { "DialogueDataAsset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSV_DialogueEntry, DialogueDataAsset), Z_Construct_UClass_USV_DialogueDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueDataAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewProp_DialogueDataAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SV_DialogueEntry",
		sizeof(FSV_DialogueEntry),
		alignof(FSV_DialogueEntry),
		Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSV_DialogueEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_SV_DialogueEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SV_DialogueEntry.InnerSingleton, Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SV_DialogueEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueEntry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueEntry_h_Statics::ScriptStructInfo[] = {
		{ FSV_DialogueEntry::StaticStruct, Z_Construct_UScriptStruct_FSV_DialogueEntry_Statics::NewStructOps, TEXT("SV_DialogueEntry"), &Z_Registration_Info_UScriptStruct_SV_DialogueEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSV_DialogueEntry), 2134366436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueEntry_h_1459554193(TEXT("/Script/Steamwell"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueEntry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Data_SV_DialogueEntry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
