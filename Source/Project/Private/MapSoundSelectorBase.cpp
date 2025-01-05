#include "MapSoundSelectorBase.h"

UMapSoundSelectorBase::UMapSoundSelectorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapDefaultBGM = NULL;
    this->MagatsukaBGM = NULL;
}

void UMapSoundSelectorBase::SetMapDefaultBGM(USoundAtomCue* InMapDefaultBGM, EFadeType FadeType) {
}

void UMapSoundSelectorBase::OutMagatsukaArea() {
}

void UMapSoundSelectorBase::OutBGMArea(USoundAtomCue* Cue, int32 Priority, EFadeType FadeType) {
}

void UMapSoundSelectorBase::MapInitialize(USoundAtomCue* InMapDefaultBGM, EFadeType FadeType) {
}

void UMapSoundSelectorBase::InMagatsukaArea(USoundAtomCue* Cue) {
}

void UMapSoundSelectorBase::InBGMArea(USoundAtomCue* Cue, int32 Priority, EFadeType FadeType) {
}


