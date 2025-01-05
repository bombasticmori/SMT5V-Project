#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESplineCoordinateSpace -FallbackName=ESplineCoordinateSpace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "Components/PrimitiveComponent.h"
#include "Components/SplineComponent.h"
#include "PathCurves.h"
#include "PathPoint.h"
#include "PathComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UPathComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathCurves SplineCurves;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReparamStepsPerSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStationaryEndpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplineHasBeenEdited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifiedByConstructionScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputSplinePointsToConstructionScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomFindNearest;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClosedLoop;
    
public:
    UPathComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSpline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosedLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam8AtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam7AtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam6AtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam5AtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam4AtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam3AtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam2AtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParam1AtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeaveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceAlongSplineAtSplinePoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetArriveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FindInputKeyClosestToWorldLocation(const FVector& WorldLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FindDistanceClosestToSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSplinePoints(bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddPoint(const FPathPoint& Point, bool bUpdateSpline);
    
};

