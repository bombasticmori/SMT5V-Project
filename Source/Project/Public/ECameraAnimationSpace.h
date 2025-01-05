#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimationSpace.generated.h"

UENUM(BlueprintType)
namespace ECameraAnimationSpace {
    enum Type {
        ComponentSpace,
        WorldSpace,
    };
}

