#include "BPL_MimanData.h"

UBPL_MimanData::UBPL_MimanData() {
}

int32 UBPL_MimanData::GetMimanSaveBufferStart(int32 mapId, int32 AreaId) {
    return 0;
}

int32 UBPL_MimanData::GetMimanSaveBufferNum(int32 mapId, int32 AreaId) {
    return 0;
}

int32 UBPL_MimanData::GetMimanSaveBufferDataMax() {
    return 0;
}

FMimanSaveBuffer UBPL_MimanData::GetMimanSaveBufferData(int32 tableID) {
    return FMimanSaveBuffer{};
}

FMimanData UBPL_MimanData::GetMimanData(int32 mapId) {
    return FMimanData{};
}


