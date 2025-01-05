#pragma once
#include "CoreMinimal.h"
#include "E_BTL_SEQ.generated.h"

UENUM(BlueprintType)
enum class E_BTL_SEQ : uint8 {
    E_BTL_SEQ_IDLE,
    E_BTL_SEQ_INITIALIZE,
    E_BTL_SEQ_RUNNING,
    E_BTL_SEQ_TEST,
    E_BTL_SEQ_TEST_RUNNING,
};

