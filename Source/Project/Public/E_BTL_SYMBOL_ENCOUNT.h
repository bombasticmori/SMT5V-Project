#pragma once
#include "CoreMinimal.h"
#include "E_BTL_SYMBOL_ENCOUNT.generated.h"

UENUM(BlueprintType)
enum class E_BTL_SYMBOL_ENCOUNT : uint8 {
    E_BTL_SYMBOL_ENCOUNT_NORMAL,
    E_BTL_SYMBOL_ENCOUNT_PLAYER_ATTACK,
    E_BTL_SYMBOL_ENCOUNT_ENEMY_BACK,
};

