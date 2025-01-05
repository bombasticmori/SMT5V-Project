#pragma once
#include "CoreMinimal.h"
#include "E_GIFT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_GIFT_TYPE : uint8 {
    E_GIFT_TYPE_DUMMY,
    E_GIFT_TYPE_FIRE,
    E_GIFT_TYPE_COLD,
    E_GIFT_TYPE_ELECTRICITY,
    E_GIFT_TYPE_WIND,
    E_GIFT_TYPE_LIGHT,
    E_GIFT_TYPE_DARK,
    E_GIFT_TYPE_HEAL,
};

