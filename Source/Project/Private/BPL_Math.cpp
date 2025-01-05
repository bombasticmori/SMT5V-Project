#include "BPL_Math.h"

UBPL_Math::UBPL_Math() {
}

TArray<int32> UBPL_Math::SplitDigit(int32 Num) {
    return TArray<int32>();
}

TArray<AActor*> UBPL_Math::SortActorsByKey(const TArray<AActor*>& InActors, const TArray<int32>& InKeys, bool Accending) {
    return TArray<AActor*>();
}

bool UBPL_Math::QuadraticFormula(float A, float B, float C, float& x0, float& x1) {
    return false;
}

FRotator UBPL_Math::MakeRotFromAtoB(const FVector& A, const FVector& B) {
    return FRotator{};
}

FTransform UBPL_Math::MakeRelativeTransform(const FTransform& A, const FTransform& B) {
    return FTransform{};
}

FVector UBPL_Math::MakeNormalFromTrianglePoints(const FVector& A, const FVector& B, const FVector& C) {
    return FVector{};
}

bool UBPL_Math::LineToLineIntersection(const FVector& fromA, const FVector& fromB, const FVector& toA, const FVector& toB, FVector& outIntersection) {
    return false;
}

float UBPL_Math::IsLeft2D(const FVector2D& v1, const FVector2D& v2, const FVector2D& target) {
    return 0.0f;
}

bool UBPL_Math::IsInsideOrientedBox3D(const FTransform& Transform, const FVector& Extent, const FVector& target) {
    return false;
}

bool UBPL_Math::IsInsideOrientedBox2D(const FVector2D& Center, const FVector2D& Extent, float RotateZ, const FVector2D& target) {
    return false;
}

int32 UBPL_Math::GetWeightedRandom(const TArray<int32>& WeightArray) {
    return 0;
}

int32 UBPL_Math::GetDigitLength(int32 Num) {
    return 0;
}

FVector UBPL_Math::CalcNearestPointOnSpline(const USplineComponent* Spline, const FVector& Point) {
    return FVector{};
}

void UBPL_Math::CalcNearestPointOnLineSegment(FVector& OutPoint, float& OutDistance, const FVector& Point, const FVector& SegmentPoint0, const FVector& SegmentPoint1) {
}

void UBPL_Math::CalcCloserValue(float CurrentValue, float TargetValue, float DeltaValue, float& OutValue, bool& bMatched) {
}

void UBPL_Math::BreakRotToAxisAndAngle(const FRotator& Rotator, FVector& Axis, float& Angle) {
}


