#include "CustomPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "CharaParamComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

ACustomPawn::ACustomPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->bAbsoluteViewRotation = false;
    this->bIgnoreMovementInputByNotifyState = false;
    this->CharacterId = 0;
    this->bEnableRootMotion = false;
    this->bIgnoreRootMotionRotationXY = false;
    this->bIgnoreRootMotionTransient = false;
    this->VoiceCueSheet = NULL;
    this->SymbolComponent = NULL;
    this->IsNahobino = false;
    this->Mesh->SetupAttachment(RootComponent);
}

UParticleSystemComponent* ACustomPawn::SpawnTrailEmitter(UParticleSystem* EmitterTemplate, FName FirstSocketName, FName SecondSocketName, TEnumAsByte<ETrailWidthMode> WidthMode, float Width) {
    if (!EmitterTemplate || !Mesh) return nullptr;

    UParticleSystemComponent* TrailEmitter = UGameplayStatics::SpawnEmitterAttached(
        EmitterTemplate,
        Mesh,
        FirstSocketName,
        FVector::ZeroVector,
        FRotator::ZeroRotator,
        FVector(Width),
        EAttachLocation::KeepRelativeOffset
    );

    if (TrailEmitter) {
        TrailEmitter->SetTrailSourceData(FirstSocketName,SecondSocketName, WidthMode,Width);
    }

    return TrailEmitter;
}

void ACustomPawn::ResetForceEnableMovementInput() {
    bIgnoreMovementInputByNotifyState = false;
    bIgnoreRootMotionRotationXY = false;
    bIgnoreRootMotionTransient = false;
}

void ACustomPawn::PrepareMapEvent(FMapEventReadyDelegate OnReady) {
    OnTransformUpdated.Broadcast(true);
    CallMapEventOnReadyDelegate();
    OnReady.ExecuteIfBound();
}

bool ACustomPawn::IsRootMotionPlaying() const {
    return bEnableRootMotion && !bIgnoreRootMotionTransient;
}

bool ACustomPawn::IsMovingOnGround() const {
    return CapsuleComponent && CapsuleComponent->IsSimulatingPhysics();
}

bool ACustomPawn::IsForceEnabledRotateInput() const {
    return !bIgnoreRootMotionRotationXY;
}

bool ACustomPawn::IsForceEnabledMovementInput() const {
    return !bIgnoreMovementInputByNotifyState;
}

float ACustomPawn::GetGravityZ() const {
    return GetWorld() ? GetWorld()->GetGravityZ() : -980.f;
}

//UCharaParamComponent* ACustomPawn::GetCharaParam() {
//    // Example implementation: assuming CharaParamComponent is attached to this actor
//    return FindComponentByClass<UCharaParamComponent>();
//}
//
//bool ACustomPawn::CheckPlayAnimNotifyDevilVoice(EDevilVoiceType DevilVoiceType) const {
//    if (UAnimInstance* AnimInstance = Mesh->GetAnimInstance()) {
//        // Iterate through active anim notifies
//        for (const FAnimNotifyEvent& NotifyEvent : AnimInstance->ActiveAnimNotifyState) {
//            if (NotifyEvent.Notify && NotifyEvent.Notify->IsA(UAnimNotify::StaticClass())) {
//                if (NotifyEvent.Notify->GetNotifyName() == TEXT("AnimNotify_DevilVoice")) {
//                    return true; // Matches the AnimNotify we're looking for
//                }
//            }
//        }
//    }
//    return false;
//}
//
//bool ACustomPawn::CheckMagatsuhiDevil() const {
//    if (UCharaParamComponent* CharaParam = FindComponentByClass<UCharaParamComponent>()) {
//        return CharaParam->m_IsMagatsuhiDevil;
//    }
//    return false;
//}

void ACustomPawn::ForceEnableMovementInput(float Time, bool bMovement, bool bRotate) {
    bIgnoreMovementInputByNotifyState = !bMovement;
    bIgnoreRootMotionRotationXY = !bRotate;

    // Optionally, start a timer to reset these flags after Time seconds
    if (Time > 0.f) {
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(
            TimerHandle,
            [this]() {
                ResetForceEnableMovementInput();
            },
            Time,
            false
        );
    }
}

void ACustomPawn::CallMapEventOnReadyDelegate() {
}

