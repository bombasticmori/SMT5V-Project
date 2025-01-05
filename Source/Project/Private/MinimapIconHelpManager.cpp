#include "MinimapIconHelpManager.h"

UMinimapIconHelpManager::UMinimapIconHelpManager() {
}

UMinimapIconHelpManager* UMinimapIconHelpManager::GetMinimapIconHelpManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FMinimapIconHelpEntry> UMinimapIconHelpManager::GetDisplayList(int32 mapId) {
    return TArray<FMinimapIconHelpEntry>();
}


