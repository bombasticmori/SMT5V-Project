#include "BPL_UniteCtrlData.h"

UBPL_UniteCtrlData::UBPL_UniteCtrlData() {
}

void UBPL_UniteCtrlData::WriteNkmData_ByBibleData(int32 NkmIndex) {
}

void UBPL_UniteCtrlData::UpdateUniteSpOpenAnnounce() {
}

void UBPL_UniteCtrlData::UpdateUniteKamuiOpenAnnounce() {
}

bool UBPL_UniteCtrlData::UniteDebug_UseDebugSearch() {
    return false;
}

void UBPL_UniteCtrlData::UniteDebug_UpdateDebugHpMpLogFlag() {
}

void UBPL_UniteCtrlData::UniteDebug_UpdateDebugFlag(int32 flagno) {
}

void UBPL_UniteCtrlData::UniteDebug_SetBonusDevilData() {
}

bool UBPL_UniteCtrlData::UniteDebug_NonAccident() {
    return false;
}

bool UBPL_UniteCtrlData::UniteDebug_NoCost() {
    return false;
}

void UBPL_UniteCtrlData::UniteDebug_NearlyCompletedBible() {
}

void UBPL_UniteCtrlData::UniteDebug_InitDebugFlag() {
}

void UBPL_UniteCtrlData::UniteDebug_InitBibleData() {
}

bool UBPL_UniteCtrlData::UniteDebug_CheckLevelUnlimited() {
    return false;
}

bool UBPL_UniteCtrlData::UniteDebug_CheckBibleAllOpen() {
    return false;
}

bool UBPL_UniteCtrlData::UniteDebug_Accident() {
    return false;
}

void UBPL_UniteCtrlData::UninitUniteDataCtrl() {
}

void UBPL_UniteCtrlData::SummonDevilData(int32 DevilID) {
}

void UBPL_UniteCtrlData::SummonBibleData(int32 DevilID) {
}

void UBPL_UniteCtrlData::SetNewUniteTutorialFlag(E_TUTORIAL_WINDOW_MESSAGE_TYPE Type) {
}

void UBPL_UniteCtrlData::SetNewUniteSpFlag(int32 DevilID) {
}

bool UBPL_UniteCtrlData::ReadUniteCombineTable(UUniteTableAsset* pUniteAsset) {
    return false;
}

int32 UBPL_UniteCtrlData::LotUniteAccidentDevilFromID(int32 ResultDevil) {
    return 0;
}

bool UBPL_UniteCtrlData::LotUniteAccident(int32 InSourceDevil1, int32 InSourceDevil2) {
    return false;
}

bool UBPL_UniteCtrlData::IsOverwriteDefenceAishou() {
    return false;
}

bool UBPL_UniteCtrlData::IsOverwriteDefaultSkill() {
    return false;
}

bool UBPL_UniteCtrlData::IsOpenUniteTutorialType(E_TUTORIAL_WINDOW_MESSAGE_TYPE Type) {
    return false;
}

bool UBPL_UniteCtrlData::IsOpenUniteSp() {
    return false;
}

bool UBPL_UniteCtrlData::IsOpenUnite() {
    return false;
}

bool UBPL_UniteCtrlData::IsOpenBible() {
    return false;
}

bool UBPL_UniteCtrlData::IsDynamicResolution() {
    return false;
}

bool UBPL_UniteCtrlData::IsDispUniteUtsusemiNewIcon() {
    return false;
}

bool UBPL_UniteCtrlData::IsAbleUniteSozaiDevil(int32 DevilID) {
    return false;
}

bool UBPL_UniteCtrlData::IsAbleUniteInheritSkill(int32 ResultDevilId, int32 SkillId) {
    return false;
}

void UBPL_UniteCtrlData::InitUniteDataCtrl() {
}

void UBPL_UniteCtrlData::GetUniteSpOpenAnnounceList(TArray<int32>& devilIdList, TArray<int32>& indexList) {
}

int32 UBPL_UniteCtrlData::GetUniteLevel() {
    return 0;
}

int32 UBPL_UniteCtrlData::GetUniteDoubleResult(int32 DevilId1, int32 DevilId2) {
    return 0;
}

int32 UBPL_UniteCtrlData::GetUniteDevilLevel(int32 DevilID, E_UNITE_NKM_TYPE nkmType) {
    return 0;
}

FUniteCtrlData UBPL_UniteCtrlData::GetUniteCtrlData() {
    return FUniteCtrlData{};
}

float UBPL_UniteCtrlData::GetUniteBgBlurStrength(float InBlurStrength) {
    return 0.0f;
}

int32 UBPL_UniteCtrlData::GetSkillRank(int32 SkillId) {
    return 0;
}

void UBPL_UniteCtrlData::GetNkmData_ByPartyData(int32 DevilID, FNkmData& NkmData) {
}

void UBPL_UniteCtrlData::GetNkmData_ByDevilData(int32 DevilID, FNkmData& NkmData) {
}

void UBPL_UniteCtrlData::GetNkmData_ByBibleData(int32 DevilID, FNkmData& NkmData) {
}

int32 UBPL_UniteCtrlData::GetBibleEntryRate() {
    return 0;
}

void UBPL_UniteCtrlData::ClearUniteSpOpenAnnounceFlag() {
}

void UBPL_UniteCtrlData::ClearUniteKamuiOpenAnnounceFlag() {
}

void UBPL_UniteCtrlData::ClearNewUniteMenuFlag() {
}

bool UBPL_UniteCtrlData::CheckUniteKamuiOpenAnnounce() {
    return false;
}

bool UBPL_UniteCtrlData::CheckUniteBibleEntry(int32 DevilID) {
    return false;
}

bool UBPL_UniteCtrlData::CheckNewUniteTutorialFlag(E_TUTORIAL_WINDOW_MESSAGE_TYPE Type) {
    return false;
}

bool UBPL_UniteCtrlData::CheckNewUniteSpFlag(int32 DevilID) {
    return false;
}

bool UBPL_UniteCtrlData::CheckAnyNewUniteSpFlag() {
    return false;
}

FAbilData UBPL_UniteCtrlData::CalcUniteBonusParamByList(int32 ResultDevil, const TArray<int32>& sourceList) {
    return FAbilData{};
}

FAbilData UBPL_UniteCtrlData::CalcUniteBonusParam(int32 ResultDevil, int32 sourceDevil1, int32 sourceDevil2, int32 sourceDevil3, int32 sourceDevil4) {
    return FAbilData{};
}

int32 UBPL_UniteCtrlData::CalcUniteAddExpByList(int32 ResultDevil, const TArray<int32>& sourceList) {
    return 0;
}

int32 UBPL_UniteCtrlData::CalcUniteAddExp(int32 ResultDevil, int32 sourceDevil1, int32 sourceDevil2, int32 sourceDevil3, int32 sourceDevil4) {
    return 0;
}

int32 UBPL_UniteCtrlData::CalcDevilCost_ByPartyData(int32 DevilID) {
    return 0;
}

int32 UBPL_UniteCtrlData::CalcDevilCost_ByDevilData(int32 DevilID) {
    return 0;
}

int32 UBPL_UniteCtrlData::CalcDevilCost_ByBibleData(int32 DevilID) {
    return 0;
}

void UBPL_UniteCtrlData::CalcAccidentSkill(TArray<int32>& OutSkillList, const int32 ResultDevil, const int32 accidentDevil, const TArray<int32>& srcDevilList) {
}

int32 UBPL_UniteCtrlData::AdjustUniteDevilCost(int32 InCost) {
    return 0;
}


