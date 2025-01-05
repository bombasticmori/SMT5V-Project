#pragma once
#include "CoreMinimal.h"
#include "E_GARDEN_TALK_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_GARDEN_TALK_TYPE : uint8 {
    E_TRUST,
    E_POWERUP,
    E_ITEM,
    E_QUEST,
};

