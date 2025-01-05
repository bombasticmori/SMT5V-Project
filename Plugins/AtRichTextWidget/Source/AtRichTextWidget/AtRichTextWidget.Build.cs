using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules {
	public class AtRichTextWidget : ModuleRules {
		public AtRichTextWidget(ReadOnlyTargetRules Target) : base(Target) {
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bLegacyPublicIncludePaths = false;
			ShadowVariableWarningLevel = WarningLevel.Warning;
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
			PrivateIncludePaths.Add("AtRichTextWidget/Private");
			
			PublicDependencyModuleNames.AddRange(new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"SlateCore",
				"UMG",
			});
		}
	}
}
