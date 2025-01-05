#include "BPL_SkillData.h"

UBPL_SkillData::UBPL_SkillData() {
}

bool UBPL_SkillData::SkillMasterIsMasterOn(int32 ID) {
    return false;
}

bool UBPL_SkillData::SkillIsUseCamp(int32 InSkillId) {
    return false;
}

bool UBPL_SkillData::SkillIsPhysicalAttack(int32 ID) {
    return false;
}

bool UBPL_SkillData::SkillIsMasicalAttack(int32 ID) {
    return false;
}

E_SKILL_KIND UBPL_SkillData::SkillIDGetKind(int32 ID) {
    return E_SKILL_KIND::E_SKILL_KIND_INVALID;
}

int32 UBPL_SkillData::SkillGetWhisperVal(FSkillBaseData pData, int32 whisperCount, E_SKILL_WHISPER_VAL_TYPE valType) {
    return 0;
}

int32 UBPL_SkillData::SkillGetNKMWhisperVal(FSkillBaseData pData, int32 whisperCount, E_SKILL_WHISPER_VAL_TYPE valType) {
    return 0;
}

int32 UBPL_SkillData::SkillBstToNormalBst(uint8 skillBst) {
    return 0;
}

bool UBPL_SkillData::SkillBaseDataIsTargetAll(FSkillBaseData pData) {
    return false;
}

bool UBPL_SkillData::SkillBaseDataIsRecoveryType(FSkillBaseData pData) {
    return false;
}

bool UBPL_SkillData::SkillBaseDataIsRecome(FSkillBaseData pData) {
    return false;
}

bool UBPL_SkillData::SkillBaseDataIsHaveExtraEffect(FSkillBaseData pData, E_SKILL_EXTRA_EFFECT Type) {
    return false;
}

bool UBPL_SkillData::SkillBaseDataIsAIDSkill(FSkillBaseData pData) {
    return false;
}

E_SKILL_ENABLE_SCENE UBPL_SkillData::SkillBaseDataGetValue_UseScene(FSkillBaseData pData) {
    return E_SKILL_ENABLE_SCENE::E_SKILL_ENABLE_SCENE_NOT_USE;
}

E_SKILL_TYPE UBPL_SkillData::SkillBaseDataGetValue_Type(FSkillBaseData pData) {
    return E_SKILL_TYPE::E_SKILL_TYPE_PHYSICAL_ATK;
}

TArray<uint8> UBPL_SkillData::SkillBaseDataGetValue_TekiseiTypeArray(FSkillBaseData pData) {
    return TArray<uint8>();
}

E_SKILL_TEKISEI_TYPE UBPL_SkillData::SkillBaseDataGetValue_TekiseiType(FSkillBaseData pData) {
    return E_SKILL_TEKISEI_TYPE::E_SKILL_TEKISEI_TYPE_NONE;
}

E_SKILL_TEKISEI_CATEGORY UBPL_SkillData::SkillBaseDataGetValue_TekiseiCategory(FSkillBaseData pData) {
    return E_SKILL_TEKISEI_CATEGORY::E_SKILL_TEKISEI_CATEGORY_PHISICS;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_Taru(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_Suku(FSkillBaseData pData) {
    return 0;
}

int32 UBPL_SkillData::SkillBaseDataGetValue_SkillSource(FSkillBaseData pData) {
    return 0;
}

int32 UBPL_SkillData::SkillBaseDataGetValue_RecVal(FSkillBaseData pData) {
    return 0;
}

E_SKILL_REC_TYPE UBPL_SkillData::SkillBaseDataGetValue_RecType(FSkillBaseData pData) {
    return E_SKILL_REC_TYPE::E_SKILL_REC_FULL;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_RecRate(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_RecBst(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_Rate(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_Rank(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_Raku(FSkillBaseData pData) {
    return 0;
}

int32 UBPL_SkillData::SkillBaseDataGetValue_NameSortID(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_MP(FSkillBaseData pData) {
    return 0;
}

int32 UBPL_SkillData::SkillBaseDataGetValue_MasterCost(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_Maka(FSkillBaseData pData) {
    return 0;
}

E_SKILL_LIMITED UBPL_SkillData::SkillBaseDataGetValue_Limited(FSkillBaseData pData) {
    return E_SKILL_LIMITED::E_SKILL_LIMITED_ALL;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_LibEntry(FSkillBaseData pData) {
    return 0;
}

int32 UBPL_SkillData::SkillBaseDataGetValue_LibCost(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_Keishou(FSkillBaseData pData) {
    return 0;
}

bool UBPL_SkillData::SkillBaseDataGetValue_IsMagatsuhiSkill(FSkillBaseData pData) {
    return false;
}

bool UBPL_SkillData::SkillBaseDataGetValue_IsKantuu(FSkillBaseData pData) {
    return false;
}

bool UBPL_SkillData::SkillBaseDataGetValue_IsEnableSkip(FSkillBaseData pData) {
    return false;
}

bool UBPL_SkillData::SkillBaseDataGetValue_IsEnableShowSkillName(FSkillBaseData pData) {
    return false;
}

bool UBPL_SkillData::SkillBaseDataGetValue_IsDummy(FSkillBaseData pData) {
    return false;
}

int32 UBPL_SkillData::SkillBaseDataGetValue_ID(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_Icon(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_DeadEffect(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_CriticalRate(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_BstRate(FSkillBaseData pData) {
    return 0;
}

int32 UBPL_SkillData::SkillBaseDataGetValue_Bst(FSkillBaseData pData) {
    return 0;
}

float UBPL_SkillData::SkillBaseDataGetValue_AtkVal(FSkillBaseData pData) {
    return 0.0f;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_AtkNumMax(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_AtkNum(FSkillBaseData pData) {
    return 0;
}

TArray<E_ATTRIBUTE_TYPE> UBPL_SkillData::SkillBaseDataGetValue_AtkAttrTArray(const FSkillBaseData& pData) {
    return TArray<E_ATTRIBUTE_TYPE>();
}

E_ATTRIBUTE_TYPE UBPL_SkillData::SkillBaseDataGetValue_AtkAttr(FSkillBaseData pData) {
    return E_ATTRIBUTE_TYPE::E_ATTRIBUTE_TYPE_PHISICS;
}

E_SKILL_TARGET UBPL_SkillData::SkillBaseDataGetValue_Area(FSkillBaseData pData) {
    return E_SKILL_TARGET::E_SKILL_TARGET_INV_SIDE_ONE;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_AbsorbMpRate(FSkillBaseData pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillBaseDataGetValue_AbsorbHpRate(FSkillBaseData pData) {
    return 0;
}

bool UBPL_SkillData::SkillAutoEruptIsHaveExtraEffect(FSkillAutoErupt pData, E_AUTO_SKILL_EXTRA_EFFECT Value) {
    return false;
}

uint8 UBPL_SkillData::SkillAutoEruptGetValue_Kantuu(FSkillAutoErupt pData) {
    return 0;
}

E_AUTO_SKILL_EFT_TYPE UBPL_SkillData::SkillAutoEruptGetValue_EruptType(FSkillAutoErupt pData) {
    return E_AUTO_SKILL_EFT_TYPE::E_AUTO_SKILL_EFT_NONE;
}

uint8 UBPL_SkillData::SkillAutoEruptGetValue_ClenchingType(FSkillAutoErupt pData) {
    return 0;
}

uint8 UBPL_SkillData::SkillAutoEruptGetValue_BstRate(FSkillAutoErupt pData) {
    return 0;
}

E_ATTRIBUTE_TYPE UBPL_SkillData::SkillAutoEruptGetValue_Attr(FSkillAutoErupt pData) {
    return E_ATTRIBUTE_TYPE::E_ATTRIBUTE_TYPE_PHISICS;
}

void UBPL_SkillData::SkillAutoEruptGetExtraEffects(FSkillAutoErupt pData, TArray<E_AUTO_SKILL_EXTRA_EFFECT>& list) {
}

bool UBPL_SkillData::IsSkillAutoEruptUnique(int32 ID) {
    return false;
}

bool UBPL_SkillData::IsMagatsuhiSkill(int32 InSkillId) {
    return false;
}

bool UBPL_SkillData::IsItPossibletoDisplayToCost(int32 InSkillId) {
    return false;
}

int32 UBPL_SkillData::GetUtsusemiSortSkillIdPriority(int32 InSkillId) {
    return 0;
}

int32 UBPL_SkillData::GetSkillUniqueValue(int32 ID) {
    return 0;
}

E_SKILL_UNIQUE_TYPE UBPL_SkillData::GetSkillUniqueType(int32 ID) {
    return E_SKILL_UNIQUE_TYPE::E_SKILL_UNIQUE_TYPE_ALL;
}

E_SKILL_TEKISEI_CATEGORY UBPL_SkillData::GetSkillTekiseiCategory(int32 SkillId) {
    return E_SKILL_TEKISEI_CATEGORY::E_SKILL_TEKISEI_CATEGORY_PHISICS;
}

FText UBPL_SkillData::GetSkillName(int32 ID) {
    return FText::GetEmpty();
}

FText UBPL_SkillData::GetSkillInfoMessText(int32 MessageID, bool isMaster) {
    return FText::GetEmpty();
}

FSkillInfoMess UBPL_SkillData::GetSkillInfoMessData(int32 ID) {
    return FSkillInfoMess{};
}

int32 UBPL_SkillData::GetSkillIdMax() {
    return 0;
}

int32 UBPL_SkillData::GetSkillIconPriority(int32 InSkillId) {
    return 0;
}

int32 UBPL_SkillData::GetSkillIconIdBySkillId(int32 InSkillId) {
    return 0;
}

FText UBPL_SkillData::GetSkillHelp(int32 ID) {
    return FText::GetEmpty();
}

int32 UBPL_SkillData::GetSkillExtraEffectValue(E_SKILL_EXTRA_EFFECT Type) {
    return 0;
}

FText UBPL_SkillData::GetSkillEffectName(int32 ID) {
    return FText::GetEmpty();
}

FSkillBaseData UBPL_SkillData::GetSkillBaseData(int32 ID) {
    return FSkillBaseData{};
}

int32 UBPL_SkillData::GetSkillAutoEruptExtraEffectValue(FSkillAutoErupt pData, E_AUTO_SKILL_EXTRA_EFFECT Type) {
    return 0;
}

FSkillAutoErupt UBPL_SkillData::GetSkillAutoEruptData(int32 ID) {
    return FSkillAutoErupt{};
}

int32 UBPL_SkillData::GetMultiDevilMagatsuhiSkillNkmNum(const int32 SkillId) {
    return 0;
}

FMultiDevilMagatsuhiSkillData UBPL_SkillData::GetMultiDevilMagatsuhiSkillData(const int32 SkillId) {
    return FMultiDevilMagatsuhiSkillData{};
}

int32 UBPL_SkillData::GetMagatsuhiSkillIdByPlayer(int32 InIndex) {
    return 0;
}

int32 UBPL_SkillData::GetMagatsuhiSkillIdByGroupId(int32 InGroupId, int32 InIndex) {
    return 0;
}


