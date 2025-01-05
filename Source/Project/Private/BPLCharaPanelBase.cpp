#include "BPLCharaPanelBase.h"

UBPLCharaPanelBase::UBPLCharaPanelBase() {
}

bool UBPLCharaPanelBase::SetCharaPanelVNumberPosMode(int32 InPosMode) {
    return false;
}

bool UBPLCharaPanelBase::SetCharaPanelVNumberMoveMode(int32 InMoveMode) {
    return false;
}

int32 UBPLCharaPanelBase::GetVNumberMode(int32 InCalcHP, int32 InCalcMP) {
    return 0;
}

E_CHARAPANEL_SUPPORTICON_TYPE UBPLCharaPanelBase::GetSupportParameter(E_BTL_CNT InBTLCNT) {
    return E_CHARAPANEL_SUPPORTICON_TYPE::CP_SUPPORTICON_TYPE_NONE;
}

FVector2D UBPLCharaPanelBase::GetInterporatePosition(FVector2D InPosStart, FVector2D InPosEnd, float InRatio) {
    return FVector2D{};
}

int32 UBPLCharaPanelBase::GetCharaPanelVNumberPosMode() {
    return 0;
}

int32 UBPLCharaPanelBase::GetCharaPanelVNumberMoveMode() {
    return 0;
}

float UBPLCharaPanelBase::GetBezier(float x0, float x1, float x2, float x3, float bt) {
    return 0.0f;
}

E_CHARAPANEL_SUPPORTICON_TYPE UBPLCharaPanelBase::CalcSupportParameter(E_BTL_CNT InBTLCNT, int32 InValue) {
    return E_CHARAPANEL_SUPPORTICON_TYPE::CP_SUPPORTICON_TYPE_NONE;
}


