#include "CustomPlayerController.h"
#include "Kismet/KismetMathLibrary.h"
ACustomPlayerController::ACustomPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_SwitchPlayerCameraInputCurve = NULL;
    this->m_ConstCameraSpeedLR = 53.00f;
    this->m_ConstCameraSpeedUD = 23.00f;
}

void ACustomPlayerController::SetViewTargetWithBlendQuartanion(AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, bool bForceOverwrite)
{
    if (!NewViewTarget) return;

    SetViewTargetWithBlend(NewViewTarget, BlendTime, BlendFunc, BlendExp, bLockOutgoing);
}

void ACustomPlayerController::SetViewTargetWithBlendCurve(AActor* NewViewTarget, float BlendTime, const UCurveFloat* BlendCurve, bool bForceOverwrite)
{
    if (!NewViewTarget || !BlendCurve) return;

    FViewTargetTransitionParams TransitionParams;
    TransitionParams.BlendFunction = VTBlend_Cubic;
    TransitionParams.BlendTime = BlendTime;
    //TransitionParams.CustomBlendCurve = BlendCurve;

    if (bForceOverwrite || GetViewTarget() != NewViewTarget)
    {
        SetViewTarget(NewViewTarget, TransitionParams);
    }
}

void ACustomPlayerController::SetProjectIgnoreMoveInput(bool bNewIgnoreInput, EInputIgnoreReason InReason)
{
    DisableInput(this);
    OnChangeIgnoreMoveInput(bNewIgnoreInput);
}

void ACustomPlayerController::SetProjectIgnoreMasterInput(bool bNewIgnoreInput)
{
    if (bNewIgnoreInput)
    {
        DisableInput(this);
    }
    else
    {
        EnableInput(this);
    }
}

void ACustomPlayerController::SetProjectIgnoreLookInput(bool bNewIgnoreInput, EInputIgnoreReason InReason)
{
    OnChangeIgnoreLookInput(bNewIgnoreInput);
}

void ACustomPlayerController::SetProjectIgnoreAllInput(bool bNewIgnoreInput, EInputIgnoreReason InReason)
{
    if (bNewIgnoreInput)
    {
        DisableInput(this);
    }
    else
    {
        EnableInput(this);
    }
}

void ACustomPlayerController::SetProjectIgnoreActionInput(bool bNewIgnoreInput, EInputIgnoreReason InReason)
{
    OnChangeIgnoreActionInput(bNewIgnoreInput);
}

void ACustomPlayerController::LookUpCamera(float InputSpeed, bool IsMouseInput)
{
    float ClampedSpeed = ClampCameraInputSpeed(InputSpeed, IsMouseInput);
    AddPitchInput(ClampedSpeed * m_ConstCameraSpeedUD);
}

void ACustomPlayerController::LookRightCamera(float InputSpeed, bool IsMouseInput)
{
    float ClampedSpeed = ClampCameraInputSpeed(InputSpeed, IsMouseInput);
    AddYawInput(ClampedSpeed * m_ConstCameraSpeedLR);
}

bool ACustomPlayerController::IsProjectMoveInputIgnored() const
{
    return !InputComponent || !InputComponent->IsActive();
}

bool ACustomPlayerController::IsProjectLookInputIgnored() const
{
    // Simplified: could check custom implementation for look input locking
    return false;
}

bool ACustomPlayerController::IsProjectActionInputIgnored() const
{
    // Simplified: could check custom implementation for action input locking
    return false;
}

float ACustomPlayerController::ClampCameraInputSpeed(float InputSpeed, bool IsMouseInput)
{
    if (IsMouseInput)
    {
        return UKismetMathLibrary::Clamp(InputSpeed, -1.0f, 1.0f);
    }
    else
    {
        return UKismetMathLibrary::Clamp(InputSpeed, -1.0f, 1.0f);
    }
}

float ACustomPlayerController::CalulateCameraSpeed(TEnumAsByte<E_AXIS_MAPPING_TYPE> CameraAxis, float InputSpeed, bool IsMouseInput)
{
    float BaseSpeed = (CameraAxis == E_AXIS_MAPPING_MOVE_RIGHT || CameraAxis == E_AXIS_MAPPING_LOOK_RIGHT) ? m_ConstCameraSpeedLR : m_ConstCameraSpeedUD;
    return ClampCameraInputSpeed(InputSpeed, IsMouseInput) * BaseSpeed;
}
