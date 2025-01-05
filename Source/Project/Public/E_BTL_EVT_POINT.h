#pragma once
#include "CoreMinimal.h"
#include "E_BTL_EVT_POINT.generated.h"

UENUM(BlueprintType)
enum class E_BTL_EVT_POINT : uint8 {
    BATTLE_START,
    DAMAGED,
    PLAYER_TURN_START,
    ENEMY_TURN_START,
    BATTLE_END,
    GAMEOVER,
    PLAYER_TURN_END,
    ENEMY_TURN_END,
};

