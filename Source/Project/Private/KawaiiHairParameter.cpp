#include "KawaiiHairParameter.h"

UKawaiiHairParameter::UKawaiiHairParameter() {
    this->MovementSpeedThreshold_WalkRun = 700.00f;
    this->MovementSpeedThreshold_RunDash = 1200.00f;
    this->ParameterInterpSpeed = 100.00f;
    this->JumpForceDecaySpeed_Stand = 0.00f;
    this->JumpForceDecaySpeed_Run = 0.00f;
    this->JumpForceDecaySpeed_Dash = 0.00f;
    this->LandingForceDecaySpeed_Stand = 0.00f;
    this->LandingForceDecaySpeed_Run = 0.00f;
    this->LandingForceDecaySpeed_Dash = 0.00f;
    this->AttackForceDecaySpeed = 0.00f;
    this->SlidingForcePeriod = 0.25f;
    this->Damping = 0.10f;
    this->WorldDampingRotation = 0.80f;
    this->Stiffness = 0.05f;
    this->Radius = 3.00f;
    this->LimitAngle = 0.00f;
}

void UKawaiiHairParameter::KawaiiHairInterpTo(UPARAM(Ref)FRuntimeKawaiiHairParameter& Current, const FKawaiiHairBundleParameter& Target, float DeltaTime, float InterpSpeed) {
    // Interpolate vector properties of Current towards Target
    Current.ForceCenter = FMath::VInterpTo(Current.ForceCenter, Target.ForceCenter, DeltaTime, InterpSpeed);
    Current.ForceRightA = FMath::VInterpTo(Current.ForceRightA, Target.ForceRightA, DeltaTime, InterpSpeed);
    Current.ForceRightB = FMath::VInterpTo(Current.ForceRightB, Target.ForceRightB, DeltaTime, InterpSpeed);
    Current.ForceRightC = FMath::VInterpTo(Current.ForceRightC, Target.ForceRightC, DeltaTime, InterpSpeed);
    Current.ForceLeftA = FMath::VInterpTo(Current.ForceLeftA, Target.ForceLeftA, DeltaTime, InterpSpeed);
    Current.ForceLeftB = FMath::VInterpTo(Current.ForceLeftB, Target.ForceLeftB, DeltaTime, InterpSpeed);
    Current.ForceLeftC = FMath::VInterpTo(Current.ForceLeftC, Target.ForceLeftC, DeltaTime, InterpSpeed);

    // Interpolate scalar properties
    Current.Alpha = FMath::FInterpTo(Current.Alpha, 1.0f, DeltaTime, InterpSpeed);
    Current.PoseLocationApplyRate = FMath::FInterpTo(Current.PoseLocationApplyRate, 1.0f, DeltaTime, InterpSpeed);
}

FRuntimeKawaiiHairParameter UKawaiiHairParameter::KawaiiHairAddForceToAllBundle(const FRuntimeKawaiiHairParameter& Param, const FVector& AddForce) {
    FRuntimeKawaiiHairParameter UpdatedParam = Param;

    // Add the same force to all relevant force vectors
    UpdatedParam.ForceCenter += AddForce;
    UpdatedParam.ForceRightA += AddForce;
    UpdatedParam.ForceRightB += AddForce;
    UpdatedParam.ForceRightC += AddForce;
    UpdatedParam.ForceLeftA += AddForce;
    UpdatedParam.ForceLeftB += AddForce;
    UpdatedParam.ForceLeftC += AddForce;

    return UpdatedParam;
}
