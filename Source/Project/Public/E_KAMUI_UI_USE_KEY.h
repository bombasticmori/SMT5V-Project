#pragma once
#include "CoreMinimal.h"
#include "E_KAMUI_UI_USE_KEY.generated.h"

UENUM(BlueprintType)
enum class E_KAMUI_UI_USE_KEY : uint8 {
    NONE,
    ACTION,
    CANCEL,
    SORT,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    TAB_L,
    TAB_R,
};

