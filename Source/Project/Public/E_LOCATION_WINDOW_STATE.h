#pragma once
#include "CoreMinimal.h"
#include "E_LOCATION_WINDOW_STATE.generated.h"

UENUM(BlueprintType)
enum class E_LOCATION_WINDOW_STATE : uint8 {
    Invalid,
    Closed,
    Opening,
    Opened,
    Closing,
};

