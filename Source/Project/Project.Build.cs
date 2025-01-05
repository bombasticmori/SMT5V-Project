// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;
namespace UnrealBuildTool.Rules
{
	public class Project : ModuleRules
	{
		public Project(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bLegacyPublicIncludePaths = false;
			ShadowVariableWarningLevel = WarningLevel.Warning;
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
			PrivateIncludePaths.Add("Project/Private");
		
			PublicDependencyModuleNames.AddRange(new string[] {
				"AtRichTextWidget",
				"CinematicCamera",
				"Core",
				"CoreUObject",
				"CriWareRuntime",
				"Engine",
				"Foliage",
				"GameplayCameras",
				"InputCore",
				"KawaiiPhysics",
				"Landscape",
				"LevelSequence",
				"MovieScene",
				"MovieSceneTracks",
				"PhysicsCore",
				"UMG",
			});

			PrivateDependencyModuleNames.AddRange(new string[] {  });

			// Uncomment if you are using Slate UI
			PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
			
			// Uncomment if you are using online features
			// PrivateDependencyModuleNames.Add("OnlineSubsystem");

			// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
		}
	}
}