#include "CharaPanelBase.h"

ACharaPanelBase::ACharaPanelBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pmsPanelIcon = NULL;
}

bool ACharaPanelBase::StopPanelRecoveryAnimation() {
    return false;
}

bool ACharaPanelBase::StartPanelRecoveryAnimation(float InStartTime) {
    return false;
}

bool ACharaPanelBase::StartNumberCountAnimation(int32 InPosMode) {
    return false;
}

int32 ACharaPanelBase::SetSupportParameter(E_CHARAPANEL_SUPPORTICON_TYPE Type) {
    return 0;
}

void ACharaPanelBase::SetParameterText(int32 Type, FText Text) {
}

void ACharaPanelBase::SetParameter(int32 Type, int32 param0, int32 Param1, int32 Param2) {
}

bool ACharaPanelBase::SetPAnimeStack(int32 InType, float InStartTime) {
    return false;
}

bool ACharaPanelBase::SetNextPAnimeStack() {
    return false;
}

bool ACharaPanelBase::SetGaugeAlphaAnimation(int32 InType, bool inFlag) {
    return false;
}

int32 ACharaPanelBase::SetBadstatusParameter(E_BAD_STATUS Type) {
    return 0;
}

bool ACharaPanelBase::SetActorMoveMode(int32 InMode) {
    return false;
}

int32 ACharaPanelBase::ResetSupportParameter(E_CHARAPANEL_SUPPORTICON_TYPE Type) {
    return 0;
}

int32 ACharaPanelBase::ResetBadstatusParameter(E_BAD_STATUS Type) {
    return 0;
}

bool ACharaPanelBase::ResetActorMoveMode() {
    return false;
}

UObject* ACharaPanelBase::LoadCharaPanelIcon(int32 InCharaId) {
    return NULL;
}

bool ACharaPanelBase::IsPanelRecoveryAnimation() {
    return false;
}

bool ACharaPanelBase::IsAdjustParam(int32 Type) {
    return false;
}

FText ACharaPanelBase::GetParameterText(int32 Type) {
    return FText::GetEmpty();
}

int32 ACharaPanelBase::GetParameter(int32 Type) {
    return 0;
}

FVector2D ACharaPanelBase::GetNumberCountAnimationPosition(int32 InMode, int32 InMove, int32 InType) {
    return FVector2D{};
}

float ACharaPanelBase::GetGaugeRatio(int32 param0, int32 Param1) {
    return 0.0f;
}

float ACharaPanelBase::GetGaugeAlpha(int32 InType) {
    return 0.0f;
}

E_BAD_STATUS ACharaPanelBase::GetBadstatusParameter(int32 InPosition) {
    return E_BAD_STATUS::E_BAD_STATUS_NONE;
}

int32 ACharaPanelBase::GetAdjustParamType(int32 Type) {
    return 0;
}

int32 ACharaPanelBase::GetAdjustParam(int32 Type) {
    return 0;
}

int32 ACharaPanelBase::GetActorMovePosition(int32 InPosMode) {
    return 0;
}

int32 ACharaPanelBase::GetActorMoveMode() {
    return 0;
}

int32 ACharaPanelBase::ForceFinishedAdjustParam(int32 Type) {
    return 0;
}

bool ACharaPanelBase::DeleteCharaPanel() {
    return false;
}

void ACharaPanelBase::CalcParameter(int32 Type, int32 param0, int32 Param1, int32 Param2, bool execution) {
}

int32 ACharaPanelBase::CalcAdjustParam(int32 Type) {
    return 0;
}

bool ACharaPanelBase::CalcActorMoveProc(float InDelta) {
    return false;
}












