#pragma once
#include "CoreMinimal.h"
#include "SsInterpolationType.generated.h"

UENUM(BlueprintType)
namespace SsInterpolationType {
    enum Type {
        None,
        Linear,
        Hermite,
        Bezier,
        Acceleration,
        Deceleration,
        Num,
        Invalid = 254,
    };
}

