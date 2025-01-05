#include "BPL_AsyncLib.h"

UBPL_AsyncLib::UBPL_AsyncLib() {
}

bool UBPL_AsyncLib::SettleCriticalSkill(FBtlParty Player, FBtlParty Enemy, int32 SkillId) {
    return false;
}

void UBPL_AsyncLib::SettleCriticalFunc(ABattleMainWorkBase* BattleMain, FBtlParty Player, TArray<FBtlParty> Enemy, TArray<FBtlParty> partyAll, TArray<FSkillCriticalValueOne>& result, bool& bFinished) {
}

bool UBPL_AsyncLib::IsUseSkillTargetSelect(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& user, const FBtlParty& target, bool isUse) {
    return false;
}

bool UBPL_AsyncLib::IsUseSkillCommand(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& Player, const TArray<FBtlParty>& partyAll, bool isEscape) {
    return false;
}

bool UBPL_AsyncLib::IsUseItemTargetSelect(UObject* mainWork, const FUseItemData& Item, const FBtlParty& user, const FBtlParty& target, bool isUse) {
    return false;
}

bool UBPL_AsyncLib::IsUseItemCommandMainWork(UObject* mainWork, const FUseItemData& Item, const FBtlParty& Player, bool isEscape, bool isUse) {
    return false;
}

bool UBPL_AsyncLib::IsUseItemCommand(UObject* mainWork, const FUseItemData& Item, const FBtlParty& Player, const TArray<FBtlParty>& partyAll, bool isEscape, bool isUse) {
    return false;
}

bool UBPL_AsyncLib::IsUsedSkillStock(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedSkill(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedRecomeSkill(const FSkillBaseData& skill, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedProvokeSkill(const FSkillBaseData& skill, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedPrevTurnAvoid(const FSkillBaseData& skill, const FBtlParty& Player) {
    return false;
}

bool UBPL_AsyncLib::IsUsedPressIcon(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& Player) {
    return false;
}

bool UBPL_AsyncLib::IsUsedPass(UObject* mainWork, const FSkillBaseData& skill, const FBtlParty& Player) {
    return false;
}

bool UBPL_AsyncLib::IsUsedMPCureSkill(const FSkillBaseData& skill, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedMPCureItem(const FUseItemData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedKarnSkill(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedKajyandaSkillCommon(const FBtlParty& Player, const FBtlParty& party, const int32 kajyanndaValue, const int32 kajyanndaTurn, const E_BTL_CNT kajyandaType, const E_BTL_CNT kajyandaTurnType) {
    return false;
}

bool UBPL_AsyncLib::IsUsedKajyandaSkill(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedItem(const FUseItemData& Item, const FBtlParty& Player, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedHPCureSkill(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedHPCureItem(const FUseItemData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedDamageCutSkill(const FSkillBaseData& skill, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedChargeSkill(const FSkillBaseData& skill, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedBstSkill(const FSkillBaseData& skill, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedBstCureSkill(const FSkillBaseData& skill, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedAnalyzeSkill(const FSkillBaseData& skill, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedAidClearSkill(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return false;
}

bool UBPL_AsyncLib::IsUsedAddGaugeSkill(UObject* mainWork, const FSkillBaseData& skill, const int32& PlayerUpliftingGauge) {
    return false;
}

int32 UBPL_AsyncLib::GetSkillBarrierCount(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return 0;
}

int32 UBPL_AsyncLib::GetRecoveryHPUpRate(const FSkillBaseData& skill, const FBtlParty& Player, const FBtlParty& party) {
    return 0;
}

E_BTL_CNT UBPL_AsyncLib::GetBarrierType(const uint8 barrier, const E_ATTRIBUTE_TYPE attr) {
    return E_BTL_CNT::E_BTL_CNT_DMG;
}

TArray<int32> UBPL_AsyncLib::GetAddMagatsuhiSkillId(const FBtlParty& Player, const TArray<FBtlParty>& partyAll) {
    return TArray<int32>();
}

bool UBPL_AsyncLib::CheckRecomeSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckProvokeSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckPrevTurnAvoid(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckPressIcon(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckPass(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckMPCureSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckMPCureItem(const FUseItemData& Item) {
    return false;
}

bool UBPL_AsyncLib::CheckKarnSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckKajyandaSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckHPCureSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckHPCureItem(const FUseItemData& Item) {
    return false;
}

bool UBPL_AsyncLib::CheckDamageCutSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckChargeSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckBstSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckBstCureSkill(const FSkillBaseData& skill, const FBtlParty& Player) {
    return false;
}

bool UBPL_AsyncLib::CheckAnalyzeSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckAidClearSkill(const FSkillBaseData& skill) {
    return false;
}

bool UBPL_AsyncLib::CheckAddGaugeSkill(const FSkillBaseData& skill) {
    return false;
}


