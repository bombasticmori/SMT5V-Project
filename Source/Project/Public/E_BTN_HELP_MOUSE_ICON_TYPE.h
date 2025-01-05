#pragma once
#include "CoreMinimal.h"
#include "E_BTN_HELP_MOUSE_ICON_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BTN_HELP_MOUSE_ICON_TYPE : uint8 {
    RIGHT_MOUSE_BUTTON,
    LEFT_MOUSE_BUTTON,
    MIDDLE_MOUSE_BUTTON,
    THUMB_MOUSE_BUTTON_2,
    THUMB_MOUSE_BUTTON,
    NOT_MOUSE_BUTTON,
};

