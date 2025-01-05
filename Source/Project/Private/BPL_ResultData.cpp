#include "BPL_ResultData.h"

UBPL_ResultData::UBPL_ResultData() {
}

void UBPL_ResultData::TestFuncDropItemRandomGet(const int32 getNum) {
}

void UBPL_ResultData::TestFuncAddEnemyExpData(const int32 enemyLv, const int32 Exp) {
}

void UBPL_ResultData::StackResultData(FResultData& inResultData, bool& Success) {
}

void UBPL_ResultData::SetBattleResultEnable(bool Enable) {
}

void UBPL_ResultData::ResultDataClear() {
}

void UBPL_ResultData::PushResultMainActor(AActor* Actor) {
}

AActor* UBPL_ResultData::PopResultMainActor() {
    return NULL;
}

void UBPL_ResultData::OverrideBtlCntInResultData(int32 newBtlCnt) {
}

bool UBPL_ResultData::GetBattleResultEnable() {
    return false;
}

bool UBPL_ResultData::ExistPushedResultMainActor() {
    return false;
}

TArray<RESULT_JOINDATA> UBPL_ResultData::CreateInitializedJoinData(RESULT_JOINDATA joinData) {
    return TArray<RESULT_JOINDATA>();
}


