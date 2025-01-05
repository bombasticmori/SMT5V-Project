#pragma once
#include "CoreMinimal.h"
#include "E_BTL_AI_STATE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_AI_STATE : uint8 {
    E_BTL_AI_STATE_NONE,
    E_BTL_AI_STATE_START,
    E_BTL_AI_STATE_FINISH,
};

