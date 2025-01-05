#include "CustomCameraRig_Rail.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

ACustomCameraRig_Rail::ACustomCameraRig_Rail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
    this->Tags.AddDefaulted(1);
    this->CurrentPositionOnRail = 0.00f;
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->RailSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("RailSplineComponent"));
    this->RailCameraMount = CreateDefaultSubobject<USceneComponent>(TEXT("RailCameraMount"));
    this->RailSplineComponent->SetupAttachment(RootComponent);
    this->RailCameraMount->SetupAttachment(RailSplineComponent);
}

void ACustomCameraRig_Rail::MakeupSpline(TArray<FCustomSplinePoint> SplinePoint) {
}

float ACustomCameraRig_Rail::GetSplineLength() {
    return 0.0f;
}

FRotator ACustomCameraRig_Rail::GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
    return FRotator{};
}

FVector ACustomCameraRig_Rail::GetLocationDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
    return FVector{};
}

FVector ACustomCameraRig_Rail::GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
    return FVector{};
}


