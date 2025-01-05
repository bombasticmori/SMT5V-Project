#include "BPL_BattleSkillAction.h"

UBPL_BattleSkillAction::UBPL_BattleSkillAction() {
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetTargetIndex(FSkillActionTargetInfo src, int32 partyIndex, int32 fromPartyIndex) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetRecMP(FSkillActionTargetInfo src, int32 recMP, int32 Index) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetRecHP(FSkillActionTargetInfo src, int32 recHP, int32 Index) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetRecBst(FSkillActionTargetInfo src, int32 bst) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetNahobinoBreakOn(FSkillActionTargetInfo src) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetHitFull(FSkillActionTargetInfo src, E_BTL_REFLECT_RES_TYPE Value, E_BTL_DAMAGE_HIT_TYPE damageHit, int32 Damage, int32 damageReal, int32 rec, int32 damageMP, int32 recMP) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetHit(FSkillActionTargetInfo src, E_BTL_REFLECT_RES_TYPE Value, E_BTL_DAMAGE_HIT_TYPE damageHit, int32 Damage, int32 damageReal) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetDeadOn(FSkillActionTargetInfo src, E_BTL_DEAD_EFFECT deadType) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetDeadOff(FSkillActionTargetInfo src) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetCriticalLevel(FSkillActionTargetInfo src, int32 Value) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetCounterOn(FSkillActionTargetInfo src) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetBst(FSkillActionTargetInfo src, int32 bst) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoSetAid(FSkillActionTargetInfo src, E_BTL_SKILL_ACTION_AID aid) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoResistOn(FSkillActionTargetInfo src) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoGuardOn(FSkillActionTargetInfo src) {
    return FSkillActionTargetInfo{};
}

FSkillActionTargetInfo UBPL_BattleSkillAction::BattleSkillActionTargetInfoComboOn(FSkillActionTargetInfo src) {
    return FSkillActionTargetInfo{};
}

bool UBPL_BattleSkillAction::BattleSkillActionLoadTable(UDataTable* DataTable, TMap<FName, FBattleSkillAction_Raw>& OutMap) {
    return false;
}

int32 UBPL_BattleSkillAction::BattleSkillActionIsTargetNum(FSkillActionDesc src) {
    return 0;
}

bool UBPL_BattleSkillAction::BattleSkillActionIsTargetDead(FSkillActionDesc src, int32 Index) {
    return false;
}

bool UBPL_BattleSkillAction::BattleSkillActionIsSkillMasterExec(FSkillActionDesc src) {
    return false;
}

void UBPL_BattleSkillAction::BattleSkillActionGetSkillMasterEffectID(FSkillActionDesc src, int32& effectID, E_SKILL_MASTER_TARGET& target) {
}

FSkillActionDesc UBPL_BattleSkillAction::BattleSkillActionDescSetSkillID(FSkillActionDesc src, int32 SkillId, int32 ItemId) {
    return FSkillActionDesc{};
}

FSkillActionDesc UBPL_BattleSkillAction::BattleSkillActionDescSetExtraAction(FSkillActionDesc src, E_BTL_EXTRA_ACTION Action) {
    return FSkillActionDesc{};
}

FSkillActionDesc UBPL_BattleSkillAction::BattleSkillActionDescSetCounterOn(FSkillActionDesc src) {
    return FSkillActionDesc{};
}

FSkillActionDesc UBPL_BattleSkillAction::BattleSkillActionDescSetActorIndex(FSkillActionDesc src, int32 partyIndex) {
    return FSkillActionDesc{};
}

FSkillActionDesc UBPL_BattleSkillAction::BattleSkillActionDescAddTargetInfo(FSkillActionDesc src, FSkillActionTargetInfo Data, bool isReflex) {
    return FSkillActionDesc{};
}

FSkillActionDesc UBPL_BattleSkillAction::BattleSkillActionDescAddExtendAction(FSkillActionDesc src, FSkillActionExtend extend) {
    return FSkillActionDesc{};
}

FSkillActionDesc UBPL_BattleSkillAction::BattleSkillActionDescAddDrainHPMP(FSkillActionDesc src, int32 drainHP, int32 drainMP) {
    return FSkillActionDesc{};
}


