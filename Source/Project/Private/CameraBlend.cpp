#include "CameraBlend.h"

ACameraBlend::ACameraBlend(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Blend1Actor = NULL;
    this->Blend2Actor = NULL;
    this->BlendAlpha = 0.00f;
}


