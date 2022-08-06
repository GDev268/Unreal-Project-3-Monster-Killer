// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Monster_Killer : ModuleRules
{
	public Monster_Killer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
