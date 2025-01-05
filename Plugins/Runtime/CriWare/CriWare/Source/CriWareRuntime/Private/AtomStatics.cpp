#include "AtomStatics.h"

UAtomStatics::UAtomStatics() {
}

void UAtomStatics::UpdateDistanceFactorForAllSounds(float ArgDistanceFactor) {
}

void UAtomStatics::StopAllSoundsForKeyFromAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef) {
}

void UAtomStatics::StopAllSounds() {
}

UAtomComponent* UAtomStatics::SpawnSoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float startTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnSoundAtLocation(const UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float startTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, float PitchMultiplier, float startTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    return NULL;
}

void UAtomStatics::SetForceCreateAtomComponent(bool Enable) {
}

UAtomComponent* UAtomStatics::PlaySoundForAnimNotify(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float startTime, USoundAttenuation* AttenuationSettings, bool bFollow) {
    return NULL;
}

UAtomComponent* UAtomStatics::PlaySoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float startTime, USoundAttenuation* AttenuationSettings) {
    return NULL;
}

void UAtomStatics::PlaySoundAtLocation(UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float startTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings) {
}

void UAtomStatics::PauseAudioOutput(bool bPause) {
}

bool UAtomStatics::LoadAtomConfig(USoundAtomConfig* AcfObject) {
    return false;
}

bool UAtomStatics::GetForceCreateAtomComponent() {
    return false;
}

UAtomComponent* UAtomStatics::CreateRootedAtomComponent(const UObject* WorldContextObject, bool bAutoDestroy) {
    return NULL;
}

void UAtomStatics::AddToAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef, int32 AtomComponentID) {
}


