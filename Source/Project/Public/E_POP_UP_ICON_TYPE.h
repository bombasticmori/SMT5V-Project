#pragma once
#include "CoreMinimal.h"
#include "E_POP_UP_ICON_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_POP_UP_ICON_TYPE : uint8 {
    NONE,
    ENEMY_ACTIVE,
    ENEMY_IDLE,
    NAVI,
};

