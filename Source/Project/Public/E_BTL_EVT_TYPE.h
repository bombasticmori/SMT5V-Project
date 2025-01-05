#pragma once
#include "CoreMinimal.h"
#include "E_BTL_EVT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_EVT_TYPE : uint8 {
    E_BTL_EVT_TYPE_NONE,
    E_BTL_EVT_TYPE_SEAMLESS,
    E_BTL_EVT_TYPE_FADE,
};

