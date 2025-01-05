#pragma once
#include "CoreMinimal.h"
#include "E_PARAM_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_PARAM_TYPE : uint8 {
    E_PARAM_TYPE_STR,
    E_PARAM_TYPE_VIT,
    E_PARAM_TYPE_MGI,
    E_PARAM_TYPE_AGI,
    E_PARAM_TYPE_LUC,
    E_PARAM_TYPE_LAST,
};

