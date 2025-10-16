// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SV_EnemyManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef STEAMWELL_SV_EnemyManager_generated_h
#error "SV_EnemyManager.generated.h already included, missing '#pragma once' in SV_EnemyManager.h"
#endif
#define STEAMWELL_SV_EnemyManager_generated_h

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_SPARSE_DATA
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_ACCESSORS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASV_EnemyManager(); \
	friend struct Z_Construct_UClass_ASV_EnemyManager_Statics; \
public: \
	DECLARE_CLASS(ASV_EnemyManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_EnemyManager)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASV_EnemyManager(); \
	friend struct Z_Construct_UClass_ASV_EnemyManager_Statics; \
public: \
	DECLARE_CLASS(ASV_EnemyManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_EnemyManager)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASV_EnemyManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASV_EnemyManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_EnemyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_EnemyManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_EnemyManager(ASV_EnemyManager&&); \
	NO_API ASV_EnemyManager(const ASV_EnemyManager&); \
public: \
	NO_API virtual ~ASV_EnemyManager();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_EnemyManager(ASV_EnemyManager&&); \
	NO_API ASV_EnemyManager(const ASV_EnemyManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_EnemyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_EnemyManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASV_EnemyManager) \
	NO_API virtual ~ASV_EnemyManager();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_12_PROLOG
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_RPC_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_INCLASS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWELL_API UClass* StaticClass<class ASV_EnemyManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_EnemyManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
