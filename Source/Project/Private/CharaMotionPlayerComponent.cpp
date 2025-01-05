#include "CharaMotionPlayerComponent.h"

UCharaMotionPlayerComponent::UCharaMotionPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MotionTable = NULL;
    this->MotionBlendTable = NULL;
    this->MotionBlendTable_Append = NULL;
    this->SlotName = TEXT("DefaultSlot");
    this->Montage = NULL;
}

void UCharaMotionPlayerComponent::Update(float DeltaTime, UAnimInstance* AnimInstance, TArray<E_CHARA_MOTION_ID>& OutputPlayingMotions) {
}

void UCharaMotionPlayerComponent::Stop() {
}

void UCharaMotionPlayerComponent::SetPlayRate(float PlayRate) {
}

void UCharaMotionPlayerComponent::PlayWithDuration(E_CHARA_MOTION_ID MotionID, float Duration, float PlayRateRough, float BlendTimeOverride, float StartOffsetTime) {
}

void UCharaMotionPlayerComponent::PlayExternalReferenceWithDuration(FCharaMotion Motion, float PlayRate, float StartOffsetTime, float Duration, float PlayRateRough, float BlendTimeOverride) {
}

void UCharaMotionPlayerComponent::PlayExternalReference(FCharaMotion Motion, float PlayRate, float StartOffsetTime) {
}

void UCharaMotionPlayerComponent::Play(E_CHARA_MOTION_ID MotionID, float PlayRate, float BlendTimeOverride, float StartOffsetTime) {
}

void UCharaMotionPlayerComponent::Load() {
}

bool UCharaMotionPlayerComponent::IsPlaying() const {
    return false;
}

void UCharaMotionPlayerComponent::InsertEvent(FCharaMotionPlayerEventSignature OnEvent) {
}

void UCharaMotionPlayerComponent::InitMotionQueue() {
}

float UCharaMotionPlayerComponent::GetPlayRate() {
    return 0.0f;
}

E_CHARA_MOTION_ID UCharaMotionPlayerComponent::GetCurrentMotionID() {
    return E_CHARA_MOTION_ID::NONE;
}

E_CHARA_MOTION_ID UCharaMotionPlayerComponent::GetBeforeMotionID() {
    return E_CHARA_MOTION_ID::NONE;
}

UAnimSequenceBase* UCharaMotionPlayerComponent::GetAnimationLoop() {
    return NULL;
}

UAnimSequenceBase* UCharaMotionPlayerComponent::GetAnimationDefault() {
    return NULL;
}

void UCharaMotionPlayerComponent::ForceProgressCurrentAnim() {
}


