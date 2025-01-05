using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules
{
    public class CriWareRuntime : ModuleRules {
        public CriWareRuntime(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            bLegacyPublicIncludePaths = false;
            ShadowVariableWarningLevel = WarningLevel.Warning;

            PublicDependencyModuleNames.AddRange(new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "MovieScene",
            });
            PrivateDependencyModuleNames.AddRange(
                    new string[] {
                    "CoreUObject",
                    "RHI",
                    "RenderCore",
                    "SlateCore",
                    "HeadMountedDisplay",
                    "Projects"
                    }
           );
            /*string engine_path = System.IO.Path.GetFullPath(Target.RelativeEnginePath);
            PrivateIncludePaths.AddRange(
                    new string[] {
                    engine_path + "Source/Runtime/Engine/Private",
                    }
            );*/
            /* Intel Media SDK */
            /*if (Target.Platform == UnrealTargetPlatform.Win64 ||
                Target.Platform == UnrealTargetPlatform.Win32)
            {
                string IntelDir = "/../../Binaries/ThirdParty/Intel/";
                string LibName = Target.Platform == UnrealTargetPlatform.Win64 ? "libmfxsw64.dll" : "libmfxsw32.dll";
                string LibPath = IntelDir + Target.Platform.ToString() + "/" + LibName;
                if (File.Exists(ModuleDirectory + LibPath))
                {
                    RuntimeDependencies.Add(ModuleDirectory + LibPath, StagedFileType.NonUFS);

                }
            } */
        }
    }
}
