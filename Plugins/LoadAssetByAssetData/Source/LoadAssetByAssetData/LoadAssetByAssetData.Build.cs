// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;
namespace UnrealBuildTool.Rules
{
	public class LoadAssetByAssetData : ModuleRules
	{
		public LoadAssetByAssetData(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
			PrivateIncludePaths.Add("LoadAssetByAssetData/Private");

			PublicIncludePaths.AddRange(
				new string[] {
					// ... add public include paths required here ...
				}
				);
					
			
			PrivateIncludePaths.AddRange(
				new string[] {
					// ... add other private include paths required here ...
				}
				);
				
			
			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					// ... add other public dependencies that you statically link with here ...
				}
				);
				
			
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"CoreUObject",
					"Engine",
					"Slate",
					"SlateCore",
					// ... add private dependencies that you statically link with here ...	
				}
				);
			
			
			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
			);
		}
	}
}
