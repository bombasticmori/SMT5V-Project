#include "MapSelectManager.h"

UMapSelectManager::UMapSelectManager() {
    this->m_ParentCursor = 0;
    this->m_ChildCursor = 0;
    this->m_Step = E_MAP_SELECT_STEP::None;
}

void UMapSelectManager::ToParentStep() {
}

void UMapSelectManager::ToChildStep(int32 ParentIndex) {
}

void UMapSelectManager::Start() {
}

bool UMapSelectManager::SharesParent(int32 MapIdA, int32 AreaIdA, int32 MapIdB, int32 AreaIdB) const {
    return false;
}

int32 UMapSelectManager::SearchParentIndexByMapId(int32 mapId, int32 AreaId, bool& OutFound) const {
    return 0;
}

FMinimapMapSelectItem UMapSelectManager::SearchItemByMapId(int32 mapId, int32 AreaId, bool& OutFound) const {
    return FMinimapMapSelectItem{};
}

int32 UMapSelectManager::SearchChildIndexByMapId(int32 mapId, int32 AreaId, bool& OutFound) const {
    return 0;
}

FMinimapMapSelectItem UMapSelectManager::GetParentItemByIndex(int32 Cursor, bool& OutFound) const {
    return FMinimapMapSelectItem{};
}

TArray<FText> UMapSelectManager::getMessageList() {
    return TArray<FText>();
}

UMapSelectManager* UMapSelectManager::GetMapSelectManager(const UObject* WorldContextObject) {
    return NULL;
}

FMinimapMapSelectItem UMapSelectManager::GetFirstChildItem(int32 Cursor, bool& OutFound) const {
    return FMinimapMapSelectItem{};
}

FMinimapMapSelectItem UMapSelectManager::GetDataItemByIndex(int32 Cursor, bool& OutFound) const {
    return FMinimapMapSelectItem{};
}

FMinimapMapSelectItem UMapSelectManager::GetChildItemByIndex(int32 Cursor, bool& OutFound) const {
    return FMinimapMapSelectItem{};
}


