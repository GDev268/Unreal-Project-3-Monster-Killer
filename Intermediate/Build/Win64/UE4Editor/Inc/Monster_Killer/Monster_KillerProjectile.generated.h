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
#ifdef MONSTER_KILLER_Monster_KillerProjectile_generated_h
#error "Monster_KillerProjectile.generated.h already included, missing '#pragma once' in Monster_KillerProjectile.h"
#endif
#define MONSTER_KILLER_Monster_KillerProjectile_generated_h

#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_SPARSE_DATA
#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster_KillerProjectile(); \
	friend struct Z_Construct_UClass_AMonster_KillerProjectile_Statics; \
public: \
	DECLARE_CLASS(AMonster_KillerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Killer"), NO_API) \
	DECLARE_SERIALIZER(AMonster_KillerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMonster_KillerProjectile(); \
	friend struct Z_Construct_UClass_AMonster_KillerProjectile_Statics; \
public: \
	DECLARE_CLASS(AMonster_KillerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Killer"), NO_API) \
	DECLARE_SERIALIZER(AMonster_KillerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster_KillerProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster_KillerProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_KillerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_KillerProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_KillerProjectile(AMonster_KillerProjectile&&); \
	NO_API AMonster_KillerProjectile(const AMonster_KillerProjectile&); \
public:


#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_KillerProjectile(AMonster_KillerProjectile&&); \
	NO_API AMonster_KillerProjectile(const AMonster_KillerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_KillerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_KillerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster_KillerProjectile)


#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMonster_KillerProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMonster_KillerProjectile, ProjectileMovement); }


#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_12_PROLOG
#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_SPARSE_DATA \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_RPC_WRAPPERS \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_INCLASS \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_SPARSE_DATA \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTER_KILLER_API UClass* StaticClass<class AMonster_KillerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Monster_Killer_Source_Monster_Killer_Monster_KillerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
