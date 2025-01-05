#pragma once
#include "CoreMinimal.h"
#include "E_OPTION_MESSAGE_SPEED_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_OPTION_MESSAGE_SPEED_TYPE : uint8 {
    E_OPTION_SPEED_TYPE_STANDARD,
    E_OPTION_SPEED_TYPE_FAST,
    E_OPTION_SPEED_TYPE_SWIFT,
    E_OPTION_SPEED_TYPE_IMMEDIATE,
};

