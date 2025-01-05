#pragma once
#include "CoreMinimal.h"
#include "E_BTL_CYCLE_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_CYCLE_TYPE : uint8 {
    E_BTL_CYCLE_AID,
    E_BTL_CYCLE_MEGAMI,
    E_BTL_CYCLE_MOON_AGE,
    E_BTL_CYCLE_SLIP_DAMAGE,
};

