#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_CHANGE_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_MINIMAP_CHANGE_TYPE : uint8 {
    MAP_MOVE,
    MAP_SELECT,
    RYUKETSU,
    RESET,
    OTHER,
    MODE_CHANGE,
    NEXT_AREA,
    AREA_MOVE,
    FOCUS_TARGET,
    GARDEN,
};

