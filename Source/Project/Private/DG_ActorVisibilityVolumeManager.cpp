#include "DG_ActorVisibilityVolumeManager.h"

UDG_ActorVisibilityVolumeManager::UDG_ActorVisibilityVolumeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = false;
    this->bForceShowAll = false;
    this->bForceHideAll = false;
    this->bForceUpdateAll = false;
}

void UDG_ActorVisibilityVolumeManager::ShowAll() {
}

void UDG_ActorVisibilityVolumeManager::RegisterVibilityVolume(ADG_ActorVisibilityVolume* InActorVisibilityVolumeVolume) {
}

void UDG_ActorVisibilityVolumeManager::ProcessVisibilityVolume(const FVector& ViewLocation) {
}

void UDG_ActorVisibilityVolumeManager::Init() {
}


