#pragma once
#include "CoreMinimal.h"
#include "E_SHOP_ITEM_SELECT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_SHOP_ITEM_SELECT_TYPE : uint8 {
    E_SHOP_ITEM_SELECT_NORMAL,
    E_SHOP_ITEM_SELECT_SELECT,
    E_SHOP_ITEM_SELECT_NOT,
};

