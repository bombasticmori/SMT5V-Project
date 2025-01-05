#pragma once
#include "CoreMinimal.h"
#include "E_BTN_HELP_UI_STATE.generated.h"

UENUM(BlueprintType)
enum class E_BTN_HELP_UI_STATE : uint8 {
    NOT_ACTIVE,
    FRAME_IN,
    ACTIVE,
    FRAME_OUT,
    FRAME_OUT_CHANGE,
};

