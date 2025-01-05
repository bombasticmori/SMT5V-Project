#include "ProjectSoundStatics.h"
#include "Templates/SubclassOf.h"

UProjectSoundStatics::UProjectSoundStatics() {
}

UAtomComponent* UProjectSoundStatics::PlayDevilVoice(AActor* Talker, EDevilVoiceType DevilVoiceType, FName Socket, bool bDontAttachToTalker) {
    return NULL;
}

UAtomComponent* UProjectSoundStatics::PlayCharacterVoice(AActor* Talker, USoundAtomCue* Cue, FName Socket, bool bDontAttachToTalker) {
    return NULL;
}

TArray<FTransform> UProjectSoundStatics::GetPlacementSeFoliageTransforms(UStaticMesh* TargetMesh, float MinScale, AActor* LevelGetActor) {
    return TArray<FTransform>();
}

void UProjectSoundStatics::ForceUpdateAtomListenersImmediately() {
}

USceneComponent* UProjectSoundStatics::AddResidentSoundComponent(TSubclassOf<USceneComponent> ComponentClass, AActor* Owner) {
    return NULL;
}


