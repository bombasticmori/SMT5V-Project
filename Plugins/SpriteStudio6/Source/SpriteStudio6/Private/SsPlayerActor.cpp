#include "SsPlayerActor.h"
#include "SsPlayerComponent.h"

ASsPlayerActor::ASsPlayerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USsPlayerComponent>(TEXT("SsPlayerComponent"));
    this->bAutoDestroy = false;
    this->SsPlayerComponent = (USsPlayerComponent*)RootComponent;
}

void ASsPlayerActor::OnEndPlay(FName AnimPackName, FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex) {
}

USsPlayerComponent* ASsPlayerActor::GetSsPlayer() const {
    return NULL;
}


