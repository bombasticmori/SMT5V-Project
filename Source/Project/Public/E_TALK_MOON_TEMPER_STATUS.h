#pragma once
#include "CoreMinimal.h"
#include "E_TALK_MOON_TEMPER_STATUS.generated.h"

UENUM(BlueprintType)
enum class E_TALK_MOON_TEMPER_STATUS : uint8 {
    INVALID,
    NORMAL,
    GOOD,
    ENEMY_TURN,
    NO_TALK,
};

