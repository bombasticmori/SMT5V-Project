#include "BPL_RelicData.h"

UBPL_RelicData::UBPL_RelicData() {
}

int32 UBPL_RelicData::GetRelicTableIndex(int32 mapId, int32 Index) {
    return 0;
}

int32 UBPL_RelicData::GetRelicSaveBufferStart(int32 mapId, int32 AreaId) {
    return 0;
}

int32 UBPL_RelicData::GetRelicSaveBufferNum(int32 mapId, int32 AreaId) {
    return 0;
}

int32 UBPL_RelicData::GetRelicSaveBufferDataMax() {
    return 0;
}

FRelicSaveBuffer UBPL_RelicData::GetRelicSaveBufferData(int32 tableID) {
    return FRelicSaveBuffer{};
}

FRelicData UBPL_RelicData::GetRelicData_FromTableIndex(int32 tableIndex) {
    return FRelicData{};
}

FRelicData UBPL_RelicData::GetRelicData(int32 mapId, int32 Index) {
    return FRelicData{};
}


