#include "SoundAtomCueSheet.h"

USoundAtomCueSheet::USoundAtomCueSheet() {
    this->Contains = false;
    this->bOverrideAwbDirectory = false;
    this->NumSlots = -1;
    this->bEncrypt = false;
}

void USoundAtomCueSheet::ReleaseAcb(FName AcbName) {
}

USoundAtomCueSheet* USoundAtomCueSheet::LoadAtomCueSheet(USoundAtomCueSheet* CueSheet, bool bAddToLevel) {
    return NULL;
}

USoundAtomCueSheet* USoundAtomCueSheet::LoadAcb(FName AcbName, bool bAddToLevel) {
    return NULL;
}

bool USoundAtomCueSheet::IsLoaded() {
    return false;
}

USoundAtomCue* USoundAtomCueSheet::GetAtomCueByName(const FString& CueName) {
    return NULL;
}

USoundAtomCue* USoundAtomCueSheet::GetAtomCueByIndex(int32 CueIndex) {
    return NULL;
}

USoundAtomCue* USoundAtomCueSheet::GetAtomCueById(int32 CueId) {
    return NULL;
}

void USoundAtomCueSheet::DetachDspBusSetting() {
}

void USoundAtomCueSheet::AttachDspBusSetting(const FString& SettingName) {
}

void USoundAtomCueSheet::ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds) {
}


