#pragma once
#include "CoreMinimal.h"
#include "E_CATEGORY_PATTERN.generated.h"

UENUM(BlueprintType)
enum class E_CATEGORY_PATTERN : uint8 {
    NONE,
    SHOP_BUY_MASK,
    SHOP_BUY,
    SHOP_SELL,
    ITEM,
    QUEST,
    ANALYZE,
    DEVIL_BOOK,
    DEVIL_WRITE,
    KAMUI,
    OPTION,
    HELP,
    OPTION_PC,
};

