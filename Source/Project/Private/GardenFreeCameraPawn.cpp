#include "GardenFreeCameraPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

AGardenFreeCameraPawn::AGardenFreeCameraPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCapsuleComponent>(TEXT("FCCollisionComponent"))) {
    this->FreeCamCollisionComponent = (UCapsuleComponent*)RootComponent;
}


