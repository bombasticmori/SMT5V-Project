#include "BPL_BibleData.h"

UBPL_BibleData::UBPL_BibleData() {
}

void UBPL_BibleData::SetBibleEntryFlag(int32 DevilID, bool IsEntry) {
}

void UBPL_BibleData::SetBibleData(int32 DevilID, FBibleData Data) {
}

bool UBPL_BibleData::IsAbleBibleEntry(int32 DevilID) {
    return false;
}

void UBPL_BibleData::InitBibleAll() {
}

void UBPL_BibleData::InitBible(int32 DevilID) {
}

int32 UBPL_BibleData::GetBibleMax() {
    return 0;
}

int32 UBPL_BibleData::GetBibleEntryNum() {
    return 0;
}

FBibleData UBPL_BibleData::GetBibleDataDirect(int32 DevilID) {
    return FBibleData{};
}

FBibleData UBPL_BibleData::GetBibleData(int32 DevilID) {
    return FBibleData{};
}

bool UBPL_BibleData::EntryBibleFirst_ByNkmIndex(int32 NkmIndex) {
    return false;
}

void UBPL_BibleData::EntryBibleAll() {
}

void UBPL_BibleData::EntryBible_ByNkmIndex(int32 NkmIndex) {
}

bool UBPL_BibleData::CompareNkmAndBible(int32 NkmIndex) {
    return false;
}

bool UBPL_BibleData::CheckBibleEntry(int32 DevilID) {
    return false;
}


