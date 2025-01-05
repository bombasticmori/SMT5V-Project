#include "BPL_BattleParty.h"

UBPL_BattleParty::UBPL_BattleParty() {
}

bool UBPL_BattleParty::BattlePartyStockIsExistDeadAny(TArray<FBtlParty> partyArray) {
    return false;
}

FBtlParty UBPL_BattleParty::BattlePartySetNowCommand(FBtlParty src, FBtlCommand Cmd) {
    return FBtlParty{};
}

FBtlParty UBPL_BattleParty::BattlePartySetAutoEruptAidCounter(FBtlParty src) {
    return FBtlParty{};
}

FBtlParty UBPL_BattleParty::BattlePartyNkmParamSwitch(FBtlParty pNkmData, bool IsNahobino) {
    return FBtlParty{};
}

bool UBPL_BattleParty::BattlePartyIsItemUseableItemList(FBtlParty Actor, int32 ItemId) {
    return false;
}

bool UBPL_BattleParty::BattlePartyIsHero(FBtlParty& Actor) {
    return false;
}

int32 UBPL_BattleParty::BattlePartyGetTekiseiValue(FBtlParty src, E_SKILL_TEKISEI_CATEGORY categ) {
    return 0;
}

TArray<int32> UBPL_BattleParty::BattlePartyGetSkillList(FBtlParty src) {
    return TArray<int32>();
}

int32 UBPL_BattleParty::BattlePartyGetSkillCost(FBtlParty src, int32 SkillId) {
    return 0;
}

int32 UBPL_BattleParty::BattlePartyGetAidCounterMinValue(int32 Type) {
    return 0;
}

int32 UBPL_BattleParty::BattlePartyGetAidCounterMaxValue(int32 Type) {
    return 0;
}

int32 UBPL_BattleParty::BattlePartyGetAidCounter(FBtlParty src, int32 Type) {
    return 0;
}

bool UBPL_BattleParty::BattlePartyCanCounter(FBtlParty src, FBtlParty dst) {
    return false;
}

void UBPL_BattleParty::BattlePartyAttributeHit(FBtlParty src, E_ATTRIBUTE_TYPE attr, E_BTL_REFLECT_RES_TYPE& ret, bool& isBarrierHit) {
}

FBtlCommand UBPL_BattleParty::BattleCommandSetSkill(FBtlParty src, int32 SkillId, int32 targetIndex) {
    return FBtlCommand{};
}

FBtlCommand UBPL_BattleParty::BattleCommandSetAttack(FBtlParty src, int32 targetIndex) {
    return FBtlCommand{};
}


