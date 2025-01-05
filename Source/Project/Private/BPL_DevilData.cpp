#include "BPL_DevilData.h"

UBPL_DevilData::UBPL_DevilData() {
}

bool UBPL_DevilData::IsGuestByDevilID(int32 DevilID) {
    return false;
}

int32 UBPL_DevilData::GetRacePriorityByDevilId(int32 InDevilId) {
    return 0;
}

int32 UBPL_DevilData::GetRaceIdByDevilId(int32 InDevilId) {
    return 0;
}

int32 UBPL_DevilData::GetMapPosPriority(int32 InPosId) {
    return 0;
}

int32 UBPL_DevilData::GetMapAreaPriority(int32 InAreaId) {
    return 0;
}

int32 UBPL_DevilData::GetEnemyMagatsuhiSkillId(int32 DevilID, int32 Index, bool isChallengeBtl) {
    return 0;
}

int32 UBPL_DevilData::GetEnemyDefaultMagatsuhiSkillId(int32 DevilID, bool isChallengeBtl) {
    return 0;
}

FEnemyData UBPL_DevilData::GetEnemyBaseData(int32 ID) {
    return FEnemyData{};
}

int32 UBPL_DevilData::GetEmemyBaseTableNum() {
    return 0;
}

FText UBPL_DevilData::GetDevilRaceNameByRaceID(int32 raceID) {
    return FText::GetEmpty();
}

FText UBPL_DevilData::GetDevilRaceName(int32 ID) {
    return FText::GetEmpty();
}

FText UBPL_DevilData::GetDevilName(int32 ID) {
    return FText::GetEmpty();
}

int32 UBPL_DevilData::GetDevilBaseTableNum() {
    return 0;
}

FDevilBaseData UBPL_DevilData::GetDevilBaseData(int32 ID) {
    return FDevilBaseData{};
}

FCreateModeDevilRate UBPL_DevilData::GetCreateModeDevilRate() {
    return FCreateModeDevilRate{};
}

TArray<FCreateModeDevilData> UBPL_DevilData::GetCreateModeDevilDataArray() {
    return TArray<FCreateModeDevilData>();
}

FAbilData UBPL_DevilData::GetCreateModeDevilAbilData(int32 DevilID) {
    return FAbilData{};
}

int32 UBPL_DevilData::GetAreaPriorityByDevilId(int32 InDevilId) {
    return 0;
}

bool UBPL_DevilData::EnemyBaseDataGetValue_IsDummy(FEnemyData pData) {
    return false;
}

bool UBPL_DevilData::DevilBaseDataGetValue_IsDummy(FDevilBaseData pData) {
    return false;
}

bool UBPL_DevilData::CheckUniqueSkillEffect(int32 ID, E_AUTO_SKILL_EXTRA_EFFECT SkillExtraEffect) {
    return false;
}


