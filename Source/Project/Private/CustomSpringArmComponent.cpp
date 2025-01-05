#include "CustomSpringArmComponent.h"

UCustomSpringArmComponent::UCustomSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableCameraTraceLag = false;
    this->CameraTraceLagSpeed = 0.00f;
    this->CameraTraceLagBackSpeed = 0.00f;
    this->LandscapeCameraTraceLagSpeed = 0.00f;
    this->bEnableCameraFallingTrace = true;
    this->ProbeFallingHeightAdd = 50.00f;
    this->PreviousDesiredArmlength = 0.00f;
}

void UCustomSpringArmComponent::SendDiscardLagRequest() {
}


