#pragma once
#include "CoreMinimal.h"
#include "E_BTL_NUMEFF.generated.h"

UENUM(BlueprintType)
enum class E_BTL_NUMEFF : uint8 {
    E_BTL_NUMEFF_HP_DAMAGE,
    E_BTL_NUMEFF_MP_DAMAGE,
    E_BTL_NUMEFF_HP_CURE,
    E_BTL_NUMEFF_MP_CURE,
    E_BTL_NUMEFF_HPMP_DAMAGE,
    E_BTL_NUMEFF_HPMP_CURE,
};

