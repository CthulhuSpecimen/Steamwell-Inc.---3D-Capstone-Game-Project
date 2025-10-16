// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/SV_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USV_InventoryItemAsset;
class USV_PaperBaseDataAsset;
struct FSV_InventoryItem;
#ifdef STEAMWELL_SV_PlayerController_generated_h
#error "SV_PlayerController.generated.h already included, missing '#pragma once' in SV_PlayerController.h"
#endif
#define STEAMWELL_SV_PlayerController_generated_h

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_SPARSE_DATA
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTryDefuseEnemy); \
	DECLARE_FUNCTION(execResetInteractFlag); \
	DECLARE_FUNCTION(execGetInventoryItemData); \
	DECLARE_FUNCTION(execGetInventoryItemCount); \
	DECLARE_FUNCTION(execSetCurrentSelectedItem); \
	DECLARE_FUNCTION(execRemoveInventoryItem); \
	DECLARE_FUNCTION(execAddInventoryItem);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryDefuseEnemy); \
	DECLARE_FUNCTION(execResetInteractFlag); \
	DECLARE_FUNCTION(execGetInventoryItemData); \
	DECLARE_FUNCTION(execGetInventoryItemCount); \
	DECLARE_FUNCTION(execSetCurrentSelectedItem); \
	DECLARE_FUNCTION(execRemoveInventoryItem); \
	DECLARE_FUNCTION(execAddInventoryItem);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_ACCESSORS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_CALLBACK_WRAPPERS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASV_PlayerController(); \
	friend struct Z_Construct_UClass_ASV_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ASV_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_PlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ASV_PlayerController*>(this); }


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASV_PlayerController(); \
	friend struct Z_Construct_UClass_ASV_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ASV_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_PlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ASV_PlayerController*>(this); }


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASV_PlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASV_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_PlayerController(ASV_PlayerController&&); \
	NO_API ASV_PlayerController(const ASV_PlayerController&); \
public: \
	NO_API virtual ~ASV_PlayerController();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_PlayerController(ASV_PlayerController&&); \
	NO_API ASV_PlayerController(const ASV_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASV_PlayerController) \
	NO_API virtual ~ASV_PlayerController();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_19_PROLOG
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_RPC_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_CALLBACK_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_INCLASS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_CALLBACK_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWELL_API UClass* StaticClass<class ASV_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
