#include "BPL_NaviDevilData.h"

UBPL_NaviDevilData::UBPL_NaviDevilData() {
}

int32 UBPL_NaviDevilData::GetNaviDevilGimmickUniqueSaveID(int32 tableIndex) {
    return 0;
}

int32 UBPL_NaviDevilData::GetNaviDevilGimmickDataMax() {
    return 0;
}

FNaviDevilGimmickData UBPL_NaviDevilData::GetNaviDevilGimmickData_FromID(int32 mapId, int32 Index, int32 excavateType, int32 nowNavi, int32& tableIndex) {
    return FNaviDevilGimmickData{};
}

FNaviDevilGimmickData UBPL_NaviDevilData::GetNaviDevilGimmickData(int32 Index) {
    return FNaviDevilGimmickData{};
}

int32 UBPL_NaviDevilData::GetNaviDevilDataMax() {
    return 0;
}

FNaviDevilData UBPL_NaviDevilData::GetNaviDevilData_FromEnum(E_NAVI_DEVIL devilEnum) {
    return FNaviDevilData{};
}

FNaviDevilData UBPL_NaviDevilData::GetNaviDevilData_FromDevilID(int32 DevilID) {
    return FNaviDevilData{};
}

FNaviDevilData UBPL_NaviDevilData::GetNaviDevilData(int32 Index) {
    return FNaviDevilData{};
}

void UBPL_NaviDevilData::ConvertNaviDevilGimmickActors(TArray<FNaviDevilGimmickActors>& Out, const TArray<AActor*>& pActorList, const TArray<int32>& categoryList) {
}


