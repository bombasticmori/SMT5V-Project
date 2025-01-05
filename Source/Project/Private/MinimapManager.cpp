#include "MinimapManager.h"

UMinimapManager::UMinimapManager() {
    this->m_Map3DIconNum = 0;
    this->m_FogGridManager = NULL;
    this->m_POIManager = NULL;
    this->m_FootprintManager = NULL;
    this->m_BGTextureManager = NULL;
    this->m_MapSelectManager = NULL;
    this->m_IconHelpManager = NULL;
    this->m_RadarManager = NULL;
    this->m_PopUpIconManager = NULL;
    this->m_CoasterLineManager = NULL;
    this->m_CoasterLineMinimap = NULL;
}

FVector UMinimapManager::WorldToScreenScale(const FVector& Dimensions, const FVector& CanvasSize, float Zoom) {
    return FVector{};
}

void UMinimapManager::UpdateTopCameraIcon(const FVector& CameraLocation, float CameraRotateZ, const FVector& HeroLocation, float HeroRotateZ, const UObject* WorldContextObject) {
}

void UMinimapManager::UpdateRender(const FMinimapRenderParam& RenderParam) {
}

void UMinimapManager::UpdateMap3DIcon(const FVector& PlayerLocation, const UObject* WorldContextObject) {
}

void UMinimapManager::UpdateIconRenderImages() {
}

void UMinimapManager::UpdateFootprintByPlayerMovement(const FTransform& PlayerTransform, float DeltaTime, int32 mapId, int32 AreaId) {
}

void UMinimapManager::UpdateFogGridTexture(UTexture* TargetTexture, int32 mapId, int32 AreaId) {
}

void UMinimapManager::UpdateByPlayerMovement(const FTransform& PlayerTransform, float DeltaTime, int32 mapId, int32 AreaId, float FogGridOpenRadius, const FVector& CanvasSize) {
}

bool UMinimapManager::UnregisterDynamicPOIByOwner(AActor* Owner) {
    return false;
}

void UMinimapManager::ToggleIconHideByUI(E_MINIMAP_POI_ICON icon) {
}

void UMinimapManager::StartCoasterLineMode() {
}

void UMinimapManager::StartCoasterLineMinimapMode(int32 DataId) {
}

void UMinimapManager::SetShowingId(int32 mapId, int32 AreaId) {
}

void UMinimapManager::SetShowFlagFromUniqueId(int32 SaveUniqueId, bool ShowFlag) {
}

void UMinimapManager::SetShowFlagFromMapId(int32 mapId, int32 AreaId, int32 SaveId, bool ShowFlag) {
}

void UMinimapManager::SetShowFlagAll(bool ShowFlag) {
}

void UMinimapManager::SetPlayerId(int32 mapId, int32 AreaId) {
}

void UMinimapManager::SetMapSelectReachFlagAll(bool Value) {
}

void UMinimapManager::SetMapSelectReachFlag(int32 mapId, int32 AreaId) {
}

void UMinimapManager::SetIconMaterial(UMaterialInterface* MaterialInterface) {
}

void UMinimapManager::SetIconHideByUIAll(bool IsHide) {
}

void UMinimapManager::SetIconHideByUI(E_MINIMAP_POI_ICON icon, bool IsHide) {
}

void UMinimapManager::SetIconFogGridFlagFromUniqueId(int32 SaveUniqueId, bool ShowFlag) {
}

void UMinimapManager::SetIconFogGridFlagFromDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, bool ShowFlag) {
}

void UMinimapManager::SetFootprintDistance(float targetDistance) {
}

bool UMinimapManager::SetControlActorToStatic(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, AActor* ControlActor) {
    return false;
}

void UMinimapManager::SetCoasterLineMinimapImageAndMaterial(UImage* Image, UMaterialInterface* MaterialInterface) {
}

void UMinimapManager::SetCoasterLineMaterial(UMaterialInterface* MaterialInterface) {
}

FMinimapAreaTableItem UMinimapManager::SearchItem(int32 mapId, int32 AreaId) {
    return FMinimapAreaTableItem{};
}

void UMinimapManager::ResetDynamicPOI() {
}

bool UMinimapManager::RemoveRadarBySaveUniqueId(int32 mapId, int32 AreaId, int32 SaveUniqueId) {
    return false;
}

bool UMinimapManager::RemoveRadarByDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId) {
    return false;
}

bool UMinimapManager::RemoveRadarAll() {
    return false;
}

bool UMinimapManager::RegisterRadarBySaveUniqueId(int32 mapId, int32 AreaId, int32 SaveUniqueId) {
    return false;
}

bool UMinimapManager::RegisterRadarByDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId) {
    return false;
}

void UMinimapManager::RegisterMinimapIconTableAll(UDataTable* DataTable) {
}

void UMinimapManager::RegisterDynamicPOI(const FMinimapPOIParam& InParam, AActor* Owner, bool Show3D, FVector WorldLocationOffset) {
}

void UMinimapManager::PrintLog() {
}

void UMinimapManager::MakeUpMapSelect(UObject* pObject) {
}

void UMinimapManager::MakeUpIconHelp(UObject* pTable, UScriptMessageAsset* pNameMessage, UScriptMessageAsset* pHelpMessage) {
}

void UMinimapManager::MakeUpAreaTable(UObject* pObject, UObject* pOverrideObject) {
}

bool UMinimapManager::IsVisibleByFogGridRadius(int32 mapId, int32 AreaId, const FVector& Location, float Radius) const {
    return false;
}

bool UMinimapManager::IsVisibleByFogGrid(int32 mapId, int32 AreaId, const FVector& Location) const {
    return false;
}

bool UMinimapManager::IsShowingPlayerId() {
    return false;
}

bool UMinimapManager::IsPlayerId(int32 mapId, int32 AreaId) {
    return false;
}

bool UMinimapManager::IsIconHideByUI(E_MINIMAP_POI_ICON icon) {
    return false;
}

void UMinimapManager::InitAfterResource() {
}

FMap3DIconEntry UMinimapManager::GetTopCameraPlayerIcon() const {
    return FMap3DIconEntry{};
}

TArray<FMap3DIconEntry> UMinimapManager::GetTopCameraIconEntries() {
    return TArray<FMap3DIconEntry>();
}

FMinimapPOIEntry UMinimapManager::GetStaticMinimapEntryBySaveUniqueId(int32 mapId, int32 AreaId, int32 SaveUniqueId, bool& Found) {
    return FMinimapPOIEntry{};
}

FMinimapPOIEntry UMinimapManager::GetStaticMinimapEntry(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, bool& Found) {
    return FMinimapPOIEntry{};
}

void UMinimapManager::GetShowingId(int32& OutMapId, int32& OutAreaId) {
}

bool UMinimapManager::GetShowFlagFromUniqueId(int32 SaveUniqueId) {
    return false;
}

bool UMinimapManager::GetShowFlagFromMapId(int32 mapId, int32 AreaId, int32 SaveId) const {
    return false;
}

int32 UMinimapManager::GetSaveUniqueIdFromDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, E_MINIMAP_POI_ICON icon, int32 DataId) const {
    return 0;
}

int32 UMinimapManager::GetSaveUniqueId(int32 mapId, int32 AreaId, int32 SaveId) const {
    return 0;
}

int32 UMinimapManager::GetRadarRegisteredCount() {
    return 0;
}

TArray<FMinimapRadarEntry> UMinimapManager::GetRadarEntries() {
    return TArray<FMinimapRadarEntry>();
}

UPopUpIconManager* UMinimapManager::GetPopUpIconManager() {
    return NULL;
}

TArray<FMinimapPOIEntry> UMinimapManager::GetPOIRenderEntries() {
    return TArray<FMinimapPOIEntry>();
}

FVector UMinimapManager::GetPlayerScreenLocation() {
    return FVector{};
}

void UMinimapManager::GetPlayerId(int32& OutMapId, int32& OutAreaId) {
}

TArray<FVector> UMinimapManager::GetOnOffEffectArrayRyuketsu(int32& OutNum) {
    return TArray<FVector>();
}

TArray<FVector> UMinimapManager::GetOnOffEffectArrayAll(int32& OutNum) {
    return TArray<FVector>();
}

TArray<FVector> UMinimapManager::GetOnOffEffectArray(E_MINIMAP_POI_ICON icon, int32& OutNum) {
    return TArray<FVector>();
}

bool UMinimapManager::GetNextAreaInMap(int32 MyMapId, int32 MyAreaId, int32 Direction, bool IsTrigger, int32& OutMapId, int32& OutAreaId) const {
    return false;
}

UMinimapManager* UMinimapManager::GetMinimapManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UMinimapManager::GetMapSelectReachFlag(int32 mapId, int32 AreaId) {
    return false;
}

UMapSelectManager* UMinimapManager::GetMapSelectManager() {
    return NULL;
}

FText UMinimapManager::GetMapName(int32 mapId, int32 AreaId) {
    return FText::GetEmpty();
}

TArray<FMap3DIconEntry> UMinimapManager::GetMap3DIconEntries() {
    return TArray<FMap3DIconEntry>();
}

E_MINIMAP_POI_ICON UMinimapManager::GetIconToRenderMission(int32 MissionId) {
    return E_MINIMAP_POI_ICON::E_MINIMAP_POI_ICON_NONE;
}

void UMinimapManager::GetIconMaterialTopCamera(E_MINIMAP_POI_ICON icon, float& OutU, float& OutV, FLinearColor& OutColor) {
}

void UMinimapManager::GetIconMaterial3D(E_MINIMAP_POI_ICON icon, float& OutU, float& OutV, FLinearColor& OutColor) {
}

void UMinimapManager::GetIconMaterial(E_MINIMAP_POI_ICON icon, float& OutU, float& OutV, FLinearColor& OutColor) {
}

TArray<UImage*> UMinimapManager::GetIconImageArray() {
    return TArray<UImage*>();
}

UMinimapIconHelpManager* UMinimapManager::GetIconHelpManager() {
    return NULL;
}

bool UMinimapManager::GetIconFogGridFlagFromUniqueId(int32 SaveUniqueId) {
    return false;
}

UMinimapFootprintManager* UMinimapManager::GetFootprintManager() {
    return NULL;
}

TArray<FMinimapFootprintEntry> UMinimapManager::GetFootprintEntries() {
    return TArray<FMinimapFootprintEntry>();
}

UTexture* UMinimapManager::GetFogGridTexture() {
    return NULL;
}

TArray<FMinimapCoasterLineRenderEntry> UMinimapManager::GetCoasterLineRenderEntries() {
    return TArray<FMinimapCoasterLineRenderEntry>();
}

bool UMinimapManager::GetCoasterLineMode() {
    return false;
}

bool UMinimapManager::GetCoasterLineMinimapMode() {
    return false;
}

UImage* UMinimapManager::GetCoasterLineMinimapImage() {
    return NULL;
}

TArray<UImage*> UMinimapManager::GetCoasterLineImageArray() {
    return TArray<UImage*>();
}

UMinimapBGTextureManager* UMinimapManager::GetBGTextureManager() {
    return NULL;
}

int32 UMinimapManager::GetAreaInMapNum() {
    return 0;
}

void UMinimapManager::FogGridSetOpenAll(int32 mapId, int32 AreaId, bool IsOpen) {
}

void UMinimapManager::FogGridOpen(const FTransform& PlayerTransform, int32 mapId, int32 AreaId, float Radius) {
}

void UMinimapManager::FogGridEnable(bool isEnable) {
}

void UMinimapManager::FinishCoasterLineMode() {
}

void UMinimapManager::FinishCoasterLineMinimapMode() {
}

bool UMinimapManager::Delete3DIconByOwner(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, AActor* Owner) {
    return false;
}

bool UMinimapManager::Delete3DIconByDataId(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId) {
    return false;
}

bool UMinimapManager::ClearControlActorFromStatic(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId) {
    return false;
}

bool UMinimapManager::ChangeDynamicPOIIconByOwner(E_MINIMAP_POI_TYPE POIType, AActor* Owner, E_MINIMAP_POI_ICON NewIcon) {
    return false;
}

E_MINIMAP_VISIBILITY UMinimapManager::CalcScreenLocation(FVector& OutScreenLocation, const FVector& LocationInWorld, const FVector2D& DrawOffset, const FMinimapRenderParam& RenderParam, bool IsShowFar, bool IsCalcOuter, float& OutDist2) {
    return E_MINIMAP_VISIBILITY::INVISIBLE;
}

float UMinimapManager::CalcAllZoomDefault(int32 mapId, int32 AreaId, const FMinimapAreaTableItem& AreaTableItem) {
    return 0.0f;
}

float UMinimapManager::CalcAllZoomArray(int32 mapId, int32 AreaId, const TArray<FVector> Locations) {
    return 0.0f;
}

FMinimapAreaTableItem UMinimapManager::ApplyOverrideToAreaTable(int32 mapId, int32 AreaId, const FMinimapAreaTableItem& AreaTableItem) {
    return FMinimapAreaTableItem{};
}

bool UMinimapManager::Add3DIcon(int32 mapId, int32 AreaId, E_MINIMAP_POI_TYPE POIType, int32 DataId, AActor* Owner, FVector WorldLocationOffset) {
    return false;
}


