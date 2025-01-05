#include "BPL_EventEncountData.h"

UBPL_EventEncountData::UBPL_EventEncountData() {
}

bool UBPL_EventEncountData::IsUnlockBossRush(const int32& eventEncountId) {
    return false;
}

bool UBPL_EventEncountData::IsFirstClearBossRushOriginalMode(const int32& eventEncountId) {
    return false;
}

FEventEncountData UBPL_EventEncountData::GetEvtEncountData(int32 encount_id) {
    return FEventEncountData{};
}

int32 UBPL_EventEncountData::GetEventEncountDataNum() {
    return 0;
}

int32 UBPL_EventEncountData::GetBossRushChallengeModeLevel(const int32& eventEncountId) {
    return 0;
}

void UBPL_EventEncountData::ClearBossRushOneDataAll() {
}

void UBPL_EventEncountData::ClearBossRushChallengeMode(const int32& eventEncountId) {
}


