#pragma once
#include "CoreMinimal.h"
#include "E_ENEMY_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_ENEMY_TYPE : uint8 {
    E_NORMAL,
    E_SPECIAL,
    E_BOSS,
    E_MAGATSUHI,
};

