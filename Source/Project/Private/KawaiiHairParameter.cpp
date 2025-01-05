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


void UKawaiiHairParameter::KawaiiHairInterpTo(FRuntimeKawaiiHairParameter& Current, const FKawaiiHairBundleParameter& target, float DeltaTime, float InterpSpeed) {
}

FRuntimeKawaiiHairParameter UKawaiiHairParameter::KawaiiHairAddForceToAllBundle(const FRuntimeKawaiiHairParameter& Param, const FVector& AddForce) {
    return FRuntimeKawaiiHairParameter{};
}


