#include "KamuiWindowBase.h"

AKamuiWindowBase::AKamuiWindowBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_KamuiWIndowInputType = E_KAMUI_UI_INPUT_TYPE::NONE;
    this->m_KamuiWIndowInputKey = E_KAMUI_UI_USE_KEY::NONE;
}

void AKamuiWindowBase::UpdateKamuiWindowInputInfo() {
}


