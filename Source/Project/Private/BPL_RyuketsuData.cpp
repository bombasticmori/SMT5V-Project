#include "BPL_RyuketsuData.h"

UBPL_RyuketsuData::UBPL_RyuketsuData() {
}

TArray<int32> UBPL_RyuketsuData::GetRyuketsuIDList_Sorted() {
    return TArray<int32>();
}

int32 UBPL_RyuketsuData::GetRyuketsuDataMax() {
    return 0;
}

void UBPL_RyuketsuData::GetRyuketsuDataId_FromMapID(int32 mapId, int32 AreaId, int32 Index, int32& ID) {
}

FRyuketsuData UBPL_RyuketsuData::GetRyuketsuData_FromMapID(int32 mapId, int32 AreaId, int32 Index, int32& ID) {
    return FRyuketsuData{};
}

FRyuketsuData UBPL_RyuketsuData::GetRyuketsuData(int32 ID) {
    return FRyuketsuData{};
}

FName UBPL_RyuketsuData::ConvertRyuketsuNameLabel(FName beforeLabel) {
    return NAME_None;
}


