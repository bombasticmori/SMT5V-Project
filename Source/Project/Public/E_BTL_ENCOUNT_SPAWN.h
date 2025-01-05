#pragma once
#include "CoreMinimal.h"
#include "E_BTL_ENCOUNT_SPAWN.generated.h"

UENUM(BlueprintType)
enum class E_BTL_ENCOUNT_SPAWN : uint8 {
    E_BTL_ENCOUNT_SPAWN_DEFAULT,
    E_BTL_ENCOUNT_SPAWN_NO_ENEMY,
    E_BTL_ENCOUNT_SPAWN_NO_SPAWN,
};

