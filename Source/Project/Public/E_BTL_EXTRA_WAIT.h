#pragma once
#include "CoreMinimal.h"
#include "E_BTL_EXTRA_WAIT.generated.h"

UENUM(BlueprintType)
enum class E_BTL_EXTRA_WAIT : uint8 {
    E_BTL_EXTRA_WAIT_STAN,
    E_BTL_EXTRA_WAIT_SLEEP,
    E_BTL_EXTRA_WAIT_FREEZE,
    E_BTL_EXTRA_WAIT_STONE,
    E_BTL_EXTRA_WAIT_ESCAPE_FAILED,
    E_BTL_EXTRA_WAIT_MUD,
};

