#include "UIBtlPressIconPartsBase.h"

UUIBtlPressIconPartsBase::UUIBtlPressIconPartsBase() {
    this->bHasScriptImplementedTick = false;
    const FProperty* p_isTickCallOn = GetClass()->FindPropertyByName("isTickCallOn");
    (*p_isTickCallOn->ContainerPtrToValuePtr<bool>(this)) = false;
    this->m_StartDelayRemainSec = 0.00f;
    this->m_StartDelayRemainFrame = 0;
    this->m_IsHalfAddEffectPerforming = false;
    this->m_IsDrawIcon = true;
}

void UUIBtlPressIconPartsBase::SetStartDelayRemainSec(float inSec) {
}

void UUIBtlPressIconPartsBase::SetStartDelayRemainFrame(int32 InFrame) {
}

void UUIBtlPressIconPartsBase::SetSide(E_BTL_SIDE side) {
}

void UUIBtlPressIconPartsBase::SetIconType(E_BTL_PRESSICON_TYPE icon_type) {
}

bool UUIBtlPressIconPartsBase::IsHalfAddEffectPerforming() {
    return false;
}

void UUIBtlPressIconPartsBase::HideStart(bool isImmediately, bool isIconBreak) {
}

void UUIBtlPressIconPartsBase::HalfAddEffectStart(bool AutoLoop) {
}

E_BTL_SIDE UUIBtlPressIconPartsBase::GetSide() {
    return E_BTL_SIDE::E_BTL_SIDE_PLAYER;
}

E_BTL_PRESSICON_TYPE UUIBtlPressIconPartsBase::GetIconType() {
    return E_BTL_PRESSICON_TYPE::E_BTL_PRESSICON_TYPE_NORMAL;
}

void UUIBtlPressIconPartsBase::EnableExtendedIcon() {
}

void UUIBtlPressIconPartsBase::DrawStart() {
}

void UUIBtlPressIconPartsBase::CallEndHalfBlinkEvent() {
}

void UUIBtlPressIconPartsBase::CallDrawStartedEvent() {
}








