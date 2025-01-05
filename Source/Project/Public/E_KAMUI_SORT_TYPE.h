#pragma once
#include "CoreMinimal.h"
#include "E_KAMUI_SORT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_KAMUI_SORT_TYPE : uint8 {
    TYPE,
    COST,
    NOT_LEARNING,
    ENABLE_LEARNING,
    NEW,
};

