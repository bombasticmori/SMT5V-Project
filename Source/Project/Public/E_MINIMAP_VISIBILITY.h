#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_VISIBILITY.generated.h"

UENUM(BlueprintType)
enum class E_MINIMAP_VISIBILITY : uint8 {
    INVISIBLE,
    VISIBLE,
    OUTER,
};

