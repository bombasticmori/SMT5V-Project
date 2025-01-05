#include "SubLevelVisibilityManager.h"

USubLevelVisibilityManager::USubLevelVisibilityManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = false;
}

void USubLevelVisibilityManager::RegisterVibilityVolume(ASubLevelVisibilityVolume* InSubLevelVisibilityVolume) {
}

void USubLevelVisibilityManager::ProcessVisibilityVolume(const FVector& ViewLocation) {
}

void USubLevelVisibilityManager::Init() {
}


