#include "DaathMeshPlacerSpline.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ADaathMeshPlacerSpline::ADaathMeshPlacerSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInstancing = true;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineLinkActor = NULL;
    this->LoopMeshes.AddDefaulted(1);
    this->StartComponentIndex = -1;
    this->EndComponentIndex = -1;
    this->Interval = 1000.00f;
    this->RightOffseet = 0.00f;
    this->UpOffseet = 0.00f;
    this->bAlignForward = false;
}


