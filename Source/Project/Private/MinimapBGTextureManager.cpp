#include "MinimapBGTextureManager.h"

UMinimapBGTextureManager::UMinimapBGTextureManager() {
}

UMinimapBGTextureEntry* UMinimapBGTextureManager::SearchEntry(int32 mapId, int32 AreaId) {
    return NULL;
}

void UMinimapBGTextureManager::ReleaseResourceOther(int32 KeepMapId, int32 KeepAreaId, int32 PlayerMapId, int32 PlayerAreaId) {
}

void UMinimapBGTextureManager::ReleaseResourceByMapId(int32 mapId, int32 AreaId) {
}

void UMinimapBGTextureManager::ReleaseResourceAll() {
}

UMinimapBGTextureEntry* UMinimapBGTextureManager::RegisterLoadedTexture(UObject* Object, int32 mapId, int32 AreaId) {
    return NULL;
}

void UMinimapBGTextureManager::RegisterAll(const FMinimapAreaTable& AreaTable) {
}

UMinimapBGTextureEntry* UMinimapBGTextureManager::LoadBlocking(TSoftObjectPtr<UObject> SoftObjectReference, int32 mapId, int32 AreaId) {
    return NULL;
}

UMinimapBGTextureEntry* UMinimapBGTextureManager::GetLoadedEntry(int32 mapId, int32 AreaId) {
    return NULL;
}


