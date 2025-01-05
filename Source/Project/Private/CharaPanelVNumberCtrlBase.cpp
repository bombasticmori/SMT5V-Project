#include "CharaPanelVNumberCtrlBase.h"

ACharaPanelVNumberCtrlBase::ACharaPanelVNumberCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ACharaPanelVNumberCtrlBase::StopVNumberAnimation() {
    return false;
}

bool ACharaPanelVNumberCtrlBase::StartVNumberAnimation(float InStartTime) {
    return false;
}

bool ACharaPanelVNumberCtrlBase::StartFadeOut() {
    return false;
}

bool ACharaPanelVNumberCtrlBase::SetVNumberValue(int32 InType, int32 InNumber) {
    return false;
}

bool ACharaPanelVNumberCtrlBase::SetVNumberMode(int32 InMode) {
    return false;
}

bool ACharaPanelVNumberCtrlBase::IsVNumberAnimation() {
    return false;
}

int32 ACharaPanelVNumberCtrlBase::GetVNumberMode() {
    return 0;
}

FVector2D ACharaPanelVNumberCtrlBase::GetSignPosition() {
    return FVector2D{};
}

FVector2D ACharaPanelVNumberCtrlBase::GetCenterPosition() {
    return FVector2D{};
}

bool ACharaPanelVNumberCtrlBase::DeleteVNumberList() {
    return false;
}




