#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_AREA_TABLE_OVERRIDE_TARGET.generated.h"

UENUM(BlueprintType)
enum class E_MINIMAP_AREA_TABLE_OVERRIDE_TARGET : uint8 {
    NONE,
    MinimapZoom,
    Footprint,
};

