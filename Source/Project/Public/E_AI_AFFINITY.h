#pragma once
#include "CoreMinimal.h"
#include "E_AI_AFFINITY.generated.h"

UENUM(BlueprintType)
enum class E_AI_AFFINITY : uint8 {
    E_WEAK,
    E_NORMAL,
    E_UNKNOWN,
    E_RESIST,
    E_BLOCK,
};

