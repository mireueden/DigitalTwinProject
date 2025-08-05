// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DigitalTwinProject : ModuleRules
{
	public DigitalTwinProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
