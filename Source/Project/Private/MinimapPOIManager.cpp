#include "MinimapPOIManager.h"

UMinimapPOIManager::UMinimapPOIManager() {
}

bool UMinimapPOIManager::UnregisterDynamicPOIByOwner(AActor* Owner) {
    return false;
}

bool UMinimapPOIManager::SetControlActorToStatic(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, AActor* ControlActor) {
    return false;
}

void UMinimapPOIManager::ResetDynamicPOI() {
}

void UMinimapPOIManager::RegisterDynamicPOI(const FMinimapPOIParam& InParam, AActor* Owner, bool Show3D, FVector WorldLocationOffset) {
}

int32 UMinimapPOIManager::GetRenderEntriesMax() const {
    return 0;
}

TArray<FMinimapPOIEntry> UMinimapPOIManager::GetRenderEntries() {
    return TArray<FMinimapPOIEntry>();
}

bool UMinimapPOIManager::Delete3DIconByOwner(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, AActor* Owner) {
    return false;
}

bool UMinimapPOIManager::Delete3DIconByDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId) {
    return false;
}

bool UMinimapPOIManager::ClearControlActorFromStatic(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId) {
    return false;
}

bool UMinimapPOIManager::ChangeDynamicPOIIconByOwner(E_MINIMAP_POI_TYPE POIType, AActor* Owner, E_MINIMAP_POI_ICON NewIcon) {
    return false;
}


