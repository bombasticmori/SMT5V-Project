#include "GardenFreeCameraManager.h"

UGardenFreeCameraManager::UGardenFreeCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ShowFreeCamUI = false;
    this->GardenFreeCameraControllerRef = NULL;
    this->GardenFreeCameraControllerClass = NULL;
    this->m_FreeCameraState = E_GARDEN_FREE_CAMERA_STATE::None;
}

void UGardenFreeCameraManager::ToggleFreeCameraUI_Implementation() {
}

void UGardenFreeCameraManager::RequestStartFreeCamera_Implementation() {
}

void UGardenFreeCameraManager::RequestEndFreeCamera_Implementation() {
}

void UGardenFreeCameraManager::Initialize(const FTransform& SafeSpawnTransform) {
}

bool UGardenFreeCameraManager::EnableGardenFreeCamera(const FVector Location, const FRotator Rotation, const float CameraTurnSpeed, const float MovementSpeed, const float MovementAcceleration, const float CollisionRadius, const FName CollisionProfile, const float MinUpViewAngle, const float MaxUpViewAngle) {
    return false;
}


bool UGardenFreeCameraManager::DisableGardenFreeCamera() {
    return false;
}



