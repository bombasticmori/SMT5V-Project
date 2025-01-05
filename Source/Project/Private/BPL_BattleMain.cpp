#include "BPL_BattleMain.h"

UBPL_BattleMain::UBPL_BattleMain() {
}

TArray<FBtlKuishibariData> UBPL_BattleMain::BattleMainSetKuishibariUsedList(TArray<FBtlKuishibariData> list, FBtlParty src, E_KUISHIBARI_LEVEL Level) {
    return TArray<FBtlKuishibariData>();
}

TArray<FBtlKillData> UBPL_BattleMain::BattleMainSetKillEnemy(TArray<FBtlKillData> list, int32 enemyID) {
    return TArray<FBtlKillData>();
}

TArray<FBtlKuishibariData> UBPL_BattleMain::BattleMainDeleteKuishibariUsedList(TArray<FBtlKuishibariData> list, bool isPlayer) {
    return TArray<FBtlKuishibariData>();
}

bool UBPL_BattleMain::BattleMainCheckKuishibariUsedList(TArray<FBtlKuishibariData> list, FBtlParty src, E_KUISHIBARI_LEVEL Level) {
    return false;
}


