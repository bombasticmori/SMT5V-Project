#pragma once
#include "CoreMinimal.h"
#include "E_StickButtonAction.generated.h"

UENUM(BlueprintType)
enum E_StickButtonAction {
    E_StickButtonAction_None,
    E_StickButtonAction_ToggleAutoRun,
    E_StickButtonAction_CameraReset,
};

