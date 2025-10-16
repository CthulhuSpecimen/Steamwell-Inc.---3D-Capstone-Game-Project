// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SV_ScenePushable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef STEAMWELL_SV_ScenePushable_generated_h
#error "SV_ScenePushable.generated.h already included, missing '#pragma once' in SV_ScenePushable.h"
#endif
#define STEAMWELL_SV_ScenePushable_generated_h

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_SPARSE_DATA
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execApplyForce);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execApplyForce);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_ACCESSORS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASV_ScenePushable(); \
	friend struct Z_Construct_UClass_ASV_ScenePushable_Statics; \
public: \
	DECLARE_CLASS(ASV_ScenePushable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_ScenePushable)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASV_ScenePushable(); \
	friend struct Z_Construct_UClass_ASV_ScenePushable_Statics; \
public: \
	DECLARE_CLASS(ASV_ScenePushable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_ScenePushable)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASV_ScenePushable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASV_ScenePushable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_ScenePushable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_ScenePushable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_ScenePushable(ASV_ScenePushable&&); \
	NO_API ASV_ScenePushable(const ASV_ScenePushable&); \
public: \
	NO_API virtual ~ASV_ScenePushable();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_ScenePushable(ASV_ScenePushable&&); \
	NO_API ASV_ScenePushable(const ASV_ScenePushable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_ScenePushable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_ScenePushable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASV_ScenePushable) \
	NO_API virtual ~ASV_ScenePushable();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_12_PROLOG
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_RPC_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_INCLASS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWELL_API UClass* StaticClass<class ASV_ScenePushable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_ScenePushable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
