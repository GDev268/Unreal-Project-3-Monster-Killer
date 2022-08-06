// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Monster_KillerHUD.generated.h"

UCLASS()
class AMonster_KillerHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMonster_KillerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

