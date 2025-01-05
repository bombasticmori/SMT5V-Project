#pragma once
#include "CoreMinimal.h"
#include "E_GAME_START_MODE.generated.h"

UENUM(BlueprintType)
enum class E_GAME_START_MODE : uint8 {
    E_GAME_START_MODE_NEW_GAME,
    E_GAME_START_MODE_RENEWAL,
    E_GAME_START_MODE_REINCARNATION,
    E_GAME_START_MODE_CREATION,
};

