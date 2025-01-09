#include "BPL_Math.h"
#include "Components/SplineComponent.h"

//Method details generated via ChatGPT. Such methods should be treated as a 'best guess' approximation in lieu of further reversing
UBPL_Math::UBPL_Math() {
}

TArray<int32> UBPL_Math::SplitDigit(int32 Num) {
    TArray<int32> Digits;
    if (Num == 0)
    {
        Digits.Add(0);
        return Digits;
    }

    while (Num != 0)
    {
        Digits.Insert(Num % 10, 0); // Insert at the front to maintain order
        Num /= 10;
    }
    return Digits;
}

TArray<AActor*> UBPL_Math::SortActorsByKey(const TArray<AActor*>& InActors, const TArray<int32>& InKeys, bool Accending) {
    if (InActors.Num() != InKeys.Num())
    {
        UE_LOG(LogTemp, Warning, TEXT("SortActorsByKey: Mismatched lengths between actors and keys."));
        return InActors;
    }

    TArray<AActor*> SortedActors = InActors;

    // Create an array of indices to sort
    TArray<int32> Indices;
    for (int32 i = 0; i < InKeys.Num(); i++)
    {
        Indices.Add(i);
    }

    // Sort indices based on keys
    Indices.Sort([&InKeys, Accending](int32 A, int32 B)
        {
            return Accending ? InKeys[A] < InKeys[B] : InKeys[A] > InKeys[B];
        });

    // Rearrange actors based on sorted indices
    for (int32 i = 0; i < Indices.Num(); i++)
    {
        SortedActors[i] = InActors[Indices[i]];
    }

    return SortedActors;
}

bool UBPL_Math::QuadraticFormula(float A, float B, float C, float& x0, float& x1) {
    float Discriminant = FMath::Square(B) - 4.0f * A * C;

    if (Discriminant < 0.0f)
    {
        return false; // No real roots
    }

    float SqrtD = FMath::Sqrt(Discriminant);
    x0 = (-B - SqrtD) / (2.0f * A);
    x1 = (-B + SqrtD) / (2.0f * A);

    return true; // Solutions found
}

FRotator UBPL_Math::MakeRotFromAtoB(const FVector& A, const FVector& B) {
    FVector NormalizedA = A.GetSafeNormal();
    FVector NormalizedB = B.GetSafeNormal();

    FQuat RotationQuat = FQuat::FindBetweenVectors(NormalizedA, NormalizedB);
    return RotationQuat.Rotator();
}

FTransform UBPL_Math::MakeRelativeTransform(const FTransform& A, const FTransform& B) {
    return A.GetRelativeTransform(B);
}

FVector UBPL_Math::MakeNormalFromTrianglePoints(const FVector& A, const FVector& B, const FVector& C) {
    FVector AB = B - A;
    FVector AC = C - A;

    return FVector::CrossProduct(AB, AC).GetSafeNormal();
}

bool UBPL_Math::LineToLineIntersection(const FVector& fromA, const FVector& fromB, const FVector& toA, const FVector& toB, FVector& outIntersection) {
    FVector Dir1 = fromB - fromA;
    FVector Dir2 = toB - toA;

    FVector CrossDirs = FVector::CrossProduct(Dir1, Dir2);

    // If the determinant is near zero, lines are parallel or coincident
    if (CrossDirs.SizeSquared() < KINDA_SMALL_NUMBER)
    {
        return false;
    }

    FVector Diff = toA - fromA;
    float t = FVector::CrossProduct(Diff, Dir2) | CrossDirs / CrossDirs.SizeSquared();

    outIntersection = fromA + Dir1 * t;
    return true;
}

float UBPL_Math::IsLeft2D(const FVector2D& v1, const FVector2D& v2, const FVector2D& target) {
    return (v2.X - v1.X) * (target.Y - v1.Y) - (v2.Y - v1.Y) * (target.X - v1.X);
}

bool UBPL_Math::IsInsideOrientedBox3D(const FTransform& Transform, const FVector& Extent, const FVector& target) {
    FVector LocalTarget = Transform.InverseTransformPosition(target);

    return FMath::Abs(LocalTarget.X) <= Extent.X &&
        FMath::Abs(LocalTarget.Y) <= Extent.Y &&
        FMath::Abs(LocalTarget.Z) <= Extent.Z;
}

bool UBPL_Math::IsInsideOrientedBox2D(const FVector2D& Center, const FVector2D& Extent, float RotateZ, const FVector2D& target) {
    FVector2D RotatedTarget = FVector2D(
        FMath::Cos(-RotateZ) * (target.X - Center.X) - FMath::Sin(-RotateZ) * (target.Y - Center.Y),
        FMath::Sin(-RotateZ) * (target.X - Center.X) + FMath::Cos(-RotateZ) * (target.Y - Center.Y)
    );

    return FMath::Abs(RotatedTarget.X) <= Extent.X &&
        FMath::Abs(RotatedTarget.Y) <= Extent.Y;
}

int32 UBPL_Math::GetWeightedRandom(const TArray<int32>& WeightArray) {
    if (WeightArray.Num() == 0)
    {
        return -1; // Invalid input
    }

    int32 TotalWeight = 0;
    for (int32 Weight : WeightArray)
    {
        TotalWeight += FMath::Max(0, Weight);
    }

    if (TotalWeight <= 0)
    {
        return -1; // No valid weights
    }

    int32 RandomValue = FMath::RandRange(1, TotalWeight);
    int32 AccumulatedWeight = 0;

    for (int32 Index = 0; Index < WeightArray.Num(); Index++)
    {
        AccumulatedWeight += FMath::Max(0, WeightArray[Index]);
        if (RandomValue <= AccumulatedWeight)
        {
            return Index;
        }
    }

    return -1; // Shouldn't reach here
}

int32 UBPL_Math::GetDigitLength(int32 Num) {
    if (Num == 0)
    {
        return 1;
    }

    int32 Count = 0;
    Num = FMath::Abs(Num);

    while (Num > 0)
    {
        Num /= 10;
        Count++;
    }
    return Count;
}

FVector UBPL_Math::CalcNearestPointOnSpline(const USplineComponent* Spline, const FVector& Point) {
    if (!Spline)
    {
        UE_LOG(LogTemp, Warning, TEXT("CalcNearestPointOnSpline: Invalid Spline Component"));
        return FVector::ZeroVector;
    }

    // Get the closest spline input key to the point
    float InputKey = Spline->FindInputKeyClosestToWorldLocation(Point);

    // Use the input key to get the closest point on the spline
    return Spline->GetLocationAtSplineInputKey(InputKey, ESplineCoordinateSpace::World);
}

void UBPL_Math::CalcNearestPointOnLineSegment(FVector& OutPoint, float& OutDistance, const FVector& Point, const FVector& SegmentPoint0, const FVector& SegmentPoint1) {
    FVector SegmentDirection = SegmentPoint1 - SegmentPoint0;
    float SegmentLengthSquared = SegmentDirection.SizeSquared();

    if (SegmentLengthSquared == 0.0f)
    {
        // The segment is a single point
        OutPoint = SegmentPoint0;
        OutDistance = FVector::Dist(Point, SegmentPoint0);
        return;
    }

    float t = FVector::DotProduct(Point - SegmentPoint0, SegmentDirection) / SegmentLengthSquared;
    t = FMath::Clamp(t, 0.0f, 1.0f);

    OutPoint = SegmentPoint0 + t * SegmentDirection;
    OutDistance = FVector::Dist(Point, OutPoint);
}

void UBPL_Math::CalcCloserValue(float CurrentValue, float TargetValue, float DeltaValue, float& OutValue, bool& bMatched) {
    float Delta = FMath::Clamp(DeltaValue, 0.0f, FMath::Abs(TargetValue - CurrentValue));
    OutValue = CurrentValue + FMath::Sign(TargetValue - CurrentValue) * Delta;
    bMatched = FMath::IsNearlyEqual(OutValue, TargetValue, KINDA_SMALL_NUMBER);
}

void UBPL_Math::BreakRotToAxisAndAngle(const FRotator& Rotator, FVector& Axis, float& Angle) {
    FQuat Quat = FQuat(Rotator);
    Angle = Quat.GetAngle();
    Axis = Quat.GetRotationAxis();
}


