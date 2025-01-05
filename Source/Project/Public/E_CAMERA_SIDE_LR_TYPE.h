#pragma once
#include "CoreMinimal.h"
#include "E_CAMERA_SIDE_LR_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_CAMERA_SIDE_LR_TYPE : uint8 {
    E_LR_CAMERA_LEFT,
    E_LR_CAMERA_RIGHT,
    E_LR_CAMERA_CENTER1,
    E_LR_CAMERA_CENTER2,
};

