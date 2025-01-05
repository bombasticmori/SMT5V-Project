#include "BPL_EncountData.h"

UBPL_EncountData::UBPL_EncountData() {
}

void UBPL_EncountData::SettingEncountDataRandomStream(const FRandomStream& RandomStream) {
}

void UBPL_EncountData::ReleaseEncountDataRandomStream() {
}

int32 UBPL_EncountData::GetRandomEncountId_Dungeon(int32 mapId, int32 Index) {
    return 0;
}

int32 UBPL_EncountData::GetRandomEncountId(int32 pack_id) {
    return 0;
}

int32 UBPL_EncountData::GetEncountPackDataNum() {
    return 0;
}

FPackEncount UBPL_EncountData::GetEncountPackData_Dungeon(int32 mapId, int32 Index, int32& packId) {
    return FPackEncount{};
}

FPackEncount UBPL_EncountData::GetEncountPackData(int32 ID) {
    return FPackEncount{};
}

int32 UBPL_EncountData::GetEncountDataNum() {
    return 0;
}

FOneEncountData UBPL_EncountData::GetEncountData(int32 ID) {
    return FOneEncountData{};
}


