#include "BGMRequest.h"

FBGMRequest::FBGMRequest() {
    this->bPlayRequest = false;
    this->bStopRequest = false;
    this->Cue = NULL;
    this->FadeType = EFadeType::NoFade;
    this->FadeTime = 0.00f;
    this->StartPosition = 0.00f;
    this->bForceReplay = false;
}

