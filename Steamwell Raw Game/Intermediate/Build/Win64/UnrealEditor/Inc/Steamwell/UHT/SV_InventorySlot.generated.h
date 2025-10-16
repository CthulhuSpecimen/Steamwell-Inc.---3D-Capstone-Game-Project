// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SV_InventorySlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USV_InventoryItemAsset;
class UTexture2D;
#ifdef STEAMWELL_SV_InventorySlot_generated_h
#error "SV_InventorySlot.generated.h already included, missing '#pragma once' in SV_InventorySlot.h"
#endif
#define STEAMWELL_SV_InventorySlot_generated_h

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_SPARSE_DATA
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayPaper); \
	DECLARE_FUNCTION(execSetDefaultTexture); \
	DECLARE_FUNCTION(execSetItemTexture); \
	DECLARE_FUNCTION(execSetEquippedItem);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayPaper); \
	DECLARE_FUNCTION(execSetDefaultTexture); \
	DECLARE_FUNCTION(execSetItemTexture); \
	DECLARE_FUNCTION(execSetEquippedItem);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_ACCESSORS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_CALLBACK_WRAPPERS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSV_InventorySlot(); \
	friend struct Z_Construct_UClass_USV_InventorySlot_Statics; \
public: \
	DECLARE_CLASS(USV_InventorySlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(USV_InventorySlot)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSV_InventorySlot(); \
	friend struct Z_Construct_UClass_USV_InventorySlot_Statics; \
public: \
	DECLARE_CLASS(USV_InventorySlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(USV_InventorySlot)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USV_InventorySlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USV_InventorySlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USV_InventorySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USV_InventorySlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USV_InventorySlot(USV_InventorySlot&&); \
	NO_API USV_InventorySlot(const USV_InventorySlot&); \
public: \
	NO_API virtual ~USV_InventorySlot();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USV_InventorySlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USV_InventorySlot(USV_InventorySlot&&); \
	NO_API USV_InventorySlot(const USV_InventorySlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USV_InventorySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USV_InventorySlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USV_InventorySlot) \
	NO_API virtual ~USV_InventorySlot();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_17_PROLOG
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_RPC_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_CALLBACK_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_INCLASS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_CALLBACK_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWELL_API UClass* StaticClass<class USV_InventorySlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_UI_SV_InventorySlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
