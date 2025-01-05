#include "BPL_CharGrow.h"

UBPL_CharGrow::UBPL_CharGrow() {
}

bool UBPL_CharGrow::PlayerGrowDataIsDummy(FPlayerGrowData pData) {
    return false;
}

FText UBPL_CharGrow::GetPlayerRace(E_PLAYER_TYPE playerType) {
    return FText::GetEmpty();
}

FPlayerGrowData UBPL_CharGrow::GetPlayerGrowTableData() {
    return FPlayerGrowData{};
}


