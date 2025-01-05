#pragma once
#include "CoreMinimal.h"
#include "E_AI_HOJO_CHECK_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_AI_HOJO_CHECK_TYPE : uint8 {
    Invalid,
    Up,
    Down,
    Block,
    EraseKja,
    EraseNda,
    MagicDonum,
};

