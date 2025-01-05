#include "CustomPlayerCameraManager.h"

ACustomPlayerCameraManager::ACustomPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->bEnableQuartanionBlending = false;
    this->BlendCurve = NULL;
}


void ACustomPlayerCameraManager::ForceUpdateCameraCache() {
}


