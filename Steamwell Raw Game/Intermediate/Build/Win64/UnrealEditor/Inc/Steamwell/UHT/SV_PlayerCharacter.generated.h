// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/SV_PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASV_PushableObject;
#ifdef STEAMWELL_SV_PlayerCharacter_generated_h
#error "SV_PlayerCharacter.generated.h already included, missing '#pragma once' in SV_PlayerCharacter.h"
#endif
#define STEAMWELL_SV_PlayerCharacter_generated_h

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_SPARSE_DATA
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckPushableObjects); \
	DECLARE_FUNCTION(execPerformLineTrace);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckPushableObjects); \
	DECLARE_FUNCTION(execPerformLineTrace);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_ACCESSORS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASV_PlayerCharacter(); \
	friend struct Z_Construct_UClass_ASV_PlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASV_PlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_PlayerCharacter)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASV_PlayerCharacter(); \
	friend struct Z_Construct_UClass_ASV_PlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASV_PlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_PlayerCharacter)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASV_PlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASV_PlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_PlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_PlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_PlayerCharacter(ASV_PlayerCharacter&&); \
	NO_API ASV_PlayerCharacter(const ASV_PlayerCharacter&); \
public: \
	NO_API virtual ~ASV_PlayerCharacter();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_PlayerCharacter(ASV_PlayerCharacter&&); \
	NO_API ASV_PlayerCharacter(const ASV_PlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_PlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_PlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASV_PlayerCharacter) \
	NO_API virtual ~ASV_PlayerCharacter();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_17_PROLOG
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_RPC_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_INCLASS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWELL_API UClass* StaticClass<class ASV_PlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Player_SV_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
