#pragma once
#include "CoreMinimal.h"
#include "E_WIDGET_TICK_TASK_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_WIDGET_TICK_TASK_TYPE : uint8 {
    E_WIDGET_TICK_TASK_TYPE_ANIM,
    E_WIDGET_TICK_TASK_TYPE_HOLD_KEY,
};

