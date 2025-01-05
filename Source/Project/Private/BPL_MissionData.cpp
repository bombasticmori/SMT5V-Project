#include "BPL_MissionData.h"

UBPL_MissionData::UBPL_MissionData() {
}

void UBPL_MissionData::UpdateCompleteFlags(int32 MissionId) {
}

void UBPL_MissionData::TimeAttackReachedGoal(int32 MissionId) {
}

bool UBPL_MissionData::TimeAttackMissionUpdateMoonAge(int32 Add) {
    return false;
}

void UBPL_MissionData::StartTimeAttackMission_CPP(int32 MissionId) {
}

void UBPL_MissionData::ShowMissionTargetIconAll(int32 MissionId) {
}

void UBPL_MissionData::ShowMissionTargetIcon(int32 MissionId, int32 iconIndex) {
}

void UBPL_MissionData::SetMissionGeneralCount(int32 MissionId, int32 countIndex, int32 Value) {
}

void UBPL_MissionData::SetMissionCompleteInfo(int32 MissionId) {
}

void UBPL_MissionData::SetIsLogUpdated(int32 MissionId, bool NewIsLogUpdated) {
}

void UBPL_MissionData::RemoveRadarFromTargetIconAll(int32 MissionId) {
}

void UBPL_MissionData::RegisterRadarToTargetIconAll(int32 MissionId) {
}

void UBPL_MissionData::OnMovedToOtherMapInTimeAttack(int32 MissionId) {
}

TArray<FMissionUpdateInfo> UBPL_MissionData::MakeUpdateInfoList() {
    return TArray<FMissionUpdateInfo>();
}

TArray<FMissionTimeAttackInfo> UBPL_MissionData::MakeTimeAttackInfoList() {
    return TArray<FMissionTimeAttackInfo>();
}

TArray<int32> UBPL_MissionData::MakeReportableList() {
    return TArray<int32>();
}

bool UBPL_MissionData::IsRyuketsuWarpLockedByMission() {
    return false;
}

bool UBPL_MissionData::IsLogUpdated(int32 MissionId) {
    return false;
}

bool UBPL_MissionData::IsInTimeAttack(int32 MissionId) {
    return false;
}

bool UBPL_MissionData::IsInOtherTimeAttack(int32 myMissionId, int32& outOtherMissionId) {
    return false;
}

void UBPL_MissionData::InitMissionData() {
}

E_TIME_ATTACK_MISSION_STATE UBPL_MissionData::GetTimeAttackState(int32 MissionId) {
    return E_TIME_ATTACK_MISSION_STATE::E_NONE;
}

TArray<int32> UBPL_MissionData::GetTimeAttackEnemyList() {
    return TArray<int32>();
}

TArray<E_GROUP_ID> UBPL_MissionData::GetTimeAttackEnemyGroupList() {
    return TArray<E_GROUP_ID>();
}

int32 UBPL_MissionData::GetMissionVisibleTargetIconNum(int32 MissionId) {
    return 0;
}

FText UBPL_MissionData::GetMissionTypeText(E_MISSION_TYPE Type) {
    return FText::GetEmpty();
}

TArray<FMissionTargetIcon> UBPL_MissionData::GetMissionTargetIconAll(int32 MissionId) {
    return TArray<FMissionTargetIcon>();
}

FMissionTargetIcon UBPL_MissionData::GetMissionTargetIcon(int32 MissionId, int32 iconIndex) {
    return FMissionTargetIcon{};
}

E_MISSION_STATE UBPL_MissionData::GetMissionState(int32 MissionId) {
    return E_MISSION_STATE::E_MISSION_STATE_NOT_ENTRY;
}

FScriptMessage UBPL_MissionData::GetMissionRewardMsg(int32 MissionId, int32& outTag1, int32& outTag2) {
    return FScriptMessage{};
}

FScriptMessage UBPL_MissionData::GetMissionNameMsg(int32 MissionId) {
    return FScriptMessage{};
}

FText UBPL_MissionData::GetMissionName(int32 MissionId) {
    return FText::GetEmpty();
}

int32 UBPL_MissionData::GetMissionNakamaDevilId(int32 MissionId) {
    return 0;
}

FText UBPL_MissionData::GetMissionMajorTypeText(E_MISSION_MAJOR_TYPE Type) {
    return FText::GetEmpty();
}

FScriptMessage UBPL_MissionData::GetMissionInfoTagMessage(int32 MissionId, E_MISSION_INFO_TEXT infoText) {
    return FScriptMessage{};
}

int32 UBPL_MissionData::GetMissionIdMax() {
    return 0;
}

int32 UBPL_MissionData::GetMissionHuntCount(int32 MissionId, int32 DevilID) {
    return 0;
}

FScriptMessage UBPL_MissionData::GetMissionHelpMessage(int32 MissionId, FText& outPlaceText1, FText& outPlaceText2, FText& outPlaceText3) {
    return FScriptMessage{};
}

int32 UBPL_MissionData::GetMissionGeneralCount(int32 MissionId, int32 countIndex) {
    return 0;
}

FText UBPL_MissionData::GetMissionExplainText(int32 MissionId) {
    return FText::GetEmpty();
}

FScriptMessage UBPL_MissionData::GetMissionExplainMsg(int32 MissionId) {
    return FScriptMessage{};
}

int32 UBPL_MissionData::GetMissionDataMax() {
    return 0;
}

FMissionData UBPL_MissionData::GetMissionData(int32 ID) {
    return FMissionData{};
}

FScriptMessage UBPL_MissionData::GetMissionClientNameMsg(int32 MissionId) {
    return FScriptMessage{};
}

FText UBPL_MissionData::GetMissionClientName(int32 MissionId) {
    return FText::GetEmpty();
}

bool UBPL_MissionData::GetIconLocationForReport(int32 MissionId, int32& OutMapId, int32& OutAreaId, FVector& OutLocation, float& outZoom) {
    return false;
}

int32 UBPL_MissionData::GetCreationModeExp(int32 MissionId) {
    return 0;
}

void UBPL_MissionData::GetCenterOfVisibleTargetIcons(int32 MissionId, bool isMessageWindow, int32& OutNum, int32& OutMapId, int32& OutAreaId, FVector& OutLocation, float& outZoom) {
}

void UBPL_MissionData::FinishTimeAttackMission_CPP(int32 MissionId) {
}

void UBPL_MissionData::EntryMission(int32 MissionId) {
}

void UBPL_MissionData::CompleteMission(int32 MissionId) {
}

bool UBPL_MissionData::CheckViewMissionCompleteInfo(int32 MissionId) {
    return false;
}

bool UBPL_MissionData::CheckTimeAttackReportable(int32 MissionId, bool& outSuccess) {
    return false;
}

bool UBPL_MissionData::CheckMissionNewIcon(int32 MissionId) {
    return false;
}

bool UBPL_MissionData::CheckMissionEntryCond(int32 MissionId) {
    return false;
}

bool UBPL_MissionData::CheckMissionEntry(int32 MissionId) {
    return false;
}

bool UBPL_MissionData::CheckMissionCompleteCond(int32 MissionId, bool checkEntryComplete) {
    return false;
}

bool UBPL_MissionData::CheckMissionComplete(int32 MissionId) {
    return false;
}

void UBPL_MissionData::ChangeMissionNewIcon(int32 MissionId, bool isView) {
}

void UBPL_MissionData::AddMissionHuntCount(int32 DevilID, int32 Add) {
}

void UBPL_MissionData::AddMissionGeneralCount(int32 MissionId, int32 countIndex, int32 Add) {
}


