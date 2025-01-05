using System.IO;
using UnrealBuildTool;

public class BacktraceOnCrashpad : ModuleRules {
    public BacktraceOnCrashpad(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
        PrivateIncludePaths.Add("BacktraceOnCrashpad/Private");

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
        });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.Add("DesktopPlatform");
            PrivateDependencyModuleNames.Add("UnrealEd");
        }
    }
}
