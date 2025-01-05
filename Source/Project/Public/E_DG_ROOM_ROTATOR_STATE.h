#pragma once
#include "CoreMinimal.h"
#include "E_DG_ROOM_ROTATOR_STATE.generated.h"

UENUM(BlueprintType)
enum class E_DG_ROOM_ROTATOR_STATE : uint8 {
    E_NONE,
    E_ROTATING_X,
    E_ROTATING_Y,
};

