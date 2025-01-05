#pragma once
#include "CoreMinimal.h"
#include "E_MAP_SELECT_STEP.generated.h"

UENUM(BlueprintType)
enum class E_MAP_SELECT_STEP : uint8 {
    None,
    Parent,
    Child,
};

