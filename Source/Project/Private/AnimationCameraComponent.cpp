#include "AnimationCameraComponent.h"

UAnimationCameraComponent::UAnimationCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainAspectRatio = true;
    this->FovAdjuster = 0.00f;
    this->Animation = NULL;
}

void UAnimationCameraComponent::UpdateAnimation(float DeltaTime) {
}

void UAnimationCameraComponent::StopAnimation() {
}

void UAnimationCameraComponent::SetPlayRate(float InPlayRate) {
}

void UAnimationCameraComponent::PlayAnimation(UCameraAnimationAsset* InAnimation, UCameraAnimationAsset* InAnimation2nd, FCameraAnimFinishedDelegate OnEndPlay, TEnumAsByte<ECameraAnimationSpace::Type> InPlaySpace, float InPlayRate, float InLerpAlpha, bool bInLoop, float InPlayStartPosition) {
}

bool UAnimationCameraComponent::IsPlaying() const {
    return false;
}

float UAnimationCameraComponent::GetCurrentTime() const {
    return 0.0f;
}


