#include "BPL_BattleAttack.h"

UBPL_BattleAttack::UBPL_BattleAttack() {
}

FBtlAttack UBPL_BattleAttack::MakeUpBattleAttackData(FBtlParty Player) {
    return FBtlAttack{};
}

bool UBPL_BattleAttack::BtlAttackIsSummon(FBtlAttack pData) {
    return false;
}

bool UBPL_BattleAttack::BtlAttackIsRecoverySkill(FBtlAttack pData) {
    return false;
}

bool UBPL_BattleAttack::BtlAttackIsRecome(FBtlAttack pData) {
    return false;
}

bool UBPL_BattleAttack::BtlAttackIsPhysicalAttack(FBtlAttack pData) {
    return false;
}

bool UBPL_BattleAttack::BtlAttackIsMasicalAttack(FBtlAttack pData) {
    return false;
}

bool UBPL_BattleAttack::BtlAttackIsHaveAtrAttr(FBtlAttack pData, E_ATTRIBUTE_TYPE inAttr) {
    return false;
}

void UBPL_BattleAttack::BtlAttackGetTekiseiValue(FBtlParty Player, FBtlAttack pData, E_SKILL_TEKISEI_EFT_TYPE checkType, int32& retValue, E_SKILL_TEKISEI_CATEGORY& retCateg) {
}

bool UBPL_BattleAttack::BtlAttackCheckAttr(FBtlAttack pData, E_ATTRIBUTE_TYPE checkAttr) {
    return false;
}


