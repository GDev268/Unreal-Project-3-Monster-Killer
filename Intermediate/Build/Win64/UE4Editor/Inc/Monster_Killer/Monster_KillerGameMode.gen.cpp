// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monster_Killer/Monster_KillerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster_KillerGameMode() {}
// Cross Module References
	MONSTER_KILLER_API UClass* Z_Construct_UClass_AMonster_KillerGameMode_NoRegister();
	MONSTER_KILLER_API UClass* Z_Construct_UClass_AMonster_KillerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Monster_Killer();
// End Cross Module References
	void AMonster_KillerGameMode::StaticRegisterNativesAMonster_KillerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMonster_KillerGameMode_NoRegister()
	{
		return AMonster_KillerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMonster_KillerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_KillerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Monster_Killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_KillerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Monster_KillerGameMode.h" },
		{ "ModuleRelativePath", "Monster_KillerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonster_KillerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster_KillerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonster_KillerGameMode_Statics::ClassParams = {
		&AMonster_KillerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonster_KillerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_KillerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonster_KillerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonster_KillerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonster_KillerGameMode, 2054022623);
	template<> MONSTER_KILLER_API UClass* StaticClass<AMonster_KillerGameMode>()
	{
		return AMonster_KillerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonster_KillerGameMode(Z_Construct_UClass_AMonster_KillerGameMode, &AMonster_KillerGameMode::StaticClass, TEXT("/Script/Monster_Killer"), TEXT("AMonster_KillerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster_KillerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
