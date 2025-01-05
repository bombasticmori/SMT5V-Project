#include "CameraPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "PathComponent.h"

ACameraPath::ACameraPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
    this->CurrentPositionOnPath = 0.00f;
    this->PathInputKeyMode = E_CAMERA_PATH_INPUT_KEY_MODE::DEFAULT;
    this->RailInputKeyMode = E_CAMERA_PATH_INPUT_KEY_MODE::DEFAULT;
    this->TargetInputKeyMode = E_CAMERA_PATH_INPUT_KEY_MODE::DEFAULT;
    this->bEnableLookAtTracking = false;
    this->bUsePathUpVector = false;
    this->bUsePathFieldOfView = false;
    this->RailInterpSpeed = 0.00f;
    this->TargetInterpSpeed = 0.00f;
    this->Param1Cache = 0.00f;
    this->Param2Cache = 0.00f;
    this->Param3Cache = 0.00f;
    this->Param4Cache = 0.00f;
    this->Param5Cache = 0.00f;
    this->Param6Cache = 0.00f;
    this->Param7Cache = 0.00f;
    this->Param8Cache = 0.00f;
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->PathComponent = CreateDefaultSubobject<UPathComponent>(TEXT("PathComponent"));
    this->RailSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("RailSplineComponent"));
    this->RailCameraMount = CreateDefaultSubobject<USceneComponent>(TEXT("RailCameraMount"));
    this->TargetSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("TargetSplineComponent"));
    this->PathComponent->SetupAttachment(RootComponent);
    this->RailSplineComponent->SetupAttachment(RootComponent);
    this->RailCameraMount->SetupAttachment(RailSplineComponent);
    this->TargetSplineComponent->SetupAttachment(RootComponent);
}

void ACameraPath::ResetInterp() {
}

void ACameraPath::LookAt(USceneComponent* Point, FName Socket) {
}


