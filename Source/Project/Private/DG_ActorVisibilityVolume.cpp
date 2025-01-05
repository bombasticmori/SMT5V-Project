#include "DG_ActorVisibilityVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

ADG_ActorVisibilityVolume::ADG_ActorVisibilityVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->ModelHitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("ModelHitBox"));
    this->VisibilityHitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("VisibilityHitBox"));
    this->ModelHitBox->SetupAttachment(RootComponent);
    this->VisibilityHitBox->SetupAttachment(RootComponent);
}

void ADG_ActorVisibilityVolume::UpdateHitBox() {
}

void ADG_ActorVisibilityVolume::RemoveAllStaticMesh() {
}

void ADG_ActorVisibilityVolume::RemoveAllObjects() {
}

void ADG_ActorVisibilityVolume::CollectStaticMeshActors() {
}

void ADG_ActorVisibilityVolume::CollectObjects() {
}


