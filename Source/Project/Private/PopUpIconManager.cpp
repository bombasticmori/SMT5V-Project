#include "PopUpIconManager.h"

UPopUpIconManager::UPopUpIconManager() {
}

void UPopUpIconManager::UpdateRender(const FVector& PlayerLocation, const UObject* WorldContextObject) {
}

bool UPopUpIconManager::UnregisterByOwner(const ACustomPawn* Owner) {
    return false;
}

bool UPopUpIconManager::UnregisterByIndex(int32 Index) {
    return false;
}

bool UPopUpIconManager::Register(ACustomPawn* Owner, E_POP_UP_ICON_TYPE IconType) {
    return false;
}

int32 UPopUpIconManager::GetRenderEntriesMax() const {
    return 0;
}

TArray<FPopUpIconEntry> UPopUpIconManager::GetRenderEntries() {
    return TArray<FPopUpIconEntry>();
}

UPopUpIconManager* UPopUpIconManager::GetPopUpIconManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 UPopUpIconManager::CountShowingEntriesMax() const {
    return 0;
}


