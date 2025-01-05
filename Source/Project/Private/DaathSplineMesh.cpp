#include "DaathSplineMesh.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ADaathSplineMesh::ADaathSplineMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("RootSplineComponent"));
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->LoopMeshes.AddDefaulted(1);
    this->StartComponentIndex = -1;
    this->EndComponentIndex = -1;
    this->bEulerFilter = false;
}


