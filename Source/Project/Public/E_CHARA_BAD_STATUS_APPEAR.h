#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_BAD_STATUS_APPEAR.generated.h"

UENUM(BlueprintType)
enum class E_CHARA_BAD_STATUS_APPEAR : uint8 {
    E_APPEAR_ON_HIT,
    E_APPEAR_ON_LOOP,
    E_APPEAR_ON_CURE,
    E_APPEAR_ON_DAMAGE,
};

