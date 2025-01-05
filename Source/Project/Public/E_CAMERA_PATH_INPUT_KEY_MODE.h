#pragma once
#include "CoreMinimal.h"
#include "E_CAMERA_PATH_INPUT_KEY_MODE.generated.h"

UENUM(BlueprintType)
enum class E_CAMERA_PATH_INPUT_KEY_MODE : uint8 {
    DEFAULT,
    SEGMENT_RATIO,
};

