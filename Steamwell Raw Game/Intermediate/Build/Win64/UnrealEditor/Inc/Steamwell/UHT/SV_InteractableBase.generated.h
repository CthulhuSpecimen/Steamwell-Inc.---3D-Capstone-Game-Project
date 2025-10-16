// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/SV_InteractableBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMWELL_SV_InteractableBase_generated_h
#error "SV_InteractableBase.generated.h already included, missing '#pragma once' in SV_InteractableBase.h"
#endif
#define STEAMWELL_SV_InteractableBase_generated_h

#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_SPARSE_DATA
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInteractText);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractText);


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_ACCESSORS
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASV_InteractableBase(); \
	friend struct Z_Construct_UClass_ASV_InteractableBase_Statics; \
public: \
	DECLARE_CLASS(ASV_InteractableBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_InteractableBase)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASV_InteractableBase(); \
	friend struct Z_Construct_UClass_ASV_InteractableBase_Statics; \
public: \
	DECLARE_CLASS(ASV_InteractableBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Steamwell"), NO_API) \
	DECLARE_SERIALIZER(ASV_InteractableBase)


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASV_InteractableBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASV_InteractableBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_InteractableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_InteractableBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_InteractableBase(ASV_InteractableBase&&); \
	NO_API ASV_InteractableBase(const ASV_InteractableBase&); \
public: \
	NO_API virtual ~ASV_InteractableBase();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASV_InteractableBase(ASV_InteractableBase&&); \
	NO_API ASV_InteractableBase(const ASV_InteractableBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASV_InteractableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASV_InteractableBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASV_InteractableBase) \
	NO_API virtual ~ASV_InteractableBase();


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_9_PROLOG
#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_RPC_WRAPPERS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_INCLASS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_SPARSE_DATA \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_ACCESSORS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMWELL_API UClass* StaticClass<class ASV_InteractableBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_maxxm_Desktop_3d_capstone_steamwell_Source_Steamwell_Public_Items_SV_InteractableBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
