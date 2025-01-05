#pragma once
#include "CoreMinimal.h"
#include "E_BTL_FINISHED_STATE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_FINISHED_STATE : uint8 {
    E_BTL_FINISHED_STATE_NORMAL,
    E_BTL_FINISHED_STATE_CONTINUE,
    E_BTL_FINISHED_STATE_TITLE,
};

