// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monster_Killer/Monster_KillerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster_KillerHUD() {}
// Cross Module References
	MONSTER_KILLER_API UClass* Z_Construct_UClass_AMonster_KillerHUD_NoRegister();
	MONSTER_KILLER_API UClass* Z_Construct_UClass_AMonster_KillerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Monster_Killer();
// End Cross Module References
	void AMonster_KillerHUD::StaticRegisterNativesAMonster_KillerHUD()
	{
	}
	UClass* Z_Construct_UClass_AMonster_KillerHUD_NoRegister()
	{
		return AMonster_KillerHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMonster_KillerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_KillerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Monster_Killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_KillerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Monster_KillerHUD.h" },
		{ "ModuleRelativePath", "Monster_KillerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonster_KillerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster_KillerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonster_KillerHUD_Statics::ClassParams = {
		&AMonster_KillerHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonster_KillerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_KillerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonster_KillerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonster_KillerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonster_KillerHUD, 1015326379);
	template<> MONSTER_KILLER_API UClass* StaticClass<AMonster_KillerHUD>()
	{
		return AMonster_KillerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonster_KillerHUD(Z_Construct_UClass_AMonster_KillerHUD, &AMonster_KillerHUD::StaticClass, TEXT("/Script/Monster_Killer"), TEXT("AMonster_KillerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster_KillerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
