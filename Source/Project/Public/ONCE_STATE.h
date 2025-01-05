#pragma once
#include "CoreMinimal.h"
#include "ONCE_STATE.generated.h"

UENUM(BlueprintType)
enum class ONCE_STATE : uint8 {
    E_NONE,
    E_RUN,
    E_END,
};

