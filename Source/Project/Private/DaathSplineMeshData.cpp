#include "DaathSplineMeshData.h"
#include "Components/SplineMeshComponent.h"

FDaathSplineMeshData::FDaathSplineMeshData() {
    this->Mesh = NULL;
    this->ForwardAxis = ESplineMeshAxis::X;
    this->bReverseAxis = false;
    this->Offset = 0.00f;
}

