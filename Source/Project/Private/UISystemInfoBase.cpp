#include "UISystemInfoBase.h"

UUISystemInfoBase::UUISystemInfoBase() {
    this->m_pAnimCtrl = NULL;
}

void UUISystemInfoBase::StopAnim(E_SYS_INFO_ANIM animType) {
}

void UUISystemInfoBase::StartViewAnim(E_SYS_INFO_ANIM animType, float waitTime) {
}

void UUISystemInfoBase::StartAnim(E_SYS_INFO_ANIM animType) {
}

FString UUISystemInfoBase::GetInfoName() {
    return TEXT("");
}

void UUISystemInfoBase::ChangeView() {
}


