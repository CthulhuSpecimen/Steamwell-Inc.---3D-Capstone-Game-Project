// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steamwell/Public/Items/SV_InventoryItemAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSV_InventoryItemAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset();
	STEAMWELL_API UClass* Z_Construct_UClass_USV_InventoryItemAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Steamwell();
// End Cross Module References
	DEFINE_FUNCTION(USV_InventoryItemAsset::execGetIdentifierString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIdentifierString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USV_InventoryItemAsset::execIsConsumable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConsumable();
		P_NATIVE_END;
	}
	void USV_InventoryItemAsset::StaticRegisterNativesUSV_InventoryItemAsset()
	{
		UClass* Class = USV_InventoryItemAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIdentifierString", &USV_InventoryItemAsset::execGetIdentifierString },
			{ "IsConsumable", &USV_InventoryItemAsset::execIsConsumable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics
	{
		struct SV_InventoryItemAsset_eventGetIdentifierString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SV_InventoryItemAsset_eventGetIdentifierString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_InventoryItemAsset, nullptr, "GetIdentifierString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::SV_InventoryItemAsset_eventGetIdentifierString_Parms), Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics
	{
		struct SV_InventoryItemAsset_eventIsConsumable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SV_InventoryItemAsset_eventIsConsumable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SV_InventoryItemAsset_eventIsConsumable_Parms), &Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "// maybe texture 2D instead\n" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
		{ "ToolTip", "maybe texture 2D instead" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USV_InventoryItemAsset, nullptr, "IsConsumable", nullptr, nullptr, sizeof(Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::SV_InventoryItemAsset_eventIsConsumable_Parms), Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USV_InventoryItemAsset);
	UClass* Z_Construct_UClass_USV_InventoryItemAsset_NoRegister()
	{
		return USV_InventoryItemAsset::StaticClass();
	}
	struct Z_Construct_UClass_USV_InventoryItemAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USV_InventoryItemAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Steamwell,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USV_InventoryItemAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USV_InventoryItemAsset_GetIdentifierString, "GetIdentifierString" }, // 2413940240
		{ &Z_Construct_UFunction_USV_InventoryItemAsset_IsConsumable, "IsConsumable" }, // 3284587767
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryItemAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SV_InventoryItemAsset.h" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventoryItemAsset, ItemType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventoryItemAsset, ItemName), METADATA_PARAMS(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventoryItemAsset, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventoryItemAsset, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventoryItemAsset, MaxCount), METADATA_PARAMS(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxLevel_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventoryItemAsset, MaxLevel), METADATA_PARAMS(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventoryItemAsset, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/* If an item grants you an ability*/// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Abilities\")\n// TSubclassOf<USV_GameplayAbility> GrantedAbility;\n" },
		{ "ModuleRelativePath", "Public/Items/SV_InventoryItemAsset.h" },
		{ "ToolTip", "If an item grants you an ability// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Abilities\")\n// TSubclassOf<USV_GameplayAbility> GrantedAbility;" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USV_InventoryItemAsset, AbilityLevel), METADATA_PARAMS(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_AbilityLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USV_InventoryItemAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_MaxLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_ItemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USV_InventoryItemAsset_Statics::NewProp_AbilityLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USV_InventoryItemAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USV_InventoryItemAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USV_InventoryItemAsset_Statics::ClassParams = {
		&USV_InventoryItemAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USV_InventoryItemAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USV_InventoryItemAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USV_InventoryItemAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USV_InventoryItemAsset()
	{
		if (!Z_Registration_Info_UClass_USV_InventoryItemAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USV_InventoryItemAsset.OuterSingleton, Z_Construct_UClass_USV_InventoryItemAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USV_InventoryItemAsset.OuterSingleton;
	}
	template<> STEAMWELL_API UClass* StaticClass<USV_InventoryItemAsset>()
	{
		return USV_InventoryItemAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USV_InventoryItemAsset);
	USV_InventoryItemAsset::~USV_InventoryItemAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItemAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItemAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USV_InventoryItemAsset, USV_InventoryItemAsset::StaticClass, TEXT("USV_InventoryItemAsset"), &Z_Registration_Info_UClass_USV_InventoryItemAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USV_InventoryItemAsset), 1155366641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItemAsset_h_2049542576(TEXT("/Script/Steamwell"),
		Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItemAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InventoryItemAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
