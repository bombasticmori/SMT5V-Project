#include "GardenTalkPointManager.h"

UGardenTalkPointManager::UGardenTalkPointManager() {
}

bool UGardenTalkPointManager::ShouldDisplayGardenPlayerTalkIcon(E_MINIMAP_POI_ICON& DisplayIconType) {
    return false;
}

bool UGardenTalkPointManager::SetGardenTalkInfoFlag_Done(int32 NkmIndex) {
    return false;
}

bool UGardenTalkPointManager::ResetGardenTalkFlag(int32 NkmIndex, E_GARDEN_TALK_TYPE FlagType) {
    return false;
}

int32 UGardenTalkPointManager::GetGardenTrophyCounter(E_GARDEN_TROPHY_COUNTER_TYPE GardenTrophyCounter) {
    return 0;
}

UGardenTalkPointManager* UGardenTalkPointManager::GetGardenTalkPointManager(const UObject* WorldContextObject) {
    return NULL;
}

bool UGardenTalkPointManager::FindMissionIDWithDevilID(int32 DevilID, int32& MissionId) {
    return false;
}

bool UGardenTalkPointManager::EnableQuestFlag_ByNkmIndex(int32 NkmIndex) {
    return false;
}

bool UGardenTalkPointManager::Debug_ToggleTrustTalkFlag_ByNkmIndex(int32 NkmIndex, bool Enable) {
    return false;
}

bool UGardenTalkPointManager::Debug_ToggleQuestTalkFlag_ByNkmIndex(int32 NkmIndex, bool Enable) {
    return false;
}

bool UGardenTalkPointManager::Debug_TogglePowerUpTalkFlag_ByNkmIndex(int32 NkmIndex, bool Enable) {
    return false;
}

bool UGardenTalkPointManager::Debug_ToggleItemTalkFlag_ByNkmIndex(int32 NkmIndex, bool Enable) {
    return false;
}

bool UGardenTalkPointManager::Debug_SetPartyGardenSettings(int32 InPartyTalkPoint) {
    return false;
}

bool UGardenTalkPointManager::Debug_SetDevilGardenSettings_ByNkmIndex(int32 NkmIndex, FGardenDevilData InGardenDevilData) {
    return false;
}

bool UGardenTalkPointManager::Debug_OutputPartyGardenSettings(int32& OutPartyTalkPoint) {
    return false;
}

bool UGardenTalkPointManager::Debug_OutputDevilGardenSettings_ByNkmIndex(int32 NkmIndex, FGardenDevilData& OutGardenDevilData, int32& OutPartyTalkPoint) {
    return false;
}

bool UGardenTalkPointManager::Debug_GetGardenItemList(TArray<FTalkRequestItemTable>& OutGardenItemTable, TArray<FTalkRequestItemRankTable>& OutGardenItemRankTable) {
    return false;
}

void UGardenTalkPointManager::ClearTempPointBattle() {
}

void UGardenTalkPointManager::CheckPowerUpMessageStep(int32 NkmIndex, uint8& MessageStep) {
}

bool UGardenTalkPointManager::CheckGardenTalkInfoFlag_All(TArray<int32>& outFlaggedNkmIndexList) {
    return false;
}

bool UGardenTalkPointManager::CheckGardenTalkFlag_ByNkmIndex(int32 NkmIndex, E_MINIMAP_POI_ICON& DisplayIconType) {
    return false;
}

bool UGardenTalkPointManager::CheckGardenTalkFlag_Any(E_MINIMAP_POI_ICON& DisplayIconType) {
    return false;
}

bool UGardenTalkPointManager::CheckGardenTalkFlag_All(TMap<int32, E_MINIMAP_POI_ICON>& outFlaggedNkmIndexAndIconMap) {
    return false;
}

bool UGardenTalkPointManager::CheckGardenPlayerTalkFlags(TArray<int32>& outFlaggedPlayerTalkInfoFlagList) {
    return false;
}

void UGardenTalkPointManager::CheckAddPointNewMapGardenPoints(int32 MapReachFlag) {
}

void UGardenTalkPointManager::AddTempPointBattle(const FBtlGardenPointData& pBtlGardenPointData) {
}

void UGardenTalkPointManager::AddPointTributeGardenPoints(int32 DevilID, bool IsRare) {
}

void UGardenTalkPointManager::AddPointStatueGardenPoints() {
}

void UGardenTalkPointManager::AddPointResultBattle() {
}

void UGardenTalkPointManager::AddPointQuestGardenPoints() {
}

void UGardenTalkPointManager::AddPointNewWaypointGardenPoints(int32 ExpectedDevilLevel) {
}

void UGardenTalkPointManager::AddPointMimanGardenPoints() {
}

void UGardenTalkPointManager::AddPointMagatsukaDestroyGardenPoints() {
}

int32 UGardenTalkPointManager::AddGardenTrophyCounter(E_GARDEN_TROPHY_COUNTER_TYPE GardenTrophyCounter) {
    return 0;
}


