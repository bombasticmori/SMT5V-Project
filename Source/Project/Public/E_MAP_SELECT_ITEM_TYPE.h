#pragma once
#include "CoreMinimal.h"
#include "E_MAP_SELECT_ITEM_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_MAP_SELECT_ITEM_TYPE : uint8 {
    None,
    Map,
    Parent,
    Child,
};

