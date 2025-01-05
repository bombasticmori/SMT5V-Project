#include "AtomAsrRack.h"

UAtomAsrRack::UAtomAsrRack() {
    this->RackId = -1;
}

void UAtomAsrRack::SetEffectBypass(const FString& BusName, const FString& EffectName, bool Bypasses) {
}

void UAtomAsrRack::SetBusVolumeByName(const FString& BusName, float Volume) {
}

void UAtomAsrRack::SetBusSendLevelByName(const FString& SourceBusName, const FString& DestBusName, float Level) {
}

UAtomAsrRack* UAtomAsrRack::GetDefaultAsrRack() {
    return NULL;
}

bool UAtomAsrRack::GetBusAnalyzerInfo(const FString& DspBusName, int32& num_channels, TArray<float>& rms_levels, TArray<float>& peak_levels, TArray<float>& peak_hold_levels) {
    return false;
}

UAtomAsrRack* UAtomAsrRack::GetAsrRack(int32 AsrRackId) {
    return NULL;
}

void UAtomAsrRack::DetachDspBusSetting() {
}

void UAtomAsrRack::ConnectToPadSpeaker(int32 UserIndex) {
}

void UAtomAsrRack::AttachDspBusSetting(const FString& SettingName) {
}

void UAtomAsrRack::ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds) {
}


