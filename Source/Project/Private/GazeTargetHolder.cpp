#include "GazeTargetHolder.h"

UGazeTargetHolder::UGazeTargetHolder() {
    this->GazeMaxDistance = 2500.00f;
    this->GazeWeight_TargetType = 0.40f;
    this->GazeWeight_Distance = 0.20f;
    this->GazeWeight_CameraDirection = 0.40f;
}

void UGazeTargetHolder::UnregisterGazeTarget(TScriptInterface<IGazeTarget> InTarget) {
}

void UGazeTargetHolder::RemovePriorityGazeTarget(USceneComponent* InTarget) {
}

void UGazeTargetHolder::RegisterGazeTarget(TScriptInterface<IGazeTarget> InTarget) {
}

bool UGazeTargetHolder::FindGazeTargetFromPawn(ACustomPawn* InPawn, FVector& OutLocation, float DistanceCoefficient) {
    return false;
}

void UGazeTargetHolder::AddPriorityGazeTarget(USceneComponent* InTarget) {
}


