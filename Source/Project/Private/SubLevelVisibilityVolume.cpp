#include "SubLevelVisibilityVolume.h"

ASubLevelVisibilityVolume::ASubLevelVisibilityVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bDisabled = false;
    this->VisibilityVolumeUsage = SLVV_Show;
}


