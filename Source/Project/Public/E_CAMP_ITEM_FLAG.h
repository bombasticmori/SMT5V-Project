#pragma once
#include "CoreMinimal.h"
#include "E_CAMP_ITEM_FLAG.generated.h"

UENUM(BlueprintType)
enum class E_CAMP_ITEM_FLAG : uint8 {
    E_CAMP_ITEM_FLAG_NONE,
    E_CAMP_ITEM_FLAG_SEL_ITEM,
    E_CAMP_ITEM_FLAG_SEL_PARTY,
};

