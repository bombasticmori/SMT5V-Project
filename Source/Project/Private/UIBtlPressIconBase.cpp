#include "UIBtlPressIconBase.h"

UUIBtlPressIconBase::UUIBtlPressIconBase() {
    this->bHasScriptImplementedTick = false;
    const FProperty* p_isTickCallOn = GetClass()->FindPropertyByName("isTickCallOn");
    (*p_isTickCallOn->ContainerPtrToValuePtr<bool>(this)) = false;
    this->m_PressIconParts.AddDefaulted(8);
}

void UUIBtlPressIconBase::SlideOutStart() {
}

void UUIBtlPressIconBase::SlideInStart() {
}

void UUIBtlPressIconBase::SetSide(E_BTL_SIDE side) {
}

void UUIBtlPressIconBase::OutStart(bool isIconBreak) {
}

void UUIBtlPressIconBase::InStart() {
}

FPressIcon UUIBtlPressIconBase::GetAddDrawPressIconNum(FPressIcon root_press_icon) {
    return FPressIcon{};
}

FPressIcon UUIBtlPressIconBase::CalcDrawPressIconNum(FPressIcon root_press_icon, bool is_apply) {
    return FPressIcon{};
}






void UUIBtlPressIconBase::AddDrawPressIcon(FPressIcon add_press_icon, E_BTL_PRESS_TYPE pressType) {
}


