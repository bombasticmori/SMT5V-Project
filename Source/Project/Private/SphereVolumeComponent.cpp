#include "SphereVolumeComponent.h"

USphereVolumeComponent::USphereVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->SphereInnerRadius = 100.00f;
    this->SphereOuterRadius = 200.00f;
}

float USphereVolumeComponent::GetPenetrationRate(FVector Location) const {
    return 0.0f;
}


