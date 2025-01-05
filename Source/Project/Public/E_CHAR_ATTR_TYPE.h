#pragma once
#include "CoreMinimal.h"
#include "E_CHAR_ATTR_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_CHAR_ATTR_TYPE : uint8 {
    E_CHAR_ATTR_TYPE_NONE,
    E_CHAR_ATTR_TYPE_NEUTRAL,
    E_CHAR_ATTR_TYPE_LIGHT,
    E_CHAR_ATTR_TYPE_DARK,
    E_CHAR_ATTR_TYPE_LAW,
    E_CHAR_ATTR_TYPE_CHAOS,
};

