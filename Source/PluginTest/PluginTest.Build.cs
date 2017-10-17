// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;

public class PluginTest : ModuleRules
{
	public PluginTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "MySQLConnectorUE4Plugin" });

		PrivateDependencyModuleNames.AddRange(new string[] { "MySQLConnectorUE4Plugin" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
