#include "SaveLoadBase.h"

ASaveLoadBase::ASaveLoadBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ASaveLoadBase::UpdateLuciferDefeatedForSystemData() {
    return false;
}

void ASaveLoadBase::UnlockShiseijoBible() {
}

void ASaveLoadBase::StartHeaderLoadNonAsync() {
}

void ASaveLoadBase::StartHeaderLoad() {
}

void ASaveLoadBase::StartDataSave(int32 Index, bool isInheritSave) {
}

void ASaveLoadBase::StartDataLoad(int32 Index) {
}

void ASaveLoadBase::ResetLuciferDefeatedForSystemData() {
}

bool ASaveLoadBase::NeedShiseijoBibleMsg(const E_SHISEIJO& shiseijo) {
    return false;
}

bool ASaveLoadBase::IsValidHeaderSlotIndex(int32 Index) {
    return false;
}

bool ASaveLoadBase::IsUnlockedShiseijoBible(const E_SHISEIJO& shiseijo) {
    return false;
}

bool ASaveLoadBase::IsTokyoKeyFreeSave_Implementation() {
    return false;
}

bool ASaveLoadBase::IsSavedSlot(int32 Index) {
    return false;
}

bool ASaveLoadBase::IsNotLimitedByTrialVersion(int32 Index) {
    return false;
}

bool ASaveLoadBase::IsInstalledAreaSave(int32 Index) {
    return false;
}

bool ASaveLoadBase::IsInheritSlot(int32 Index) {
    return false;
}

bool ASaveLoadBase::IsEnoughDlcContents(int32 Index) {
    return false;
}

void ASaveLoadBase::IsEndHeaderLoad(bool& complete, bool& Success) {
}

void ASaveLoadBase::IsEndDataSave(bool& complete, bool& Success) {
}

void ASaveLoadBase::IsEndDataLoad(bool& complete, bool& Success) {
}

bool ASaveLoadBase::IsEnableCreationMode() {
    return false;
}

bool ASaveLoadBase::IsCompatibleLanguageData(int32 Index) {
    return false;
}

int32 ASaveLoadBase::GetSlotIndexForActivityStart(E_OldNewRoute route) {
    return 0;
}

int32 ASaveLoadBase::GetLocationMessageID_Implementation() {
    return 0;
}

int32 ASaveLoadBase::GetLatestTimeStampSlotIndex() {
    return 0;
}

int32 ASaveLoadBase::GetLastSelectSlotIndex() {
    return 0;
}

int32 ASaveLoadBase::GetHeaderSlotLength() {
    return 0;
}

FSaveLoadHeaderData ASaveLoadBase::GetHeaderData(int32 Index) {
    return FSaveLoadHeaderData{};
}

FString ASaveLoadBase::GetDefaultGivenName_Implementation() {
    return TEXT("");
}

FString ASaveLoadBase::GetDefaultFamilyName_Implementation() {
    return TEXT("");
}

void ASaveLoadBase::EntryBibleByShiseijo(const E_SHISEIJO& shiseijo) {
}


