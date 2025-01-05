#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESplineCoordinateSpace -FallbackName=ESplineCoordinateSpace
#include "Components/SplineComponent.h"
#include "CustomSplinePoint.h"
#include "RigRailPlayInfo.h"
#include "CustomCameraRig_Rail.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class PROJECT_API ACustomCameraRig_Rail : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigRailPlayInfo m_PlayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurrentPositionOnRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* RailSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RailCameraMount;
    
    ACustomCameraRig_Rail(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void MakeupSpline(TArray<FCustomSplinePoint> SplinePoint);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
};

