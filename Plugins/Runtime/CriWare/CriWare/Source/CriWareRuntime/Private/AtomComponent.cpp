#include "AtomComponent.h"

UAtomComponent::UAtomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bAutoActivate = true;
    this->Sound = NULL;
    this->bAutoDestroy = false;
    this->bPersistAcrossLevelTransition = false;
    this->bStopWhenOwnerDestroyed = true;
    this->bIsUISound = false;
    this->DefaultVolume = 1.00f;
    this->bEnableMultipleSoundPlayback = false;
    this->bUsePlaylist = false;
    this->DefaultSoundObject = NULL;
    this->DefaultBlockIndex = 0;
    this->bOnly2DSound = false;
    this->PlayWorld = NULL;
    this->GameViewport = NULL;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
    this->CueSheet = NULL;
    this->AppliedSoundObject = NULL;
}

void UAtomComponent::Stop() {
}

void UAtomComponent::SetVolume(float Volume) {
}

void UAtomComponent::SetSoundObject(UAtomSoundObject* SoundObject) {
}

void UAtomComponent::SetSound(USoundAtomCue* NewSound) {
}

void UAtomComponent::SetSelectorLabel(const FString& Selector, const FString& Label) {
}

void UAtomComponent::SetPitchMultiplier(float NewPitchMultiplier) {
}

void UAtomComponent::SetPitch(float Pitch) {
}

void UAtomComponent::SetNextBlockIndex(int32 BlockIndex) {
}

void UAtomComponent::SetDefaultAttenuationEnable(bool bEnable) {
}

void UAtomComponent::SetBusSendLevelOffsetByName(const FString& BusName, float LevelOffset) {
}

void UAtomComponent::SetBusSendLevelOffset(int32 BusId, float LevelOffset) {
}

void UAtomComponent::SetBusSendLevelByName(const FString& BusName, float Level) {
}

void UAtomComponent::SetBusSendLevel(int32 BusId, float Level) {
}

void UAtomComponent::SetAsrRackIdArray(TArray<int32> AsrRackIDs) {
}

void UAtomComponent::SetAsrRackID(int32 asr_rack_id) {
}

void UAtomComponent::SetAisacByName(const FString& ControlName, float ControlValue) {
}

void UAtomComponent::Play(float startTime) {
}

void UAtomComponent::Pause(bool bPause) {
}

bool UAtomComponent::IsPlaying() {
    return false;
}

bool UAtomComponent::IsPaused() {
    return false;
}

bool UAtomComponent::HasBeenEconomicTick() const {
    return false;
}

float UAtomComponent::GetTime() {
    return 0.0f;
}

EAtomComponentStatus UAtomComponent::GetStatus() {
    return EAtomComponentStatus::Stop;
}

float UAtomComponent::GetSequencePosition() {
    return 0.0f;
}

int32 UAtomComponent::GetNumQueuedSounds() {
    return 0;
}

bool UAtomComponent::GetDefaultAttenuationEnable() {
    return false;
}

float UAtomComponent::GetCurrentMaxAttenuationDistance() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentEconomicTickMarginDistance() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentEconomicTickFrequency() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentEconomicTickBoundaryDistance() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentCullingMarginDistance() const {
    return 0.0f;
}

float UAtomComponent::GetCurrentCullingBoundaryDistance() const {
    return 0.0f;
}

FString UAtomComponent::GetCueName() const {
    return TEXT("");
}

int32 UAtomComponent::GetAtomComponentID() const {
    return 0;
}

UAtomComponent* UAtomComponent::GetAtomComponentFromID(int32 TargetID) {
    return NULL;
}

void UAtomComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
}

void UAtomComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float startTime) {
}

void UAtomComponent::EnqueueSound(USoundAtomCue* NewSound) {
}

void UAtomComponent::DestroyComponentByID(int32 TargetID) {
}


