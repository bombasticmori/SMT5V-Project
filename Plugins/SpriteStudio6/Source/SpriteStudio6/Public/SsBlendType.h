#pragma once
#include "CoreMinimal.h"
#include "SsBlendType.generated.h"

UENUM(BlueprintType)
namespace SsBlendType {
    enum Type {
        Mix,
        Mul,
        Add,
        Sub,
        MulAlpha,
        Screen,
        Exclusion,
        Invert,
        Effect,
        Mask,
        Num,
        Invalid = 254,
    };
}

