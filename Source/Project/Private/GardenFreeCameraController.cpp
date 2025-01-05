#include "GardenFreeCameraController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager

AGardenFreeCameraController::AGardenFreeCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = APlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
    const FProperty* p_bIsLocalPlayerController = GetClass()->FindPropertyByName("bIsLocalPlayerController");
    (*p_bIsLocalPlayerController->ContainerPtrToValuePtr<bool>(this)) = true;
    this->OriginalControllerRef = NULL;
    this->OriginalPlayer = NULL;
    this->GardenFreeCameraPawnRef = NULL;
}

void AGardenFreeCameraController::SetFreeCameraMovementSpeed(float MovementSpeed) {
}

void AGardenFreeCameraController::MoveUp(float Val) {
}

void AGardenFreeCameraController::MoveRight(float Val) {
}

void AGardenFreeCameraController::MoveForward(float Val) {
}


bool AGardenFreeCameraController::DestroyFreeCameraActors() {
    return false;
}


