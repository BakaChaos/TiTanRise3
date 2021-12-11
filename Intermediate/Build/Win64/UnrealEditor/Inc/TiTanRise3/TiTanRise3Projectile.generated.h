// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TITANRISE3_TiTanRise3Projectile_generated_h
#error "TiTanRise3Projectile.generated.h already included, missing '#pragma once' in TiTanRise3Projectile.h"
#endif
#define TITANRISE3_TiTanRise3Projectile_generated_h

#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_SPARSE_DATA
#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATiTanRise3Projectile(); \
	friend struct Z_Construct_UClass_ATiTanRise3Projectile_Statics; \
public: \
	DECLARE_CLASS(ATiTanRise3Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TiTanRise3"), NO_API) \
	DECLARE_SERIALIZER(ATiTanRise3Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATiTanRise3Projectile(); \
	friend struct Z_Construct_UClass_ATiTanRise3Projectile_Statics; \
public: \
	DECLARE_CLASS(ATiTanRise3Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TiTanRise3"), NO_API) \
	DECLARE_SERIALIZER(ATiTanRise3Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATiTanRise3Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATiTanRise3Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATiTanRise3Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATiTanRise3Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATiTanRise3Projectile(ATiTanRise3Projectile&&); \
	NO_API ATiTanRise3Projectile(const ATiTanRise3Projectile&); \
public:


#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATiTanRise3Projectile(ATiTanRise3Projectile&&); \
	NO_API ATiTanRise3Projectile(const ATiTanRise3Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATiTanRise3Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATiTanRise3Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATiTanRise3Projectile)


#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATiTanRise3Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATiTanRise3Projectile, ProjectileMovement); }


#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_12_PROLOG
#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_SPARSE_DATA \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_RPC_WRAPPERS \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_INCLASS \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_SPARSE_DATA \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_INCLASS_NO_PURE_DECLS \
	TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TITANRISE3_API UClass* StaticClass<class ATiTanRise3Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TiTanRise3_Source_TiTanRise3_TiTanRise3Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
