#include "ProjectIKAnimInstance.h"

UProjectIKAnimInstance::UProjectIKAnimInstance() {
    this->RootMotionMode = ERootMotionMode::NoRootMotionExtraction;
    this->bEnableFootIK = false;
    this->RootJoint = TEXT("Root");
    this->PelvisJoint = TEXT("b_pelvis");
    this->LeftFootIkJoint = TEXT("ik_l_foot_position01");
    this->LeftFootGroundJoint = TEXT("ik_l_ground01");
    this->LeftHeelJoint = TEXT("SOC_IK_L_HEEL");
    this->LeftToeJoint = TEXT("SOC_IK_L_TOE");
    this->RightFootIkJoint = TEXT("ik_r_foot_position01");
    this->RightFootGroundJoint = TEXT("ik_r_ground01");
    this->RightHeelJoint = TEXT("SOC_IK_R_HEEL");
    this->RightToeJoint = TEXT("SOC_IK_R_TOE");
    this->GroundingCorrectDistance = 10.00f;
    this->GroundingCheckHeight = 1.00f;
    this->TraceRangeUp = 42.00f;
    this->TraceRangeDown = -100.00f;
    this->StepHeightLimitMax = 42.00f;
    this->StepHeightLimitMin = 22.00f;
    this->CompHeightInterpSpeed_Down_Grounding = 20.00f;
    this->CompHeightInterpSpeed_Down = 5.00f;
    this->CompHeightInterpSpeed_Up_Grounding = 40.00f;
    this->CompHeightInterpSpeed_Up = 10.00f;
    this->FootHeightInterpSpeed = 40.00f;
    this->FootInterpSpeed = 40.00f;
    this->AnkleRotationInterpSpeed_Up = 90.00f;
    this->AnkleRotationInterpSpeed_Down = 90.00f;
    this->FootEffectReTriggerSlipDistance = 15.00f;
    this->FootEffectReTriggerInterval = 0.30f;
    this->bUpdatedFootIK = false;
}

void UProjectIKAnimInstance::UpdateParameters(bool bInMoveOnGround, float InCurrentSpeed, float InMaxSpeedRun, float InMaxSpeedDash) {
}

void UProjectIKAnimInstance::TickFootIK(float DeltaSeconds) {
}

void UProjectIKAnimInstance::ResetFootIK() {
}


