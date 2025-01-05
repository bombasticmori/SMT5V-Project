#include "ScreenTransitionBase.h"

AScreenTransitionBase::AScreenTransitionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fadeState = E_UI_FADE_STATE::E_UI_FADE_STATE_NONE;
}


