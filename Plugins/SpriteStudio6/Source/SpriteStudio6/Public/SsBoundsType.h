#pragma once
#include "CoreMinimal.h"
#include "SsBoundsType.generated.h"

UENUM(BlueprintType)
namespace SsBoundsType {
    enum Type {
        None,
        Quad,
        Aabb,
        Circle,
        CircleSmin,
        CircleSmax,
        Num,
        Invalid = 254,
    };
}

