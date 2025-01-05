#include "BPL_CoasterData.h"

UBPL_CoasterData::UBPL_CoasterData() {
}

int32 UBPL_CoasterData::GetCoasterSaveBufferStart(int32 mapId) {
    return 0;
}

int32 UBPL_CoasterData::GetCoasterSaveBufferNum(int32 mapId) {
    return 0;
}

int32 UBPL_CoasterData::GetCoasterSaveBufferDataMax() {
    return 0;
}

FCoasterSaveBuffer UBPL_CoasterData::GetCoasterSaveBufferData(int32 tableID) {
    return FCoasterSaveBuffer{};
}


