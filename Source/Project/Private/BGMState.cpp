#include "BGMState.h"

FBGMState::FBGMState() {
    this->Priority = 0;
    this->Cue = NULL;
    this->FadeType = EFadeType::NoFade;
}

