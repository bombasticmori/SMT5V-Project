#include "BPL_PCSave.h"

UBPL_PCSave::UBPL_PCSave() {
}

void UBPL_PCSave::PCSave_ResaveAllInDirectory() {
}

TArray<FString> UBPL_PCSave::PCSave_PickupFilePath() {
    return TArray<FString>();
}

void UBPL_PCSave::PCSave_OverwriteExecute(const FString& Filename, int32 slotNo) {
}

void UBPL_PCSave::PCSave_LoadExecute(const FString& Name, int32 slotNo, bool& LoadedGameData) {
}

void UBPL_PCSave::PCSave_Execute(const FString& overrideName, int32 slotNo) {
}

bool UBPL_PCSave::PCSave_DeleteExecute(const FString& Name, int32 slotNo) {
    return false;
}


