#pragma once
#include "CoreMinimal.h"
#include "E_BTL_EXTEND_ACTION_STATE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_EXTEND_ACTION_STATE : uint8 {
    E_BTL_EXTEND_ACTION_STATE_NONE,
    E_BTL_EXTEND_ACTION_STATE_IDLE,
    E_BTL_EXTEND_ACTION_STATE_HIT,
};

