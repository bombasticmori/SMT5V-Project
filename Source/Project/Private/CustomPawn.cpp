#include "CustomPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

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
    return NULL;
}

void ACustomPawn::ResetForceEnableMovementInput() {
}

void ACustomPawn::PrepareMapEvent(FMapEventReadyDelegate OnReady) {
}


bool ACustomPawn::IsRootMotionPlaying() const {
    return false;
}

bool ACustomPawn::IsMovingOnGround() const {
    return false;
}

bool ACustomPawn::IsForceEnabledRotateInput() const {
    return false;
}

bool ACustomPawn::IsForceEnabledMovementInput() const {
    return false;
}

float ACustomPawn::GetGravityZ() const {
    return 0.0f;
}


void ACustomPawn::ForceEnableMovementInput(float Time, bool bMovement, bool bRotate) {
}



void ACustomPawn::CallMapEventOnReadyDelegate() {
}


