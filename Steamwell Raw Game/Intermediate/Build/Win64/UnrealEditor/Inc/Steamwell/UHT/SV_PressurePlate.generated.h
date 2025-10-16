// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SV_PressurePlate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASV_PushableObject;
class UPrimitiveComponent;
struct FHitResult;
#ifdef STEAMWELL_SV_PressurePlate_generated_h
#error "SV_PressurePlate.generated.h already included, missing '#pragma once' in SV_PressurePlate.h"
#endif
#define STEAMWELL_SV_PressurePlate_generated_h

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_SPARSE_DATA
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_ACCESSORS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_CALLBACK_WRAPPERS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASV_PressurePlate(); \
	friend struct Z_Construct_UClass_ASV_PressurePlate_Statics; \
public: \
	DECLARE_CLASS(ASV_PressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_PressurePlate)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASV_PressurePlate(); \
	friend struct Z_Construct_UClass_ASV_PressurePlate_Statics; \
public: \
	DECLARE_CLASS(ASV_PressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_PressurePlate)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASV_PressurePlate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASV_PressurePlate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_PressurePlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_PressurePlate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_PressurePlate(ASV_PressurePlate&&); \
	NO_API ASV_PressurePlate(const ASV_PressurePlate&); \
public: \
	NO_API virtual ~ASV_PressurePlate();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_PressurePlate(ASV_PressurePlate&&); \
	NO_API ASV_PressurePlate(const ASV_PressurePlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_PressurePlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_PressurePlate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASV_PressurePlate) \
	NO_API virtual ~ASV_PressurePlate();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_13_PROLOG
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_RPC_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_CALLBACK_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_INCLASS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_CALLBACK_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWELL_API UClass* StaticClass<class ASV_PressurePlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_SV_PressurePlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
