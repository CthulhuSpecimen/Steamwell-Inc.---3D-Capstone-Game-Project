// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameManager/SV_GameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STEAMWELL_SV_GameInstance_generated_h
#error "SV_GameInstance.generated.h already included, missing '#pragma once' in SV_GameInstance.h"
#endif
#define STEAMWELL_SV_GameInstance_generated_h

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_SPARSE_DATA
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_ACCESSORS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSV_GameInstance(); \
	friend struct Z_Construct_UClass_USV_GameInstance_Statics; \
public: \
	DECLARE_CLASS(USV_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(USV_GameInstance)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSV_GameInstance(); \
	friend struct Z_Construct_UClass_USV_GameInstance_Statics; \
public: \
	DECLARE_CLASS(USV_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(USV_GameInstance)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USV_GameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USV_GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USV_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USV_GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USV_GameInstance(USV_GameInstance&&); \
	NO_API USV_GameInstance(const USV_GameInstance&); \
public: \
	NO_API virtual ~USV_GameInstance();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USV_GameInstance(USV_GameInstance&&); \
	NO_API USV_GameInstance(const USV_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USV_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USV_GameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USV_GameInstance) \
	NO_API virtual ~USV_GameInstance();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_13_PROLOG
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_RPC_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_INCLASS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWELL_API UClass* StaticClass<class USV_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_GameManager_SV_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
