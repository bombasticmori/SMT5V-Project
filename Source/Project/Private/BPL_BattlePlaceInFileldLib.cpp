#include "BPL_BattlePlaceInFileldLib.h"

UBPL_BattlePlaceInFileldLib::UBPL_BattlePlaceInFileldLib() {
}

bool UBPL_BattlePlaceInFileldLib::BattlePlaceInFieldSetPost(int32 fieldGrid_X, int32 fieldGrid_Y, FBattleUnitPlaceOne place, int32 postIndex, TArray<int32>& pResult) {
    return false;
}

int32 UBPL_BattlePlaceInFileldLib::BattlePlaceInFieldGetPostIndex(int32 fieldGrid_X, int32 fieldGrid_Y, FBattleUnitPlaceOne place, int32 postIndex, TArray<int32>& pResult) {
    return 0;
}

void UBPL_BattlePlaceInFileldLib::BattlePlaceInFieldGetInfo(FBattleUnitPlaceOne place, int32& vertical, int32& horizontal, int32& tall) {
}

void UBPL_BattlePlaceInFileldLib::BattleNewPlaceInFieldFree(int32 fieldGrid_X, int32 fieldGrid_Y, TArray<FBattleUnitPlaceOne> unitArray, bool& pFinished, bool& pSuccess, TArray<int32>& pResult, bool isReplace) {
}

void UBPL_BattlePlaceInFileldLib::BattleNewPlaceInField(E_BTL_FIELD_TYPE Type, TArray<FBattleUnitPlaceOne> unitArray, bool& pFinished, bool& pSuccess, TArray<int32>& pResult) {
}


