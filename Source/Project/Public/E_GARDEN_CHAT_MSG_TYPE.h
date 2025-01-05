#pragma once
#include "CoreMinimal.h"
#include "E_GARDEN_CHAT_MSG_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_GARDEN_CHAT_MSG_TYPE : uint8 {
    E_GARDEN_CHAT_COND_NONE,
    E_GARDEN_CHAT_COND_GARDENAREA,
    E_GARDEN_CHAT_COND_PROGRESS,
    E_GARDEN_CHAT_COND_SPOT,
};

