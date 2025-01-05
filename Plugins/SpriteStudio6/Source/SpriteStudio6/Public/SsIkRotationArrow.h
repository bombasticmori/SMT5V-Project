#pragma once
#include "CoreMinimal.h"
#include "SsIkRotationArrow.generated.h"

UENUM(BlueprintType)
namespace SsIkRotationArrow {
    enum Type {
        Arrowfree,
        Clockwise,
        Anticlockwise,
        Num,
        Unknown = 254,
    };
}

