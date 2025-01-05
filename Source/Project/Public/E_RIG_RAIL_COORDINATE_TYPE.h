#pragma once
#include "CoreMinimal.h"
#include "E_RIG_RAIL_COORDINATE_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_RIG_RAIL_COORDINATE_TYPE : uint8 {
    E_RIG_RAIL_COORDINATE_WORLD,
    E_RIG_RAIL_COORDINATE_LOCAL,
};

