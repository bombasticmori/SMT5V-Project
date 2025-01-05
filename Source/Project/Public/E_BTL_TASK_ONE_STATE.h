#pragma once
#include "CoreMinimal.h"
#include "E_BTL_TASK_ONE_STATE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_TASK_ONE_STATE : uint8 {
    E_BTL_TASK_ONE_STATE_WAIT,
    E_BTL_TASK_ONE_STATE_RUN,
    E_BTL_TASK_ONE_STATE_FINISH,
};

