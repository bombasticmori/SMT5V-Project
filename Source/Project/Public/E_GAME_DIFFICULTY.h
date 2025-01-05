#pragma once
#include "CoreMinimal.h"
#include "E_GAME_DIFFICULTY.generated.h"

UENUM(BlueprintType)
enum class E_GAME_DIFFICULTY : uint8 {
    E_GAME_EASY,
    E_GAME_NORMAL,
    E_GAME_HARD,
    E_GAME_VERYHARD,
};

