#include "FrameGrabberActor.h"

AFrameGrabberActor::AFrameGrabberActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialInstanceDynamic = NULL;
    this->CaptureFrameTexture = NULL;
}

void AFrameGrabberActor::StopFrameGrab() {
}

bool AFrameGrabberActor::StartFrameGrab() {
    return false;
}

void AFrameGrabberActor::SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI) {
}

bool AFrameGrabberActor::isCaptureFinish() {
    return false;
}


