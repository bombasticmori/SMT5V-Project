#pragma once
#include "CoreMinimal.h"
#include "E_TUTORIAL_WINDOW_SCROLL_INPUT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_TUTORIAL_WINDOW_SCROLL_INPUT_TYPE : uint8 {
    UP,
    DOWN,
    TOP,
    BOTTOM,
    MAX,
};

