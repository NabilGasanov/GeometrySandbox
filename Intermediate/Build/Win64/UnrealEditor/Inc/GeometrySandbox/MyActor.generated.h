// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYSANDBOX_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define GEOMETRYSANDBOX_MyActor_generated_h

#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_SPARSE_DATA
#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_RPC_WRAPPERS
#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometrySandbox"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometrySandbox"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Amplitude() { return STRUCT_OFFSET(AMyActor, Amplitude); } \
	FORCEINLINE static uint32 __PPO__Frequincy() { return STRUCT_OFFSET(AMyActor, Frequincy); } \
	FORCEINLINE static uint32 __PPO__WeaponsNum() { return STRUCT_OFFSET(AMyActor, WeaponsNum); } \
	FORCEINLINE static uint32 __PPO__KillsNum() { return STRUCT_OFFSET(AMyActor, KillsNum); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AMyActor, Health); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(AMyActor, IsDead); } \
	FORCEINLINE static uint32 __PPO__HasWeapon() { return STRUCT_OFFSET(AMyActor, HasWeapon); }


#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_10_PROLOG
#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_SPARSE_DATA \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_RPC_WRAPPERS \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_INCLASS \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_PRIVATE_PROPERTY_OFFSET \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_SPARSE_DATA \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_INCLASS_NO_PURE_DECLS \
	GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSANDBOX_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GeometrySandbox_Source_GeometrySandbox_Public_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
