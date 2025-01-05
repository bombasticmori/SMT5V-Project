#pragma once
#include "CoreMinimal.h"
#include "E_INPUT_TYPE.generated.h"

UENUM(BlueprintType)
enum E_INPUT_TYPE {
    E_INPUT_TYPE_HOLD,
    E_INPUT_TYPE_TRIGGER,
    E_INPUT_TYPE_RELEASE,
    E_INPUT_TYPE_REPEAT,
};

