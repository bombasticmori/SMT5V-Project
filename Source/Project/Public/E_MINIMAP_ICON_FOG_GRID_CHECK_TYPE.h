#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_ICON_FOG_GRID_CHECK_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_MINIMAP_ICON_FOG_GRID_CHECK_TYPE : uint8 {
    None,
    FogGrid,
    SaveFlag,
};

