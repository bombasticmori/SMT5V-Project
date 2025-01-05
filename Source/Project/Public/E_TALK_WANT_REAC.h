#pragma once
#include "CoreMinimal.h"
#include "E_TALK_WANT_REAC.generated.h"

UENUM(BlueprintType)
enum class E_TALK_WANT_REAC : uint8 {
    WANT_REAC_INVALID,
    WANT_REAC_SUC,
    WANT_REAC_NEXT,
    WANT_REAC_END_USE_PRESS,
    WANT_REAC_LEAVE,
    WANT_REAC_ENEMY_TURN,
};

