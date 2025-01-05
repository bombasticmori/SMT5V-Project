#pragma once
#include "CoreMinimal.h"
#include "EColorBlendType.generated.h"

UENUM(BlueprintType)
enum class EColorBlendType : uint8 {
    Invalid = 254,
    Mix = 0,
    Mul,
    Add,
    Sub,
    Effect = 8,
};

