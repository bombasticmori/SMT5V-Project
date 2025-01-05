#include "BPL_CampSkill.h"

UBPL_CampSkill::UBPL_CampSkill() {
}

void UBPL_CampSkill::ExpenditureMp(FCampCommonCharaData actCharaData, int32 SkillId) {
}

bool UBPL_CampSkill::CanBeUseSkillByScene(int32 InSkillId) {
    return false;
}

FCampSkilResult UBPL_CampSkill::CampSkill_UsedNonCost(FCampCommonCharaData actCharaData, FCampCommonCharaData tarCharaData, int32 SkillId, bool IsCalcOnly) {
    return FCampSkilResult{};
}

bool UBPL_CampSkill::CampSkill_UsedAll(FCampCommonCharaData actCharaData, int32 SkillId, bool isCheck) {
    return false;
}

FCampSkilResult UBPL_CampSkill::CampSkill_Used(FCampCommonCharaData actCharaData, FCampCommonCharaData tarCharaData, int32 SkillId, bool isCheck) {
    return FCampSkilResult{};
}

bool UBPL_CampSkill::CampSkill_IsUseSkill(FCampCommonCharaData actCharaData, int32 SkillId) {
    return false;
}

bool UBPL_CampSkill::CampSkill_IsCureSkill(int32 SkillId) {
    return false;
}

bool UBPL_CampSkill::CampSkill_IsAllEffect(int32 SkillId) {
    return false;
}

TArray<FCampCommonCharaData> UBPL_CampSkill::CampSkill_GetUsedCharData(FCampCommonCharaData actCharaData, int32 SkillId) {
    return TArray<FCampCommonCharaData>();
}


