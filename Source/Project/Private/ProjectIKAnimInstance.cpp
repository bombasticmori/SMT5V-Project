#include "ProjectIKAnimInstance.h"
#include "Kismet/KismetMathLibrary.h"

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

void UProjectIKAnimInstance::UpdateParameters(bool bInMoveOnGround, float InCurrentSpeed, float InMaxSpeedRun, float InMaxSpeedDash)
{
    // Check if the character is on the ground
    if (bInMoveOnGround)
    {
        // Adjust PelvisOffset based on movement speed
        if (InCurrentSpeed < InMaxSpeedRun)
        {
            PelvisOffset.Z = UKismetMathLibrary::FInterpTo(PelvisOffset.Z, GroundingCorrectDistance, GetWorld()->GetDeltaSeconds(), CompHeightInterpSpeed_Down);
        }
        else if (InCurrentSpeed < InMaxSpeedDash)
        {
            PelvisOffset.Z = UKismetMathLibrary::FInterpTo(PelvisOffset.Z, GroundingCorrectDistance * 0.5f, GetWorld()->GetDeltaSeconds(), CompHeightInterpSpeed_Up);
        }
        else
        {
            PelvisOffset.Z = UKismetMathLibrary::FInterpTo(PelvisOffset.Z, 0.0f, GetWorld()->GetDeltaSeconds(), CompHeightInterpSpeed_Down_Grounding);
        }
    }
    else
    {
        // Reset offsets if not on the ground
        PelvisOffset = FVector::ZeroVector;
    }
}

void UProjectIKAnimInstance::TickFootIK(float DeltaSeconds)
{
    if (!bEnableFootIK) return;

    // Simulate IK adjustments for the left and right foot
    LeftFootOffset.Z = UKismetMathLibrary::FInterpTo(LeftFootOffset.Z, StepHeightLimitMax, DeltaSeconds, FootHeightInterpSpeed);
    RightFootOffset.Z = UKismetMathLibrary::FInterpTo(RightFootOffset.Z, StepHeightLimitMax, DeltaSeconds, FootHeightInterpSpeed);

    // Interpolate ankle rotation offsets
    LeftAnkleRotationOffset = UKismetMathLibrary::RInterpTo(LeftAnkleRotationOffset, FRotator::ZeroRotator, DeltaSeconds, AnkleRotationInterpSpeed_Up);
    RightAnkleRotationOffset = UKismetMathLibrary::RInterpTo(RightAnkleRotationOffset, FRotator::ZeroRotator, DeltaSeconds, AnkleRotationInterpSpeed_Up);

    bUpdatedFootIK = true;
}

void UProjectIKAnimInstance::ResetFootIK()
{
    // Reset all foot IK-related offsets and rotations
    PelvisOffset = FVector::ZeroVector;
    LeftFootOffset = FVector::ZeroVector;
    RightFootOffset = FVector::ZeroVector;
    LeftAnkleRotationOffset = FRotator::ZeroRotator;
    RightAnkleRotationOffset = FRotator::ZeroRotator;

    bUpdatedFootIK = false;
}


