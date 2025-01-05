#pragma once
#include "CoreMinimal.h"
#include "E_CATEGORY_UI_STATE.generated.h"

UENUM(BlueprintType)
enum class E_CATEGORY_UI_STATE : uint8 {
    NOT_ACTIVE,
    FAME_IN,
    FRAME_OUT,
    KEY_WAITING,
    SLIDE,
};

