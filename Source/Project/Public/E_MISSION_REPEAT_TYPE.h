#pragma once
#include "CoreMinimal.h"
#include "E_MISSION_REPEAT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_MISSION_REPEAT_TYPE : uint8 {
    E_NONE,
    E_DELIVERY,
    E_TIME_ATTACK,
};

