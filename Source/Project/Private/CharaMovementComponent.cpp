#include "CharaMovementComponent.h"
#include "PhysicalMaterials\PhysicalMaterial.h"
//These functions were approximated with ChatGPT and are considered 'best guess' approximations until actual reverse engineering is done.
UCharaMovementComponent::UCharaMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebug = false;
    this->bDebugUpVector = false;
    this->bDebugVelocity = false;
    this->bDebugFlyMovement = false;
    this->bDebugJumpTrigger = false;
}


void UCharaMovementComponent::MoveWorldOffset(FVector DeltaLocation, float AdjustHeightMin, float AdjustHeightMax) {
    if (!PawnOwner) return;

    FVector AdjustedDelta = DeltaLocation;

    // Adjust for height limits
    if (AdjustedDelta.Z < AdjustHeightMin) {
        AdjustedDelta.Z = AdjustHeightMin;
    }
    else if (AdjustedDelta.Z > AdjustHeightMax) {
        AdjustedDelta.Z = AdjustHeightMax;
    }

    FHitResult Hit;
    PawnOwner->AddActorWorldOffset(AdjustedDelta, true, &Hit);

    if (bDebug) {
        UE_LOG(LogTemp, Log, TEXT("Moved World Offset by: %s"), *AdjustedDelta.ToString());
    }

    if (Hit.IsValidBlockingHit()) {
        UE_LOG(LogTemp, Warning, TEXT("Movement blocked by: %s"), *Hit.Actor->GetName());
    }

    OnCharaMovementUpdated.Broadcast();
}

void UCharaMovementComponent::MoveLocalOffset(FVector DeltaLocation, float AdjustHeightMin, float AdjustHeightMax) {
    if (!PawnOwner) return;

    FVector AdjustedDelta = PawnOwner->GetActorRotation().RotateVector(DeltaLocation);

    // Adjust for height limits
    if (AdjustedDelta.Z < AdjustHeightMin) {
        AdjustedDelta.Z = AdjustHeightMin;
    }
    else if (AdjustedDelta.Z > AdjustHeightMax) {
        AdjustedDelta.Z = AdjustHeightMax;
    }

    FHitResult Hit;
    PawnOwner->AddActorLocalOffset(AdjustedDelta, true, &Hit);

    if (bDebug) {
        UE_LOG(LogTemp, Log, TEXT("Moved Local Offset by: %s"), *AdjustedDelta.ToString());
    }

    if (Hit.IsValidBlockingHit()) {
        UE_LOG(LogTemp, Warning, TEXT("Movement blocked by: %s"), *Hit.Actor->GetName());
    }

    OnCharaMovementUpdated.Broadcast();
}

TEnumAsByte<EPhysicalSurface> UCharaMovementComponent::GetSurfaceType() const {
    if (!PawnOwner) return SurfaceType_Default;

    FHitResult Hit;
    FVector Start = PawnOwner->GetActorLocation();
    FVector End = Start - FVector(0.f, 0.f, 50.f); // Check slightly below the actor

    FCollisionQueryParams Params;
    Params.AddIgnoredActor(PawnOwner);

    if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params)) {
        UPrimitiveComponent* HitComponent = Hit.GetComponent();
        if (HitComponent) {
            return UPhysicalMaterial::DetermineSurfaceType(HitComponent->GetMaterial(0)->GetPhysicalMaterial());
        }
    }

    return SurfaceType_Default;
}


