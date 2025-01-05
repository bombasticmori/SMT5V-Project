#include "BattleCalcBase.h"

UBattleCalcBase::UBattleCalcBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UBattleCalcBase::StanDamageCalc(int32 SkillId, int32 srcLv, int32 dstLv) {
    return 0;
}

FBtlResultData UBattleCalcBase::ResultItemGabage(const FBtlResultData& pResult, int32 getItem) {
    return FBtlResultData{};
}

int32 UBattleCalcBase::GetResultItemKindNum(const FBtlResultData& pResult) {
    return 0;
}

void UBattleCalcBase::GetMagatsuhiDevilFirstDropItemIDandNum(const FBtlParty& party, const FEnemyData& EnemyData, bool Log, int32& outItemID, int32& outItemNum) {
}

FBtlResultData UBattleCalcBase::GetExpMakkaItemForTalk(const FBtlResultData& pResult, const FBtlParty& pParty) {
    return FBtlResultData{};
}

FBtlResultData UBattleCalcBase::GetExpMakkaItem(const FBtlResultData& pResult, const FBtlParty& pParty, bool isRenzoku) {
    return FBtlResultData{};
}

float UBattleCalcBase::BattleRandF2(float Min, float Max) {
    return 0.0f;
}

float UBattleCalcBase::BattleRandF(float Max) {
    return 0.0f;
}

int32 UBattleCalcBase::BattleRand2(int32 Min, int32 Max) {
    return 0;
}

int32 UBattleCalcBase::BattleRand(int32 Max) {
    return 0;
}


