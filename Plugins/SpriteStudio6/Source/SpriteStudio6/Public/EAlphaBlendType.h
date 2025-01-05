#pragma once
#include "CoreMinimal.h"
#include "EAlphaBlendType.generated.h"

UENUM(BlueprintType)
enum class EAlphaBlendType : uint8 {
    Mix,
    Mul,
    Add,
    Sub,
    MulAlpha,
    Screen,
    Exclusion,
    Invert,
};

