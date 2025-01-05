#include "BPL_PieceData.h"

UBPL_PieceData::UBPL_PieceData() {
}

AActor* UBPL_PieceData::SpawnMovePieceActor(UObject* pWorldContextObject, UClass* pClass, FTransform Transform) {
    return NULL;
}

void UBPL_PieceData::SetPieceHaveNum(int32 ItemId, int32 Num) {
}

void UBPL_PieceData::SetPieceHaveFlag(int32 ItemId, bool flag) {
}

E_PIECE_TYPE UBPL_PieceData::GetPieceType(int32 ID) {
    return E_PIECE_TYPE::E_PIECE_TYPE_ITEM;
}

E_PIECE_MAJOR_TYPE UBPL_PieceData::GetPieceMajorType(int32 ID) {
    return E_PIECE_MAJOR_TYPE::E_PIECE_MAJOR_HAVE;
}

int32 UBPL_PieceData::GetPieceHaveNum(int32 ItemId) {
    return 0;
}

bool UBPL_PieceData::GetPieceHaveFlag(int32 ItemId) {
    return false;
}

FPieceData UBPL_PieceData::GetPieceData(int32 ID) {
    return FPieceData{};
}

void UBPL_PieceData::AddPieceHaveNum(int32 ItemId, int32 Add, int32& changeItemNum, int32& nextPieceNum) {
}


