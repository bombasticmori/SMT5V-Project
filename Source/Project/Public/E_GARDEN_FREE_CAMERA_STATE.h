#pragma once
#include "CoreMinimal.h"
#include "E_GARDEN_FREE_CAMERA_STATE.generated.h"

UENUM(BlueprintType)
enum class E_GARDEN_FREE_CAMERA_STATE : uint8 {
    None,
    Deactive,
    ActiveRequested,
    Active,
    ToggleRequested,
    DeactiveRequested,
    MAX,
};

