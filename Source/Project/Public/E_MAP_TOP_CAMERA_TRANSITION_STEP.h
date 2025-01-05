#pragma once
#include "CoreMinimal.h"
#include "E_MAP_TOP_CAMERA_TRANSITION_STEP.generated.h"

UENUM(BlueprintType)
enum class E_MAP_TOP_CAMERA_TRANSITION_STEP : uint8 {
    E_NEAR_MAP,
    E_CHANGE,
    E_NEAR_TOP,
    E_DONE,
};

