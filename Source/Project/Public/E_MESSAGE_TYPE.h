#pragma once
#include "CoreMinimal.h"
#include "E_MESSAGE_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_MESSAGE_TYPE : uint8 {
    E_MESSAGE_TYPE_NORMAL,
    E_MESSAGE_TYPE_SYSTEM,
};

