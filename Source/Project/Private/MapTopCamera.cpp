#include "MapTopCamera.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

AMapTopCamera::AMapTopCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RootCapsule"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->Step = E_MAP_TOP_CAMERA_STEP::E_NONE;
    this->TransitionStep = E_MAP_TOP_CAMERA_TRANSITION_STEP::E_DONE;
    this->MapFOVY = 0.00f;
    this->TopFOVY = 0.00f;
    this->TargetOffsetHeight = 0.00f;
    this->TransitionSeconds = 0.00f;
    this->CameraComponent->SetupAttachment(RootComponent);
}

void AMapTopCamera::Update_TransitionToTop(float DeltaSeconds) {
}

void AMapTopCamera::Update_TransitionToMap(float DeltaSeconds) {
}

void AMapTopCamera::StartTransitionToTop() {
}

void AMapTopCamera::StartTransitionToMap(const FVector& inTransitionStartLocation) {
}

void AMapTopCamera::SetMapCamera(const FVector& inMapCameraLocation, const FRotator& inMapCameraRotation) {
}



void AMapTopCamera::Init(const FVector& inMapCameraLocation, const FRotator& inMapCameraRotation, float inTargetOffsetHeight, const FRotator& inTargetCameraRotation, float inMapFOVY, float inTopFOVY) {
}


