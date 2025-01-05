#include "BPL_DBaseData.h"

UBPL_DBaseData::UBPL_DBaseData() {
}

TArray<int32> UBPL_DBaseData::GetMagatsukaID_FromGodParam(int32 godParamID) {
    return TArray<int32>();
}

FMapDBaseData UBPL_DBaseData::GetDBaseData(int32 ID) {
    return FMapDBaseData{};
}

bool UBPL_DBaseData::CheckMagatsukaDead_FromGodParam(int32 godParamID) {
    return false;
}


