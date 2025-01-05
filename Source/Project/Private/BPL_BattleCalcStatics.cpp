#include "BPL_BattleCalcStatics.h"

UBPL_BattleCalcStatics::UBPL_BattleCalcStatics() {
}

E_BTL_CNT UBPL_BattleCalcStatics::GetRandSkillAidCounter() {
    return E_BTL_CNT::E_BTL_CNT_DMG;
}

float UBPL_BattleCalcStatics::GetPlayerFirstRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetPlayerCriticalRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetHitPlayerBstRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetHitPlayerAttackRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetHitEnemyAttack(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetEscapeSuccessRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetEnemyBstRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetDiffRate(E_BTL_DIFF diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetDeathPlayerRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetDeathEnemyRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetDamageTakeEnemyRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

float UBPL_BattleCalcStatics::GetDamageEnemyRate(E_GAME_DIFFICULTY diff) {
    return 0.0f;
}

bool UBPL_BattleCalcStatics::CheckHighAisyo(int32 aisyo) {
    return false;
}

bool UBPL_BattleCalcStatics::CheckDamageAttackKindPhysical(E_SKILL_TYPE Kind) {
    return false;
}

bool UBPL_BattleCalcStatics::CheckDamageAttackKind(E_SKILL_TYPE Kind) {
    return false;
}

E_BST_TYPE UBPL_BattleCalcStatics::CheckBstType(E_BAD_STATUS bst) {
    return E_BST_TYPE::E_BST_TYPE_ATTR;
}

bool UBPL_BattleCalcStatics::CheckAishouMinus(int32 targetAishou) {
    return false;
}

void UBPL_BattleCalcStatics::CancelBst(int32& bst_bit) {
}

FPressIcon UBPL_BattleCalcStatics::CalcPressIcon(E_BTL_PRESS_TYPE press_type, FPressIcon current_press_icon) {
    return FPressIcon{};
}

FPressIcon UBPL_BattleCalcStatics::CalcDrawPressIconNum(FPressIcon current_press_icon) {
    return FPressIcon{};
}

FPressIcon UBPL_BattleCalcStatics::ApplyPressIcon(FPressIcon current_press_icon, FPressIcon add_press_icon) {
    return FPressIcon{};
}

uint8 UBPL_BattleCalcStatics::AddCount(const uint8& originValue, const uint8& addValue) {
    return 0;
}

float UBPL_BattleCalcStatics::ActSpeedCalc(float baseSpd, float baseLv) {
    return 0.0f;
}


