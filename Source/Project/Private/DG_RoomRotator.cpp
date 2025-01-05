#include "DG_RoomRotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ADG_RoomRotator::ADG_RoomRotator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotateDirection = E_DG_ROOM_ROTATOR_STATE::E_ROTATING_X;
    this->AreaId = 0;
    this->DataId = 0;
    this->RotateState = E_DG_ROOM_ROTATOR_STATE::E_NONE;
    this->RotateSecondsDuration = 5.00f;
    this->HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HitBox"));
    this->RotateCurve = NULL;
}

void ADG_RoomRotator::UpdateRotate(float DeltaSeconds) {
}

void ADG_RoomRotator::UpdateHitBox() {
}

void ADG_RoomRotator::StartRotate() {
}

void ADG_RoomRotator::SetRotateCountY(int32 Count) {
}

void ADG_RoomRotator::SetRotateCountX(int32 Count) {
}

void ADG_RoomRotator::RemoveDynamicActors() {
}

void ADG_RoomRotator::RemoveAllStaticMesh() {
}

void ADG_RoomRotator::RemoveAllObjects() {
}

void ADG_RoomRotator::RegisterDynamicActors(TArray<AActor*> dynamicActors) {
}

bool ADG_RoomRotator::IsInOriginalState() {
    return false;
}

float ADG_RoomRotator::GetRotateRate() {
    return 0.0f;
}

int32 ADG_RoomRotator::GetRotateCountY() {
    return 0;
}

int32 ADG_RoomRotator::GetRotateCountX() {
    return 0;
}

int32 ADG_RoomRotator::GetEventFlagValue() {
    return 0;
}

FName ADG_RoomRotator::GetEventFlagName() {
    return NAME_None;
}

int32 ADG_RoomRotator::GetDataId() {
    return 0;
}

void ADG_RoomRotator::ForceFinishRotate() {
}

void ADG_RoomRotator::CollectStaticMeshActors() {
}

void ADG_RoomRotator::CollectObjects() {
}

void ADG_RoomRotator::ApplyGameData(bool bDoStaticMesh, bool bDoObject, bool bDoPhysics) {
}


