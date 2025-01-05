#include "CustomPlayerController.h"

ACustomPlayerController::ACustomPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_SwitchPlayerCameraInputCurve = NULL;
    this->m_ConstCameraSpeedLR = 53.00f;
    this->m_ConstCameraSpeedUD = 23.00f;
}

void ACustomPlayerController::SetViewTargetWithBlendQuartanion(AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, bool bForceOverwrite) {
}

void ACustomPlayerController::SetViewTargetWithBlendCurve(AActor* NewViewTarget, float BlendTime, const UCurveFloat* BlendCurve, bool bForceOverwrite) {
}

void ACustomPlayerController::SetProjectIgnoreMoveInput(bool bNewIgnoreInput, EInputIgnoreReason InReason) {
}

void ACustomPlayerController::SetProjectIgnoreMasterInput(bool bNewIgnoreInput) {
}

void ACustomPlayerController::SetProjectIgnoreLookInput(bool bNewIgnoreInput, EInputIgnoreReason InReason) {
}

void ACustomPlayerController::SetProjectIgnoreAllInput(bool bNewIgnoreInput, EInputIgnoreReason InReason) {
}

void ACustomPlayerController::SetProjectIgnoreActionInput(bool bNewIgnoreInput, EInputIgnoreReason InReason) {
}




void ACustomPlayerController::LookUpCamera(float InputSpeed, bool IsMouseInput) {
}

void ACustomPlayerController::LookRightCamera(float InputSpeed, bool IsMouseInput) {
}

bool ACustomPlayerController::IsProjectMoveInputIgnored() const {
    return false;
}

bool ACustomPlayerController::IsProjectLookInputIgnored() const {
    return false;
}

bool ACustomPlayerController::IsProjectActionInputIgnored() const {
    return false;
}

float ACustomPlayerController::ClampCameraInputSpeed(float InputSpeed, bool IsMouseInput) {
    return 0.0f;
}

float ACustomPlayerController::CalulateCameraSpeed(TEnumAsByte<E_AXIS_MAPPING_TYPE> CameraAxis, float InputSpeed, bool IsMouseInput) {
    return 0.0f;
}


