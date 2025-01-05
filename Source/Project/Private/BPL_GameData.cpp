#include "BPL_GameData.h"

UBPL_GameData::UBPL_GameData() {
}

bool UBPL_GameData::UtsusemiSortSkillBufferSort(int32 InSortKind, int32 InSortType, int32 InPriority) {
    return false;
}

void UBPL_GameData::UpdateTotalGameTime(float DeltaTime) {
}

void UBPL_GameData::StoreActivityIDtoGameData(const UObject* WorldContextObject) {
}

bool UBPL_GameData::SetUtsusemiSortUnusedFlag(bool inFlag) {
    return false;
}

bool UBPL_GameData::SetUtsusemiSortSkillId(int32 InSkillId) {
    return false;
}

int32 UBPL_GameData::SetUtsusemiSortSkillBuffer(int32 InDevilId) {
    return 0;
}

bool UBPL_GameData::SetUIListAnimationFadeType(int32 InType) {
    return false;
}

bool UBPL_GameData::SetReleaseAllBuyItemFlag(bool IsRelease) {
    return false;
}

void UBPL_GameData::SetOldNewRouteFromEventFlag() {
}

void UBPL_GameData::SetOldNewRoute(E_OldNewRoute inOldNewRoute) {
}

bool UBPL_GameData::SetNeedDlcCheckAndAnnounceFlag(bool IsNeed, bool IsForce) {
    return false;
}

void UBPL_GameData::SetMoonAge(E_MOON_AGE moonAge) {
}

bool UBPL_GameData::SetIconHelpStatus(int32 InStatus) {
    return false;
}

bool UBPL_GameData::SetCampWheelValue(float InValue) {
    return false;
}

bool UBPL_GameData::SetCampUtsusemiSortType(int32 InSortKind) {
    return false;
}

bool UBPL_GameData::SetCampUtsusemiSortAscendingType(bool InAscendingType) {
    return false;
}

bool UBPL_GameData::SetCampMenuNewIconFlag(int32 InMenuIndex) {
    return false;
}

bool UBPL_GameData::SetCampHelpOpenedByIndex(int32 InIndex) {
    return false;
}

bool UBPL_GameData::SetCampHelpOpened(int32 InMessageId) {
    return false;
}

bool UBPL_GameData::SetCampHelpNewIconFlag(int32 InMessageId, bool inFlag) {
    return false;
}

bool UBPL_GameData::SetCampHelpClosedByIndex(int32 InIndex) {
    return false;
}

bool UBPL_GameData::SetCampHelpAllOpened() {
    return false;
}

bool UBPL_GameData::SetCampHelpAllOnFlag(bool inFlag) {
    return false;
}

bool UBPL_GameData::SetCampHelpAllClosed() {
    return false;
}

bool UBPL_GameData::SetBtnHelpInitIconMode(bool IsGamePad) {
    return false;
}

bool UBPL_GameData::SetBtnHelpIconModeTick(bool IsActiveTick) {
    return false;
}

bool UBPL_GameData::Set_Debug_DLC_ClearAnnounceFlag(bool InParam) {
    return false;
}

void UBPL_GameData::RestoreActivityIDfromGameData(const UObject* WorldContextObject) {
}

bool UBPL_GameData::ResetUtsusemiSortSkillBuffer_AllAttr() {
    return false;
}

bool UBPL_GameData::ResetUtsusemiSortSkillBuffer(int32 InPriority) {
    return false;
}

bool UBPL_GameData::IsCampMenuNewIconOpened(int32 InMenuIndex) {
    return false;
}

bool UBPL_GameData::IsCampHelpOpenedByIndex(int32 InIndex) {
    return false;
}

bool UBPL_GameData::IsCampHelpOpened(int32 InMessageId) {
    return false;
}

bool UBPL_GameData::IsCampHelpNewIconFlag(int32 InMessageId) {
    return false;
}

bool UBPL_GameData::IsBootingIconHelp() {
    return false;
}

void UBPL_GameData::InitRenewalNewGame() {
}

void UBPL_GameData::InitReincarnationNewGame() {
}

void UBPL_GameData::InitNewGame() {
}

bool UBPL_GameData::InitializeUtsusemiSortSkillBuffer_AllAttr() {
    return false;
}

bool UBPL_GameData::InitializeUtsusemiSortSkillBuffer(int32 InPriority) {
    return false;
}

void UBPL_GameData::InitCreationNewGame() {
}

bool UBPL_GameData::GetUtsusemiSortUnusedFlag() {
    return false;
}

int32 UBPL_GameData::GetUtsusemiSortSkillId() {
    return 0;
}

int32 UBPL_GameData::GetUIListAnimationFadeType() {
    return 0;
}

int32 UBPL_GameData::GetTotalGameTime() {
    return 0;
}

bool UBPL_GameData::GetReleaseAllBuyItemFlag() {
    return false;
}

E_OldNewRoute UBPL_GameData::GetOldNewRoute() {
    return E_OldNewRoute::E_CommonRoute;
}

bool UBPL_GameData::GetNeedDlcCheckAndAnnounceFlag() {
    return false;
}

E_MOON_AGE UBPL_GameData::GetMoonAge() {
    return E_MOON_AGE::E_MOON_AGE_SILENT;
}

int32 UBPL_GameData::GetIconHelpStatus() {
    return 0;
}

float UBPL_GameData::GetCampWheelValue() {
    return 0.0f;
}

int32 UBPL_GameData::GetCampUtsusemiSortType() {
    return 0;
}

bool UBPL_GameData::GetCampUtsusemiSortAscendingType() {
    return false;
}

bool UBPL_GameData::GetCampHelpAllOnFlag() {
    return false;
}

bool UBPL_GameData::GetBtnHelpInitIconMode() {
    return false;
}

bool UBPL_GameData::GetBtnHelpIconModeTick() {
    return false;
}

bool UBPL_GameData::Get_Debug_DLC_ClearAnnounceFlag() {
    return false;
}

void UBPL_GameData::ClearTotalGameTime() {
}

void UBPL_GameData::AddMoonAge(const int32 addValue) {
}


