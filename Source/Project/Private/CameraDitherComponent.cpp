#include "CameraDitherComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"
#include "FoliageInstancedStaticMeshComponent.h"

UCameraDitherComponent::UCameraDitherComponent(const FObjectInitializer& ObjectInitializer) {
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

void UCameraDitherComponent::UpdateDitherFoliageActorList()
{
    FoliageCompList.Empty();
    if (!GetOwner()) return;

    TArray<UActorComponent*> Components = GetOwner()->GetComponentsByClass(UFoliageInstancedStaticMeshComponent::StaticClass());
    for (UActorComponent* Component : Components)
    {
        if (UFoliageInstancedStaticMeshComponent* FoliageComp = Cast<UFoliageInstancedStaticMeshComponent>(Component))
        {
            FoliageCompList.Add(FoliageComp);
        }
    }
}

void UCameraDitherComponent::UnmaskMeshes(UObject* WorldContextObject)
{
    for (FMaskedMeshStructure& MaskedMesh : MaskedMeshes)
    {
        if (MaskedMesh.MaskedMesh)
        {
            MaskedMesh.MaskedMesh->SetVisibility(true);
        }
    }
    MaskedMeshes.Empty();
}

bool UCameraDitherComponent::TraceForMaskingObjects(UObject* WorldContextObject, TArray<FHitResult>& HitResults)
{
    if (!WorldContextObject) return false;

    FVector Start = m_CapsuleComponent ? m_CapsuleComponent->GetComponentLocation() + m_StartTraceLoc : FVector::ZeroVector;
    FVector End = Start + (m_CameraBoom ? m_CameraBoom->GetForwardVector() * m_TraceWidth : FVector::ZeroVector);
    uint8 traceChannel = m_TraceChannel;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());

    GetWorld()->LineTraceMultiByChannel(
        HitResults,
        Start,
        End,
        ECC_WorldStatic,
        Params,
        FCollisionResponseParams::DefaultResponseParam
    );

    if (m_TraceVisibility == EDrawDebugTrace::ForOneFrame)
    {
        DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 1.0f, 0, m_LineWidth);
    }

    return HitResults.Num() > 0;
}

void UCameraDitherComponent::MaskHitMeshes(UObject* WorldContextObject, TArray<FHitResult>& HitResults)
{
    for (const FHitResult& Hit : HitResults)
    {
        if (UPrimitiveComponent* HitComponent = Hit.GetComponent())
        {
            FMaskedMeshStructure newMesh = FMaskedMeshStructure();
            newMesh.MaskedMesh = HitComponent;
            newMesh.InstanceID = Hit.Item;
            MaskedMeshes.Add(newMesh);
            HitComponent->SetVisibility(false);
        }
    }
}

void UCameraDitherComponent::MaskExuldedFoliages()
{
    for (UFoliageInstancedStaticMeshComponent* FoliageComp : FoliageCompList)
    {
        FoliageComp->SetVisibility(false);
    }
}

void UCameraDitherComponent::InitializeDitherState()
{
    if (m_CameraBoom)
    {
        m_StartTraceLoc = FVector(0, 0, m_TraceHeightOffset);
        m_EndTraceLoc = FVector(0, 0, m_TraceHeight);
    }
}

void UCameraDitherComponent::FadeInMaskedMeshes(float DeltaTime)
{
    for (int32 i = MaskedMeshes.Num() - 1; i >= 0; --i)
    {
        FMaskedMeshStructure& Mesh = MaskedMeshes[i];
        if (UPrimitiveComponent* Component = Mesh.MaskedMesh)
        {
            Component->SetVisibility(true);
            MaskedMeshes.RemoveAt(i);
        }
    }
}

void UCameraDitherComponent::CalculateHitLocation(UObject* WorldContextObject, FVector& HitLocation)
{
    FVector Start = m_CapsuleComponent ? m_CapsuleComponent->GetComponentLocation() + m_StartTraceLoc : FVector::ZeroVector;
    FVector End = Start + (m_CameraBoom ? m_CameraBoom->GetForwardVector() * m_TraceWidth : FVector::ZeroVector);

    FHitResult HitResult;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());

    if (GetWorld()->LineTraceSingleByChannel(
        HitResult,
        Start,
        End,
        ECC_WorldStatic,
        Params))
    {
        HitLocation = HitResult.ImpactPoint;
    }
    else
    {
        HitLocation = FVector::ZeroVector;
    }
}
