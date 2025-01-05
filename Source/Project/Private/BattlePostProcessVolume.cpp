#include "BattlePostProcessVolume.h"

ABattlePostProcessVolume::ABattlePostProcessVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ABattlePostProcessVolume::SetExposureCompensation(bool IsOverride, float ExposureCompensation) {
}

void ABattlePostProcessVolume::RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject) {
}

void ABattlePostProcessVolume::GetExposureCompensation(bool& OutIsOverride, float& OutExposureCompensation) {
}

float ABattlePostProcessVolume::GetCurrentActiveExposureCompensation(TArray<APostProcessVolume*> PostProcessVolumes, FVector ViewLocation) {
    return 0.0f;
}


