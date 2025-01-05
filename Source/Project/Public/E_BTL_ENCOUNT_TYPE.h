#pragma once
#include "CoreMinimal.h"
#include "E_BTL_ENCOUNT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_ENCOUNT_TYPE : uint8 {
    E_BTL_ENCOUNT_TYPE_DEFAULT,
    E_BTL_ENCOUNT_TYPE_EVT,
    E_BTL_ENCOUNT_TYPE_SUB,
    E_BTL_ENCOUNT_TYPE_MAOU,
};

