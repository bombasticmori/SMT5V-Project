#include "PlayerMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "FoliageInstancedStaticMeshComponent.h"
//These functions were approximated with ChatGPT and are considered 'best guess' approximations until actual reverse engineering is done.
UPlayerMovementComponent::UPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VelocityMin = 100.00f;
    this->VelocityMax = 700.00f;
    this->DashVelocityMax = 1400.00f;
    this->SlidingVelocityMax = 1800.00f;
    this->VelocityMaxFallen = 1000.00f;
    this->RotationSpeed = 720.00f;
    this->RotationSpeed_OnSpot = 720.00f;
    this->TransientRotationSpeedRate = 1.00f;
    this->Acceleration = 10000.00f;
    this->DashAcceleration = 1400.00f;
    this->SlidingAcceleration = 1000.00f;
    this->Deceleration = 10000.00f;
    this->StepupAngleThreshold = 40.00f;
    this->StepupHeightThreshold = 42.00f;
    this->StepdownHeightThreshold = 30.00f;
    this->SlopeRotationSpeed = 10.00f;
    this->ForwardMovementRatio = 1.00f;
    this->WallSlipCnt = 0;
    this->InputInterpSpeed = 5.00f;
    this->CV_InputMap = NULL;
    this->bEnableBrake = false;
    this->bEnableTurn = false;
    this->bWalkBrakeStandby = false;
    this->bRunBrakeStandby = false;
    this->bRunTurnStandby = false;
    this->bDashTurnStandby = false;
    this->bDashSharpTurn = false;
    this->bAllowWalkBrakeMovement = false;
    this->bExceptionBrakeTrigger = false;
    this->bDashing = false;
    this->bEnableSliding = false;
    this->bDisableSliding_Transient_OnWater = false;
    this->SlidingStartSlopeAngle = -29.00f;
    this->SlidingStartCheckTime = 0.40f;
    this->SlidingStartDashSlopeAngle = -23.00f;
    this->SlidingStartDashCheckTime = 0.10f;
    this->SlidingFinishSlopeAngle = -10.00f;
    this->SlidingFinishCheckTime = 0.10f;
    this->bSliding = false;
    this->bAutoRun = false;
    this->bEnableJump = false;
    this->bEnableJumpTransient = true;
    this->bEnableJumpForAttack = true;
    this->gravityJump = -4000.00f;
    this->velocityJump = 1550.00f;
    this->OnAirTimeForForceTeleport = 0.00f;
    this->bEnableEdgeGrip = false;
    this->EdgeGripBodyHeight = 230.00f;
    this->EdgeGripJumpVelocity = 1200.00f;
    this->FoliageHitEffectClass = NULL;
    this->AutoPilotWalkBrakeMargine = 0.00f;
}

void UPlayerMovementComponent::UpdateFoliageActorList() {
    // Example logic to update foliage actor list
    FoliageCompList.Empty();
    // Add updated components (mock implementation)
    // FoliageCompList.Add(SomeFoliageComponent);
}

void UPlayerMovementComponent::TurnOnEdgeGripArrivalTrigger() {
    bEnableEdgeGrip = true;
}

void UPlayerMovementComponent::SetParamJump(float NewGravityJump, float NewVelocityJump) {
    gravityJump = NewGravityJump;
    velocityJump = NewVelocityJump;
}

void UPlayerMovementComponent::SetKeyFreeForce(const FVector& Force) {
    IdealVelocity += Force;
}

void UPlayerMovementComponent::RotateToTarget(AActor* TargetActor, FPlayerMoveToTargetSignature OnArrived, float TimeToGiveUp) {
    if (!TargetActor) return;

    FVector TargetLocation = TargetActor->GetActorLocation();
    FRotator DesiredRotation = UKismetMathLibrary::FindLookAtRotation(GetOwner()->GetActorLocation(), TargetLocation);

    GetOwner()->SetActorRotation(DesiredRotation);
    OnArrived.ExecuteIfBound();
}

void UPlayerMovementComponent::ResetMovementVelocity() {
    IdealVelocity = FVector::ZeroVector;
}

void UPlayerMovementComponent::ResetMovementState(bool bResetLanding, bool bResetLandingValue) {
    bEnableSliding = bResetLanding;
    bSliding = bResetLandingValue;
}

void UPlayerMovementComponent::ResetMovementInputVector() {
    IdealVelocity = FVector::ZeroVector;
}

void UPlayerMovementComponent::ResetBrakeTurnStandby() {
    bWalkBrakeStandby = false;
    bRunBrakeStandby = false;
    bRunTurnStandby = false;
    bDashTurnStandby = false;
}

TArray<UParticleSystemComponent*> UPlayerMovementComponent::PlayAttackVsFoliageEffect(const FBox& InAttackAABB) {
    TArray<UParticleSystemComponent*> ParticleEffects;
    for (auto& FoliageComp : FoliageCompList) {
        if (FoliageComp->Bounds.GetBox().Intersect(InAttackAABB)) {
            // Mock logic for spawning particles
            UParticleSystemComponent* Particle = NewObject<UParticleSystemComponent>(this);
            ParticleEffects.Add(Particle);
        }
    }
    return ParticleEffects;
}

void UPlayerMovementComponent::MoveToTargetLocation(FVector TargetLocation, float MoveSpeed, FPlayerMoveToTargetSignature OnArrived, float Distance, float TimeToGiveUp) {
    FVector CurrentLocation = GetOwner()->GetActorLocation();
    FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();

    IdealVelocity = Direction * MoveSpeed;

    if (FVector::Dist(CurrentLocation, TargetLocation) <= Distance) {
        OnArrived.ExecuteIfBound();
        ResetMovementVelocity();
    }
}

void UPlayerMovementComponent::MoveToTargetDirection(FVector TargetDirection, float Distance, float MoveSpeed, FPlayerMoveToTargetSignature OnArrived, float TimeToGiveUp) {
    IdealVelocity = TargetDirection.GetSafeNormal() * MoveSpeed;

    if (IdealVelocity.Size() <= Distance) {
        OnArrived.ExecuteIfBound();
        ResetMovementVelocity();
    }
}

void UPlayerMovementComponent::MoveToTarget(AActor* TargetActor, float MoveSpeed, FPlayerMoveToTargetSignature OnArrived, float Distance, float TimeToGiveUp) {
    if (!TargetActor) return;

    MoveToTargetLocation(TargetActor->GetActorLocation(), MoveSpeed, OnArrived, Distance, TimeToGiveUp);
}

void UPlayerMovementComponent::JumpTakeOff() {
    if (bEnableJump) {
        FVector JumpForce = FVector(0.f, 0.f, velocityJump);
        IdealVelocity += JumpForce;
        bEnableJump = false; // Disables further jumps until reset
    }
}

bool UPlayerMovementComponent::Jump() {
    if (bEnableJump) {
        JumpTakeOff();
        return true;
    }
    return false;
}

bool UPlayerMovementComponent::IsJumping() const {
    return IdealVelocity.Z > 0.f;
}

bool UPlayerMovementComponent::IsEdgeGrippingStrictly() const {
    return bEnableEdgeGrip && bSliding; // Example logic
}

bool UPlayerMovementComponent::IsEdgeGripping() const {
    return bEnableEdgeGrip;
}

bool UPlayerMovementComponent::IsDashingForEffect() const {
    return bDashing && IdealVelocity.Size() > DashVelocityMax;
}

bool UPlayerMovementComponent::IsDashing() const {
    return bDashing;
}

bool UPlayerMovementComponent::IsAutoPilotMoving() const {
    return bAutoRun;
}

float UPlayerMovementComponent::GetMovementSpeed() const {
    return IdealVelocity.Size();
}

float UPlayerMovementComponent::GetJumpHeight() const {
    return velocityJump;
}

void UPlayerMovementComponent::ForceRotateActorWhileKeepingCamera(const FRotator& InNewRotation) {
    GetOwner()->SetActorRotation(InNewRotation);
}

bool UPlayerMovementComponent::EndEdgeGrip() {
    bEnableEdgeGrip = false;
    return true;
}

bool UPlayerMovementComponent::EdgeGripAdjustFinished() const {
    return !bSliding;
}

void UPlayerMovementComponent::ClearFoliageActorList() {
    FoliageCompList.Empty();
}

bool UPlayerMovementComponent::CanJump() const {
    return bEnableJump;
}

bool UPlayerMovementComponent::CanDebugJump() const {
    return bDebugJumpTrigger;
}

bool UPlayerMovementComponent::BeginEdgeGrip(const FVector& WallRight, const FVector& GripPoint) {
    bEnableEdgeGrip = true;
    return true;
}

void UPlayerMovementComponent::AddGimmickForce(const FVector& Force, float DumpingSpeed) {
    IdealVelocity += Force / DumpingSpeed;
}