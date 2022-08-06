// Copyright Epic Games, Inc. All Rights Reserved.

#include "Monster_KillerGameMode.h"
#include "Monster_KillerHUD.h"
#include "Monster_KillerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMonster_KillerGameMode::AMonster_KillerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMonster_KillerHUD::StaticClass();
}
