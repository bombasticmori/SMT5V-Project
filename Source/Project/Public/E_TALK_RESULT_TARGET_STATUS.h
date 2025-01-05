#pragma once
#include "CoreMinimal.h"
#include "E_TALK_RESULT_TARGET_STATUS.generated.h"

UENUM(BlueprintType)
enum class E_TALK_RESULT_TARGET_STATUS : uint8 {
    TARGET_STATUS_NONE,
    TARGET_STATUS_SCOUT,
    TARGET_STATUS_LEAVE,
};

