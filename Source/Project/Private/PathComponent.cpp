#include "PathComponent.h"

UPathComponent::UPathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReparamStepsPerSegment = 10;
    this->Duration = 1.00f;
    this->bStationaryEndpoints = false;
    this->bSplineHasBeenEdited = false;
    this->bModifiedByConstructionScript = false;
    this->bInputSplinePointsToConstructionScript = false;
    this->bDrawDebug = true;
    this->bUseCustomFindNearest = false;
    this->bClosedLoop = false;
}

void UPathComponent::UpdateSpline() {
}

bool UPathComponent::IsClosedLoop() const {
    return false;
}

FVector UPathComponent::GetUpVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector UPathComponent::GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

float UPathComponent::GetSplineLength() const {
    return 0.0f;
}

FRotator UPathComponent::GetRotationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FRotator{};
}

FRotator UPathComponent::GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FRotator{};
}

float UPathComponent::GetParam8AtDistanceAlongSpline(float Distance) const {
    return 0.0f;
}

float UPathComponent::GetParam7AtDistanceAlongSpline(float Distance) const {
    return 0.0f;
}

float UPathComponent::GetParam6AtDistanceAlongSpline(float Distance) const {
    return 0.0f;
}

float UPathComponent::GetParam5AtDistanceAlongSpline(float Distance) const {
    return 0.0f;
}

float UPathComponent::GetParam4AtDistanceAlongSpline(float Distance) const {
    return 0.0f;
}

float UPathComponent::GetParam3AtDistanceAlongSpline(float Distance) const {
    return 0.0f;
}

float UPathComponent::GetParam2AtDistanceAlongSpline(float Distance) const {
    return 0.0f;
}

float UPathComponent::GetParam1AtDistanceAlongSpline(float Distance) const {
    return 0.0f;
}

FVector UPathComponent::GetLocationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector UPathComponent::GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

FVector UPathComponent::GetLeaveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

float UPathComponent::GetDistanceAlongSplineAtSplinePoint(int32 PointIndex) const {
    return 0.0f;
}

FVector UPathComponent::GetArriveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

float UPathComponent::FindInputKeyClosestToWorldLocation(const FVector& WorldLocation) const {
    return 0.0f;
}

float UPathComponent::FindDistanceClosestToSplineInputKey(float InKey) const {
    return 0.0f;
}

void UPathComponent::ClearSplinePoints(bool bUpdateSpline) {
}

void UPathComponent::AddPoint(const FPathPoint& Point, bool bUpdateSpline) {
}


