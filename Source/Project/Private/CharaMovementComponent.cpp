#include "CharaMovementComponent.h"

UCharaMovementComponent::UCharaMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebug = false;
    this->bDebugUpVector = false;
    this->bDebugVelocity = false;
    this->bDebugFlyMovement = false;
    this->bDebugJumpTrigger = false;
}

void UCharaMovementComponent::MoveWorldOffset(FVector DeltaLocation, float AdjustHeightMin, float AdjustHeightMax) {
}

void UCharaMovementComponent::MoveLocalOffset(FVector DeltaLocation, float AdjustHeightMin, float AdjustHeightMax) {
}

TEnumAsByte<EPhysicalSurface> UCharaMovementComponent::GetSurfaceType() const {
    return SurfaceType_Default;
}


