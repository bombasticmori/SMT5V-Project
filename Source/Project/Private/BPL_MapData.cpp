#include "BPL_MapData.h"

UBPL_MapData::UBPL_MapData() {
}

void UBPL_MapData::UpdateRelicTimer(float deltaSec, bool bMapPause) {
}

void UBPL_MapData::UpdateAogamiDebrisTimer(float deltaSec, bool bMapPause) {
}

void UBPL_MapData::UnregisterMapSymbolSpawner(AActor* pActor) {
}

void UBPL_MapData::UnregisterMapSymbolActors(AActor* pActor) {
}

void UBPL_MapData::SetWaitingMapInfo(const TArray<FMapInfoData>& Info) {
}

void UBPL_MapData::SetTopCameraHeight(float Height) {
}

void UBPL_MapData::SetTimeAttackEncountAreaRandomSeed(int32 SaveId, int32 Seed) {
}

void UBPL_MapData::SetTimeAttackEncountAreaKillFlag(int32 SaveId, int32 Index, bool kill) {
}

void UBPL_MapData::SetTakaraFlag(int32 ID, bool flag) {
}

void UBPL_MapData::SetTakaraBreakFlag(int32 ID, bool flag) {
}

void UBPL_MapData::SetShinseiFlagAll(bool flag) {
}

void UBPL_MapData::SetShinseiFlag(int32 ID, bool flag) {
}

void UBPL_MapData::SetRyuketsuSaveAccess(bool access, FTransform warpPos) {
}

void UBPL_MapData::SetRyuketsuOpenAll(bool Open) {
}

void UBPL_MapData::SetRyuketsuOpen(int32 ID, bool Open) {
}

void UBPL_MapData::SetRyuketsuMinimapIconHideFlag(bool IsHide) {
}

void UBPL_MapData::SetRelicTimerAllZero() {
}

void UBPL_MapData::SetRelicTimer(int32 ID, float Timer) {
}

void UBPL_MapData::SetRelicTableIndex(int32 SaveId, int32 mapId, int32 Index) {
}

void UBPL_MapData::SetRelicOnceFlagAll(bool flag) {
}

void UBPL_MapData::SetRelicOnceFlag(int32 ID, bool flag) {
}

void UBPL_MapData::SetRelicGetIconUpdate(int32 SaveId, bool flag) {
}

void UBPL_MapData::SetRelicGetIcon(int32 SaveId, bool flag) {
}

void UBPL_MapData::SetRelicFlagAll(bool flag) {
}

void UBPL_MapData::SetRelicFlag(int32 ID, bool flag) {
}

void UBPL_MapData::SetPlayerPosForSave(FTransform PlayerPos) {
}

void UBPL_MapData::SetNearbySymbolCounter(UProjectGameInstanceBase* pGameInst, float counter) {
}

void UBPL_MapData::SetNearbySymbolAfterBattle(UProjectGameInstanceBase* pGameInst, bool flag) {
}

void UBPL_MapData::SetNaviDevilGimmickUniqueSaveID(int32 SaveId, bool flag) {
}

void UBPL_MapData::SetNaviDevilGimmickExistAll(bool exist) {
}

void UBPL_MapData::SetNaviDevilGimmickExist(int32 ID, bool exist) {
}

void UBPL_MapData::SetMinimapMaskOpenFlagAll(bool flag) {
}

bool UBPL_MapData::SetMinimapMaskOpenFlag(int32 minimapMaskID, bool flag) {
    return false;
}

void UBPL_MapData::SetMinimapLandmark(int32 mapId, int32 AreaId, float LocationX, float LocationY) {
}

void UBPL_MapData::SetMimanPositionFlag(int32 category, bool Open) {
}

void UBPL_MapData::SetMimanFlagAll(bool flag) {
}

void UBPL_MapData::SetMimanFlag(int32 ID, bool flag) {
}

void UBPL_MapData::SetMapSymbolDeadFlagAll(bool sw) {
}

void UBPL_MapData::SetMapSymbolDeadFlag(int32 ID, bool sw) {
}

void UBPL_MapData::SetMapID(int32 map_id) {
}

void UBPL_MapData::SetMagatsukaState(int32 ID, E_MAGATSUKA_STATE State) {
}

void UBPL_MapData::SetLastRyuketsuTableIndex(int32 tableIndex) {
}

void UBPL_MapData::SetCurrentNaviDevil(E_NAVI_DEVIL naviDevil) {
}

void UBPL_MapData::SetCurrentLevelCustom(bool Enable) {
}

void UBPL_MapData::SetCoasterOpenFlagAll(bool flag) {
}

void UBPL_MapData::SetCoasterOpenFlag(int32 ID, bool startGimmick, bool flag) {
}

void UBPL_MapData::SetBridgeNextMapID(int32 map_id) {
}

void UBPL_MapData::SetBridgeNextAreaID(int32 area_id) {
}

void UBPL_MapData::SetAreaID(int32 area_id) {
}

void UBPL_MapData::SetAogamiDebrisTimerAllZero() {
}

void UBPL_MapData::SetAogamiDebrisTimer(int32 tableIndex, float Timer) {
}

void UBPL_MapData::SetAogamiDebrisGetIconUpdate(int32 tableIndex, bool flag) {
}

void UBPL_MapData::SetAogamiDebrisGetIcon(int32 tableIndex, bool flag) {
}

void UBPL_MapData::SetAogamiDebrisFlagAll(bool flag) {
}

void UBPL_MapData::SetAogamiDebrisFlag(int32 tableIndex, bool flag) {
}

void UBPL_MapData::SetAllMapData(FMapData Data) {
}

void UBPL_MapData::SaveMapData_CPP(const UObject* WorldContextObject) {
}

void UBPL_MapData::Ryuketsu_AutoOpenAndClose(const UObject* WorldContextObject) {
}

void UBPL_MapData::ResetRotatorCount() {
}

void UBPL_MapData::ResetRelicGetCounter() {
}

void UBPL_MapData::ResetNaviDevilGimmickCheckCounter() {
}

void UBPL_MapData::ResetMinimapLandmark() {
}

void UBPL_MapData::ResetAogamiDebrisGetCounter() {
}

bool UBPL_MapData::RemoveWaitingMapInfo(int32 Index) {
    return false;
}

void UBPL_MapData::RegisterMapSymbolSpawner(AActor* pActor) {
}

void UBPL_MapData::RegisterMapSymbolActors(AActor* pActor) {
}

void UBPL_MapData::InitNaviDevilGimmickUniqueSaveID() {
}

void UBPL_MapData::InitMapData() {
}

TArray<FMapInfoData> UBPL_MapData::GetWaitingMapInfo() {
    return TArray<FMapInfoData>();
}

float UBPL_MapData::GetTopCameraHeight() {
    return 0.0f;
}

int32 UBPL_MapData::GetTimeAttackEncountAreaRandomSeed(int32 SaveId) {
    return 0;
}

TArray<bool> UBPL_MapData::GetTimeAttackEncountAreaKillFlags(int32 SaveId) {
    return TArray<bool>();
}

int32 UBPL_MapData::GetTakaraFlagMax() {
    return 0;
}

bool UBPL_MapData::GetTakaraFlag(int32 ID) {
    return false;
}

bool UBPL_MapData::GetTakaraBreakFlag(int32 ID) {
    return false;
}

int32 UBPL_MapData::GetShinseiGetNum() {
    return 0;
}

bool UBPL_MapData::GetRyuketsuMinimapIconHideFlag() {
    return false;
}

float UBPL_MapData::GetRelicTimer(int32 ID) {
    return 0.0f;
}

int32 UBPL_MapData::GetRelicSaveMax() {
    return 0;
}

int32 UBPL_MapData::GetRelicGetCounter() {
    return 0;
}

int32 UBPL_MapData::GetOtherCoasterMinimapID(int32 minimapID) {
    return 0;
}

float UBPL_MapData::GetNearbySymbolCounter(UProjectGameInstanceBase* pGameInst) {
    return 0.0f;
}

bool UBPL_MapData::GetNearbySymbolAfterBattle(UProjectGameInstanceBase* pGameInst) {
    return false;
}

int32 UBPL_MapData::GetNaviDevilID_FromEnum(E_NAVI_DEVIL naviDevil) {
    return 0;
}

int32 UBPL_MapData::GetNaviDevilGimmickCheckCounter() {
    return 0;
}

E_NAVI_DEVIL UBPL_MapData::GetNaviDevilEnum_FromDevilID(int32 DevilID) {
    return E_NAVI_DEVIL::E_NAVI_DEVIL_NONE;
}

bool UBPL_MapData::GetMinimapMaskOpenFlag(int32 minimapMaskID) {
    return false;
}

FMinimapLandmark UBPL_MapData::GetMinimapLandmark() {
    return FMinimapLandmark{};
}

int32 UBPL_MapData::GetMimanFoundNum_FromMap(int32 mapId) {
    return 0;
}

int32 UBPL_MapData::GetMimanFoundNum() {
    return 0;
}

TArray<AActor*> UBPL_MapData::GetMapSymbolSpawners() {
    return TArray<AActor*>();
}

int32 UBPL_MapData::GetMapSymbolParamIndex(int32 DevilID) {
    return 0;
}

TArray<AActor*> UBPL_MapData::GetMapSymbolActors() {
    return TArray<AActor*>();
}

int32 UBPL_MapData::GetMapID() {
    return 0;
}

FMapData UBPL_MapData::GetMapData() {
    return FMapData{};
}

E_MAGATSUKA_STATE UBPL_MapData::GetMagatsukaState(int32 ID) {
    return E_MAGATSUKA_STATE::E_MAGATSUKA_STATE_ACT;
}

int32 UBPL_MapData::GetMagatsukaBrokenNum() {
    return 0;
}

int32 UBPL_MapData::GetLastRyuketsuTableIndex() {
    return 0;
}

FName UBPL_MapData::GetDebugMenuPath_ChangeMimanNum() {
    return NAME_None;
}

int32 UBPL_MapData::GetCurrentNaviDevilID() {
    return 0;
}

E_NAVI_DEVIL UBPL_MapData::GetCurrentNaviDevil() {
    return E_NAVI_DEVIL::E_NAVI_DEVIL_NONE;
}

int32 UBPL_MapData::GetCoasterSaveID_FromMinimapID(int32 minimapID) {
    return 0;
}

int32 UBPL_MapData::GetCoasterMinimapID_FromSaveID(int32 SaveId, bool startGimmick) {
    return 0;
}

int32 UBPL_MapData::GetBridgeNextMapID() {
    return 0;
}

int32 UBPL_MapData::GetBridgeNextAreaID() {
    return 0;
}

int32 UBPL_MapData::GetAreaID() {
    return 0;
}

float UBPL_MapData::GetAogamiDebrisTimer(int32 tableIndex) {
    return 0.0f;
}

int32 UBPL_MapData::GetAogamiDebrisGetCounter() {
    return 0;
}

TArray<uint8> UBPL_MapData::GetAllTakaraFlag(int32 ID) {
    return TArray<uint8>();
}

TArray<uint8> UBPL_MapData::GetAllTakaraBreakFlag(int32 ID) {
    return TArray<uint8>();
}

TArray<E_MAGATSUKA_STATE> UBPL_MapData::GetAllMagatsukaState() {
    return TArray<E_MAGATSUKA_STATE>();
}

bool UBPL_MapData::CurrentLevelIsCustom() {
    return false;
}

void UBPL_MapData::ClearWaitingMapInfo() {
}

void UBPL_MapData::ClearTimeAttackEncountAreaKillFlag() {
}

void UBPL_MapData::ClearMapSymbolParamIndex() {
}

void UBPL_MapData::ClearMapSymbolActors() {
}

bool UBPL_MapData::CheckShinseiFlag(int32 ID) {
    return false;
}

bool UBPL_MapData::CheckRyuketsuOpen(int32 ID) {
    return false;
}

bool UBPL_MapData::CheckRelicOnceFlag(int32 ID) {
    return false;
}

bool UBPL_MapData::CheckRelicGetIcon(int32 SaveId) {
    return false;
}

bool UBPL_MapData::CheckRelicFlag(int32 ID) {
    return false;
}

bool UBPL_MapData::CheckNaviDevilGimmickUniqueSaveID(int32 SaveId) {
    return false;
}

bool UBPL_MapData::CheckNaviDevilGimmickExist(int32 ID) {
    return false;
}

TArray<bool> UBPL_MapData::CheckMimanPositionFlagAll() {
    return TArray<bool>();
}

bool UBPL_MapData::CheckMimanPositionFlag(int32 category) {
    return false;
}

bool UBPL_MapData::CheckMimanFlag(int32 ID) {
    return false;
}

bool UBPL_MapData::CheckMapSymbolDeadFlag(int32 ID) {
    return false;
}

bool UBPL_MapData::CheckCoasterOpenFlag_ByMinimapID(int32 minimapID) {
    return false;
}

bool UBPL_MapData::CheckCoasterOpenFlag(int32 ID, bool startGimmick) {
    return false;
}

bool UBPL_MapData::CheckAogamiDebrisGetIcon(int32 tableIndex) {
    return false;
}

bool UBPL_MapData::CheckAogamiDebrisFlag(int32 tableIndex) {
    return false;
}

void UBPL_MapData::AddWaitingMapInfo(const FMapInfoData& Info) {
}

void UBPL_MapData::AddRelicGetCounter() {
}

void UBPL_MapData::AddNaviDevilGimmickCheckCounter() {
}

void UBPL_MapData::AddMapSymbolParamIndex(int32 DevilID, int32 Index) {
}

void UBPL_MapData::AddAogamiDebrisGetCounter() {
}


