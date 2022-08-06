// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monster_Killer/MonsterKillerGamemode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterKillerGamemode() {}
// Cross Module References
	MONSTER_KILLER_API UClass* Z_Construct_UClass_AMonsterKillerGamemode_NoRegister();
	MONSTER_KILLER_API UClass* Z_Construct_UClass_AMonsterKillerGamemode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Monster_Killer();
// End Cross Module References
	void AMonsterKillerGamemode::StaticRegisterNativesAMonsterKillerGamemode()
	{
	}
	UClass* Z_Construct_UClass_AMonsterKillerGamemode_NoRegister()
	{
		return AMonsterKillerGamemode::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterKillerGamemode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterKillerGamemode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Monster_Killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterKillerGamemode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MonsterKillerGamemode.h" },
		{ "ModuleRelativePath", "MonsterKillerGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterKillerGamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterKillerGamemode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterKillerGamemode_Statics::ClassParams = {
		&AMonsterKillerGamemode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterKillerGamemode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterKillerGamemode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterKillerGamemode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterKillerGamemode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterKillerGamemode, 3341987698);
	template<> MONSTER_KILLER_API UClass* StaticClass<AMonsterKillerGamemode>()
	{
		return AMonsterKillerGamemode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterKillerGamemode(Z_Construct_UClass_AMonsterKillerGamemode, &AMonsterKillerGamemode::StaticClass, TEXT("/Script/Monster_Killer"), TEXT("AMonsterKillerGamemode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterKillerGamemode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
