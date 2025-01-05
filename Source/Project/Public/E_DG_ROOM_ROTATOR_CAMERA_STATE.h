#pragma once
#include "CoreMinimal.h"
#include "E_DG_ROOM_ROTATOR_CAMERA_STATE.generated.h"

UENUM(BlueprintType)
enum class E_DG_ROOM_ROTATOR_CAMERA_STATE : uint8 {
    E_IDLE,
    E_EASE_IN,
    E_ROTATING,
    E_FALLING,
    E_EASE_OUT,
};

