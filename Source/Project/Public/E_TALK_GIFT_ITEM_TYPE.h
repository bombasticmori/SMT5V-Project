#pragma once
#include "CoreMinimal.h"
#include "E_TALK_GIFT_ITEM_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_TALK_GIFT_ITEM_TYPE : uint8 {
    ITEM_NONE,
    ITEM_CURE,
    ITEM_ATTACK,
    ITEM_RARE,
};

