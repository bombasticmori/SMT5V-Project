#include "PlayerMovementComponent.h"

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
}

void UPlayerMovementComponent::TurnOnEdgeGripArrivalTrigger() {
}

void UPlayerMovementComponent::SetParamJump(float NewGravityJump, float NewVelocityJump) {
}

void UPlayerMovementComponent::SetKeyFreeForce(const FVector& Force) {
}

void UPlayerMovementComponent::RotateToTarget(AActor* TargetActor, FPlayerMoveToTargetSignature OnArrived, float TimeToGiveUp) {
}

void UPlayerMovementComponent::ResetMovementVelocity() {
}

void UPlayerMovementComponent::ResetMovementState(bool bResetLanding, bool bResetLandingValue) {
}

void UPlayerMovementComponent::ResetMovementInputVector() {
}

void UPlayerMovementComponent::ResetBrakeTurnStandby() {
}

TArray<UParticleSystemComponent*> UPlayerMovementComponent::PlayAttackVsFoliageEffect(const FBox& InAttackAABB) {
    return TArray<UParticleSystemComponent*>();
}

void UPlayerMovementComponent::MoveToTargetLocation(FVector TargetLocation, float MoveSpeed, FPlayerMoveToTargetSignature OnArrived, float Distance, float TimeToGiveUp) {
}

void UPlayerMovementComponent::MoveToTargetDirection(FVector TargetDirection, float Distance, float MoveSpeed, FPlayerMoveToTargetSignature OnArrived, float TimeToGiveUp) {
}

void UPlayerMovementComponent::MoveToTarget(AActor* TargetActor, float MoveSpeed, FPlayerMoveToTargetSignature OnArrived, float Distance, float TimeToGiveUp) {
}

void UPlayerMovementComponent::JumpTakeOff() {
}

bool UPlayerMovementComponent::Jump() {
    return false;
}

bool UPlayerMovementComponent::IsJumping() const {
    return false;
}

bool UPlayerMovementComponent::IsEdgeGrippingStrictly() const {
    return false;
}

bool UPlayerMovementComponent::IsEdgeGripping() const {
    return false;
}

bool UPlayerMovementComponent::IsDashingForEffect() const {
    return false;
}

bool UPlayerMovementComponent::IsDashing() const {
    return false;
}

bool UPlayerMovementComponent::IsAutoPilotMoving() const {
    return false;
}

float UPlayerMovementComponent::GetMovementSpeed() const {
    return 0.0f;
}

float UPlayerMovementComponent::GetJumpHeight() const {
    return 0.0f;
}

void UPlayerMovementComponent::ForceRotateActorWhileKeepingCamera(const FRotator& InNewRotation) {
}

bool UPlayerMovementComponent::EndEdgeGrip() {
    return false;
}

bool UPlayerMovementComponent::EdgeGripAdjustFinished() const {
    return false;
}

void UPlayerMovementComponent::ClearFoliageActorList() {
}

bool UPlayerMovementComponent::CanJump() const {
    return false;
}

bool UPlayerMovementComponent::CanDebugJump() const {
    return false;
}

bool UPlayerMovementComponent::BeginEdgeGrip(const FVector& WallRight, const FVector& GripPoint) {
    return false;
}

void UPlayerMovementComponent::AddGimmickForce(const FVector& Force, float DumpingSpeed) {
}


