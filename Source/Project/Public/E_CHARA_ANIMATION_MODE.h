#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_ANIMATION_MODE.generated.h"

UENUM(BlueprintType)
enum class E_CHARA_ANIMATION_MODE : uint8 {
    DEFAULT,
    STATE_MACHINE,
    MONTAGE,
    EVENT_MOTION,
};

