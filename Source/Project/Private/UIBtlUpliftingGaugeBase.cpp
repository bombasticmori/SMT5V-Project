#include "UIBtlUpliftingGaugeBase.h"

UUIBtlUpliftingGaugeBase::UUIBtlUpliftingGaugeBase() {
    this->bHasScriptImplementedTick = false;
    const FProperty* p_isTickCallOn = GetClass()->FindPropertyByName("isTickCallOn");
    (*p_isTickCallOn->ContainerPtrToValuePtr<bool>(this)) = false;
    this->m_Gauge = -1;
    this->m_IsFirstSetGauge = false;
    this->m_FluctuationAmount = 0;
}

void UUIBtlUpliftingGaugeBase::SlideOutStart() {
}

void UUIBtlUpliftingGaugeBase::SlideInStart() {
}

void UUIBtlUpliftingGaugeBase::SetGaugeValue(int32 root_gauge_value) {
}

void UUIBtlUpliftingGaugeBase::OutStart() {
}

void UUIBtlUpliftingGaugeBase::InStart() {
}

void UUIBtlUpliftingGaugeBase::Init() {
}







