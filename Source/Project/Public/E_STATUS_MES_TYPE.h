#pragma once
#include "CoreMinimal.h"
#include "E_STATUS_MES_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_STATUS_MES_TYPE : uint8 {
    E_STATUS_MES_TYPE_PARAM_SET_CHECK,
    E_STATUS_MES_TYPE_PARAM_CANCEL_CHECK,
};

