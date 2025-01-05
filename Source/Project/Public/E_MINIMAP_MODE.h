#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_MODE.generated.h"

UENUM(BlueprintType)
enum class E_MINIMAP_MODE : uint8 {
    E_MINIMAP_MODE_NONE,
    E_MINIMAP_MODE_MINI,
    E_MINIMAP_MODE_ALL,
};

