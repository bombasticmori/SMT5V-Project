#include "CampTopCtrlBase.h"

ACampTopCtrlBase::ACampTopCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ACampTopCtrlBase::StopTopMenuAnimation() {
    return false;
}

bool ACampTopCtrlBase::StopSubMenuAnimation() {
    return false;
}

bool ACampTopCtrlBase::StartTopMenuAnimation(bool InCursorAnimation) {
    return false;
}

bool ACampTopCtrlBase::StartSubMenuAnimation(bool InCursorAnimation, float InStartTime) {
    return false;
}

bool ACampTopCtrlBase::SetTopMenuMode() {
    return false;
}

bool ACampTopCtrlBase::SetTopMenuCursorIndex(int32 InIndex) {
    return false;
}

bool ACampTopCtrlBase::SetSubMenuCursorIndex(int32 InIndex) {
    return false;
}

bool ACampTopCtrlBase::SetMovingCursor(int32 InType) {
    return false;
}

bool ACampTopCtrlBase::ResetMovingCursor(int32 InType) {
    return false;
}

int32 ACampTopCtrlBase::IsTopMenuSelected(int32 InIndex) {
    return 0;
}

bool ACampTopCtrlBase::IsTopMenuAnimation() {
    return false;
}

bool ACampTopCtrlBase::IsSubMenuAnimation() {
    return false;
}

bool ACampTopCtrlBase::InitializeTopMenuOn(bool InCursorFlag) {
    return false;
}

int32 ACampTopCtrlBase::GetSubMenuColor(int32 InIndex, int32 InType, bool InMask) {
    return 0;
}

bool ACampTopCtrlBase::DeleteTopMenuList() {
    return false;
}

int32 ACampTopCtrlBase::CalcTopMenuCursor(int32 InCursor, int32 InCursorMax, int32 InCalcNumber) {
    return 0;
}

int32 ACampTopCtrlBase::CalcSubMenuCursor(int32 InCursor, int32 InCursorMax, int32 InCalcNumber) {
    return 0;
}









