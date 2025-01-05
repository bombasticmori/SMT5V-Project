#include "BPL_MapEventData.h"

UBPL_MapEventData::UBPL_MapEventData() {
}

void UBPL_MapEventData::SetMapEventStartFlags(int32 _mapEventID, bool Value) {
}

void UBPL_MapEventData::SetMapEventEndFlag(int32 _mapEventID, bool Value) {
}

void UBPL_MapEventData::SetMapEventAfterFlag(int32 _mapEventID, bool Value) {
}

bool UBPL_MapEventData::IsMapEventActivateFlagsFromData(const FMapEventData& MapEventData) {
    return false;
}

bool UBPL_MapEventData::IsMapEventActivateFlags(int32 _mapEventID) {
    return false;
}

void UBPL_MapEventData::GetMapEventNext(int32 _nowMapEventId, int32& nextMapId, int32& nextAreaId, int32& nextWarpPoint, int32& _nextMapEventId) {
}

int32 UBPL_MapEventData::GetMapEventIdFromIndex(int32 _mapEventID) {
    return 0;
}

int32 UBPL_MapEventData::GetMapEventDataNum() {
    return 0;
}

FMapEventData UBPL_MapEventData::GetMapEventDataFromMapEventId(int32 _mapEventID) {
    return FMapEventData{};
}

FMapEventData UBPL_MapEventData::GetMapEventData(int32 ID) {
    return FMapEventData{};
}


