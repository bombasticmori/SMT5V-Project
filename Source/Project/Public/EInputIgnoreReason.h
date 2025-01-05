#pragma once
#include "CoreMinimal.h"
#include "EInputIgnoreReason.generated.h"

UENUM(BlueprintType)
enum class EInputIgnoreReason : uint8 {
    Battle,
    Event,
    MapAction,
    MapGimmick,
    MapPause,
};

