#pragma once
#include "CoreMinimal.h"
#include "E_ENEMY_TARGET.generated.h"

UENUM(BlueprintType)
enum class E_ENEMY_TARGET : uint8 {
    E_ENEMY_TARGET_NORMAL,
    E_ENEMY_TARGET_ONLY,
    E_ENEMY_TARGET_HIDDEN,
};

