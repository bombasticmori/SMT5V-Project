#pragma once
#include "CoreMinimal.h"
#include "E_NAHOBINO_ITEM_MOTION.generated.h"

UENUM(BlueprintType)
enum class E_NAHOBINO_ITEM_MOTION : uint8 {
    E_NAHOBINO_ITEM_MOTION_NONE,
    E_NAHOBINO_ITEM_MOTION_ATTACK,
    E_NAHOBINO_ITEM_MOTION_SUPPORT,
};

