#pragma once
#include "CoreMinimal.h"
#include "E_BTL_ATTR.generated.h"

UENUM(BlueprintType)
enum class E_BTL_ATTR : uint8 {
    E_BTL_LOW,
    E_BTL_NEUTRAL,
    E_BTL_CHAOS,
    E_BTL_ATTR_MAX UMETA(Hidden),
};

