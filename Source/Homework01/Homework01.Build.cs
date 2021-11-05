// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Homework01 : ModuleRules
{
	public Homework01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
