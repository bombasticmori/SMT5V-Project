#pragma once
#include "CoreMinimal.h"
#include "E_SORT_WINDOW_SORT_ORDER.generated.h"

UENUM(BlueprintType)
enum class E_SORT_WINDOW_SORT_ORDER : uint8 {
    NOT_APPLY,
    ASCENDING,
    DESCENDING,
};

