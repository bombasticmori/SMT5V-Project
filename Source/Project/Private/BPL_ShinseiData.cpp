#include "BPL_ShinseiData.h"

UBPL_ShinseiData::UBPL_ShinseiData() {
}

int32 UBPL_ShinseiData::GetShinseiSaveBufferStart(int32 mapId, int32 AreaId) {
    return 0;
}

int32 UBPL_ShinseiData::GetShinseiSaveBufferNum(int32 mapId, int32 AreaId) {
    return 0;
}

int32 UBPL_ShinseiData::GetShinseiSaveBufferDataMax() {
    return 0;
}

FShinseiSaveBuffer UBPL_ShinseiData::GetShinseiSaveBufferData(int32 tableID) {
    return FShinseiSaveBuffer{};
}

FShinseiData UBPL_ShinseiData::GetShinseiData(E_ShinseiKind Kind) {
    return FShinseiData{};
}


