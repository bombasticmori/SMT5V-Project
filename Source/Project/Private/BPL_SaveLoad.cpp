#include "BPL_SaveLoad.h"

UBPL_SaveLoad::UBPL_SaveLoad() {
}

bool UBPL_SaveLoad::WaitSaveAsync() {
    return false;
}

bool UBPL_SaveLoad::WaitLoadAsync() {
    return false;
}

bool UBPL_SaveLoad::WaitLoadAllSaveDataHeaderAsync() {
    return false;
}

bool UBPL_SaveLoad::WaitDeleteAsync() {
    return false;
}

bool UBPL_SaveLoad::WaitCheckAsync() {
    return false;
}

void UBPL_SaveLoad::SaveSystemAsync() {
}

void UBPL_SaveLoad::SaveLoadAsyncTaskDelete() {
}

void UBPL_SaveLoad::SaveAsync(const int32 ListIndex) {
}

bool UBPL_SaveLoad::Save(const int32 ListIndex) {
    return false;
}

void UBPL_SaveLoad::LoadSystemAsync() {
}

void UBPL_SaveLoad::LoadAsync(const int32 ListIndex) {
}

void UBPL_SaveLoad::LoadAllSaveDataHeaderAsync(const E_SaveListType SaveListType) {
}

bool UBPL_SaveLoad::LoadAllSaveDataHeader(const E_SaveListType SaveListType) {
    return false;
}

bool UBPL_SaveLoad::Load(const int32 ListIndex) {
    return false;
}

bool UBPL_SaveLoad::IsCompletePrepareGettingSaveName() {
    return false;
}

bool UBPL_SaveLoad::isAnySlotSaveData() {
    return false;
}

bool UBPL_SaveLoad::GetSaveResult() {
    return false;
}

TArray<FSaveLoadHeaderData> UBPL_SaveLoad::GetSaveLoadHeaderDataArray() {
    return TArray<FSaveLoadHeaderData>();
}

int32 UBPL_SaveLoad::GetSaveFileIndex(const FString& Filename) {
    return 0;
}

int32 UBPL_SaveLoad::GetMinDateTimeAutoSaveIndex() {
    return 0;
}

int32 UBPL_SaveLoad::GetMaxDateTimeSlotIndex() {
    return 0;
}

bool UBPL_SaveLoad::GetLoadResult() {
    return false;
}

bool UBPL_SaveLoad::GetLoadAllSaveDataHeaderResult() {
    return false;
}

bool UBPL_SaveLoad::GetDeleteResult() {
    return false;
}

E_SaveExistsResult UBPL_SaveLoad::GetCheckResult() {
    return E_SaveExistsResult::E_OK;
}

void UBPL_SaveLoad::DeleteLoadAllSaveDataHeaderTask() {
}

void UBPL_SaveLoad::DeleteAsync(const int32 ListIndex) {
}

bool UBPL_SaveLoad::Delete(const int32 ListIndex) {
    return false;
}

void UBPL_SaveLoad::debugSetGameStartMode(E_GAME_START_MODE startMode) {
}

void UBPL_SaveLoad::debugSetClearRound(const uint8 Count) {
}

void UBPL_SaveLoad::debugSetClearAlignment(E_ALIGNMENT Alignment, bool flag) {
}

E_SaveExistsResult UBPL_SaveLoad::debugSaveExist(const FString& SaveName) {
    return E_SaveExistsResult::E_OK;
}

void UBPL_SaveLoad::debugResaveAll() {
}

bool UBPL_SaveLoad::debugLoadSlot(const FString& SaveName) {
    return false;
}

void UBPL_SaveLoad::CheckSystemAsync() {
}

void UBPL_SaveLoad::CheckAsync(const int32 ListIndex) {
}

E_SaveExistsResult UBPL_SaveLoad::Check(const int32 ListIndex) {
    return E_SaveExistsResult::E_OK;
}

void UBPL_SaveLoad::BindSaveGameInfo() {
}


