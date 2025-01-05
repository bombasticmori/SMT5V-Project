#pragma once
#include "CoreMinimal.h"
#include "E_AVOID_DIRECTION.generated.h"

UENUM(BlueprintType)
enum class E_AVOID_DIRECTION : uint8 {
    AVOID_BACK,
    AVOID_RIGHT,
    AVOID_LEFT,
};

