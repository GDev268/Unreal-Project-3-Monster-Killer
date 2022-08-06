// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTER_KILLER_Monster_KillerCharacter_generated_h
#error "Monster_KillerCharacter.generated.h already included, missing '#pragma once' in Monster_KillerCharacter.h"
#endif
#define MONSTER_KILLER_Monster_KillerCharacter_generated_h

#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_SPARSE_DATA
#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_RPC_WRAPPERS
#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster_KillerCharacter(); \
	friend struct Z_Construct_UClass_AMonster_KillerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMonster_KillerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Killer"), NO_API) \
	DECLARE_SERIALIZER(AMonster_KillerCharacter)


#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMonster_KillerCharacter(); \
	friend struct Z_Construct_UClass_AMonster_KillerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMonster_KillerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Killer"), NO_API) \
	DECLARE_SERIALIZER(AMonster_KillerCharacter)


#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster_KillerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster_KillerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_KillerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_KillerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_KillerCharacter(AMonster_KillerCharacter&&); \
	NO_API AMonster_KillerCharacter(const AMonster_KillerCharacter&); \
public:


#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_KillerCharacter(AMonster_KillerCharacter&&); \
	NO_API AMonster_KillerCharacter(const AMonster_KillerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_KillerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_KillerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster_KillerCharacter)


#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMonster_KillerCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMonster_KillerCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMonster_KillerCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMonster_KillerCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMonster_KillerCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMonster_KillerCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMonster_KillerCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMonster_KillerCharacter, L_MotionController); }


#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_17_PROLOG
#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_SPARSE_DATA \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_RPC_WRAPPERS \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_INCLASS \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_SPARSE_DATA \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTER_KILLER_API UClass* StaticClass<class AMonster_KillerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Monster_Killer_Source_Monster_Killer_Monster_KillerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
