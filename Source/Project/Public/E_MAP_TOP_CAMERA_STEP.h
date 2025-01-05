#pragma once
#include "CoreMinimal.h"
#include "E_MAP_TOP_CAMERA_STEP.generated.h"

UENUM(BlueprintType)
enum class E_MAP_TOP_CAMERA_STEP : uint8 {
    E_NONE,
    E_INITIALIZE,
    E_TO_TOP_CAMERA,
    E_PROCESS_INPUT,
    E_TO_MAP_CAMERA,
    E_FINALIZE,
    E_DELETE,
};

