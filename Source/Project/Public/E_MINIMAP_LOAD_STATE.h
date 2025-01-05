#pragma once
#include "CoreMinimal.h"
#include "E_MINIMAP_LOAD_STATE.generated.h"

UENUM(BlueprintType)
enum class E_MINIMAP_LOAD_STATE : uint8 {
    NOT_LOADED,
    LOADED,
};

