#include "FrameRateManager.h"

UFrameRateManager::UFrameRateManager() {
}

void UFrameRateManager::SetDebugMode(bool bActive, float Fps) {
}

void UFrameRateManager::OnMaxFpsOptionChanged(float NewMaxFPS) {
}

void UFrameRateManager::OnBGMSceneChanged(EBgmScene NewScene) {
}

bool UFrameRateManager::GetDebugMode() const {
    return false;
}

float UFrameRateManager::GetCurrentFrameRateLimit() const {
    return 0.0f;
}

UFrameRateManager* UFrameRateManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


