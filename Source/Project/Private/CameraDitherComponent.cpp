#include "CameraDitherComponent.h"
#include "Kismet/KismetSystemLibrary.h"

UCameraDitherComponent::UCameraDitherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FoliageDitherDataClass = NULL;
    this->DitherChannel = ECC_WorldStatic;
    this->FadeTime = 0.00f;
    this->CurveFloat = NULL;
    this->m_CameraBoom = NULL;
    this->m_CameraComponent = NULL;
    this->m_CapsuleComponent = NULL;
    this->m_TraceHeightOffset = 0.00f;
    this->m_TraceHeight = 0.00f;
    this->m_TraceWidth = 0.00f;
    this->m_TraceChannel = TraceTypeQuery1;
    this->m_TraceVisibility = EDrawDebugTrace::None;
    this->m_LineWidth = 0.00f;
    this->m_FallOff = 0.00f;
}

void UCameraDitherComponent::UpdateDitherFoliageActorList() {
}

void UCameraDitherComponent::UnmaskMeshes(UObject* WorldContextObject) {
}

bool UCameraDitherComponent::TraceForMaskingObjects(UObject* WorldContextObject, TArray<FHitResult>& HitResults) {
    return false;
}


void UCameraDitherComponent::MaskHitMeshes(UObject* WorldContextObject, TArray<FHitResult>& HitResults) {
}

void UCameraDitherComponent::MaskExuldedFoliages() {
}

void UCameraDitherComponent::InitializeDitherState() {
}

void UCameraDitherComponent::FadeInMaskedMeshes(float DeltaTime) {
}

void UCameraDitherComponent::CalculateHitLocation(UObject* WorldContextObject, FVector& HitLocation) {
}


