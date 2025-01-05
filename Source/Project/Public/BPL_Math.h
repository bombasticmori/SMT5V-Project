#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_Math.generated.h"

class AActor;
class USplineComponent;

UCLASS(Blueprintable)
class PROJECT_API UBPL_Math : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Math();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> SplitDigit(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> SortActorsByKey(const TArray<AActor*>& InActors, const TArray<int32>& InKeys, bool Accending);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QuadraticFormula(float A, float B, float C, float& x0, float& x1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromAtoB(const FVector& A, const FVector& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform MakeRelativeTransform(const FTransform& A, const FTransform& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector MakeNormalFromTrianglePoints(const FVector& A, const FVector& B, const FVector& C);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineToLineIntersection(const FVector& fromA, const FVector& fromB, const FVector& toA, const FVector& toB, FVector& outIntersection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float IsLeft2D(const FVector2D& v1, const FVector2D& v2, const FVector2D& target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInsideOrientedBox3D(const FTransform& Transform, const FVector& Extent, const FVector& target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInsideOrientedBox2D(const FVector2D& Center, const FVector2D& Extent, float RotateZ, const FVector2D& target);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetWeightedRandom(const TArray<int32>& WeightArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDigitLength(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    static FVector CalcNearestPointOnSpline(const USplineComponent* Spline, const FVector& Point);
    
    UFUNCTION(BlueprintCallable)
    static void CalcNearestPointOnLineSegment(FVector& OutPoint, float& OutDistance, const FVector& Point, const FVector& SegmentPoint0, const FVector& SegmentPoint1);
    
    UFUNCTION(BlueprintCallable)
    static void CalcCloserValue(float CurrentValue, float TargetValue, float DeltaValue, float& OutValue, bool& bMatched);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakRotToAxisAndAngle(const FRotator& Rotator, FVector& Axis, float& Angle);
    
};

