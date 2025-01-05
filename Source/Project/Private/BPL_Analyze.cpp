#include "BPL_Analyze.h"

UBPL_Analyze::UBPL_Analyze() {
}

void UBPL_Analyze::Analyze_TakeOverDefenceAishouArg(const int32 rootDevilId, const int32 targetDevilId, FAnalyzeData& rootData, FAnalyzeData& targetData) {
}

void UBPL_Analyze::Analyze_TakeOverDefenceAishou(const int32 rootDevilId, const int32 targetDevilId) {
}

void UBPL_Analyze::Analyze_SetOpenFlagArg(const int32 DevilID, bool IsOpen, FAnalyzeData& Data) {
}

void UBPL_Analyze::Analyze_SetOpenFlag(const int32 DevilID, bool IsOpen) {
}

void UBPL_Analyze::Analyze_SetNewIconFlag(const int32 DevilID) {
}

void UBPL_Analyze::Analyze_ResetNewIconFlag(const int32 DevilID) {
}

void UBPL_Analyze::Analyze_OpenUniqueSkillArg(const int32 DevilID, FAnalyzeData& Data) {
}

void UBPL_Analyze::Analyze_OpenUniqueSkill(const int32 DevilID) {
}

void UBPL_Analyze::Analyze_OpenSkillTekiseiArg(const int32 DevilID, const E_SKILL_TEKISEI_CATEGORY category, FAnalyzeData& Data) {
}

void UBPL_Analyze::Analyze_OpenSkillTekisei(const int32 DevilID, const E_SKILL_TEKISEI_CATEGORY category) {
}

void UBPL_Analyze::Analyze_OpenSkillArg(const int32 DevilID, const int32 useSkillId, FAnalyzeData& Data, const int32& swapSkillID) {
}

void UBPL_Analyze::Analyze_OpenSkill(const int32 DevilID, const int32 useSkillId) {
}

void UBPL_Analyze::Analyze_OpenDefenceAishouAttrArg(const int32 DevilID, const E_ATTRIBUTE_TYPE attr, FAnalyzeData& Data) {
}

void UBPL_Analyze::Analyze_OpenDefenceAishouAttr(const int32 DevilID, const E_ATTRIBUTE_TYPE attr) {
}

void UBPL_Analyze::Analyze_OpenDefenceAishouArg(const int32 DevilID, const int32 hitSkillId, FAnalyzeData& Data) {
}

void UBPL_Analyze::Analyze_OpenDefenceAishou(const int32 DevilID, const int32 hitSkillId) {
}

void UBPL_Analyze::Analyze_OpenAutoSkillArg(const int32 DevilID, const int32 useAutoSkillId, FAnalyzeData& Data, const int32& swapSkillID) {
}

void UBPL_Analyze::Analyze_OpenAutoSkill(const int32 DevilID, const int32 useAutoSkillId) {
}

bool UBPL_Analyze::Analyze_IsNewIconFlagOn(const int32 DevilID) {
    return false;
}

FAnalyzeData UBPL_Analyze::Analyze_GetAnalyzeData(const int32 DevilID) {
    return FAnalyzeData{};
}

void UBPL_Analyze::Analyze_Clear(const int32 DevilID) {
}

bool UBPL_Analyze::Analyze_CheckIsOpenUniqueSkillArg(const int32 DevilID, FAnalyzeData& Data) {
    return false;
}

bool UBPL_Analyze::Analyze_CheckIsOpenUniqueSkill(const int32 DevilID) {
    return false;
}

bool UBPL_Analyze::Analyze_CheckIsOpenSkillTekiseiArg(const int32 DevilID, const E_SKILL_TEKISEI_CATEGORY category, FAnalyzeData& Data) {
    return false;
}

bool UBPL_Analyze::Analyze_CheckIsOpenSkillTekisei(const int32 DevilID, const E_SKILL_TEKISEI_CATEGORY category) {
    return false;
}

bool UBPL_Analyze::Analyze_CheckIsOpenSkillArg(const int32 DevilID, const int32 SkillId, FAnalyzeData& Data) {
    return false;
}

bool UBPL_Analyze::Analyze_CheckIsOpenSkill(const int32 DevilID, const int32 SkillId) {
    return false;
}

bool UBPL_Analyze::Analyze_CheckIsOpenDefenceAisyouArg(const int32 DevilID, const E_ATTRIBUTE_TYPE Type, FAnalyzeData& Data) {
    return false;
}

bool UBPL_Analyze::Analyze_CheckIsOpenDefenceAisyou(const int32 DevilID, const E_ATTRIBUTE_TYPE Type) {
    return false;
}

bool UBPL_Analyze::Analyze_CheckIsOpenAnalyzeArg(const int32 DevilID, FAnalyzeData& Data) {
    return false;
}

bool UBPL_Analyze::Analyze_CheckIsOpenAnalyze(const int32 DevilID) {
    return false;
}

void UBPL_Analyze::Analyze_AllClearByRenewal() {
}

void UBPL_Analyze::Analyze_AllClearByReincarnation() {
}


