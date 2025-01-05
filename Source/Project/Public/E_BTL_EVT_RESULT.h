#pragma once
#include "CoreMinimal.h"
#include "E_BTL_EVT_RESULT.generated.h"

UENUM(BlueprintType)
enum class E_BTL_EVT_RESULT : uint8 {
    E_BTL_EVT_RESULT_NONE,
    E_BTL_EVT_RESULT_CONTINUE,
    E_BTL_EVT_RESULT_GOTO_RESULT,
};

