#include "ProjectDebugCameraController.h"
#include "PlayerCameraManagerLimitless.h"

AProjectDebugCameraController::AProjectDebugCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = APlayerCameraManagerLimitless::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


