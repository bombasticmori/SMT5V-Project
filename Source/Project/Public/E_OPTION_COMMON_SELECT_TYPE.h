#pragma once
#include "CoreMinimal.h"
#include "E_OPTION_COMMON_SELECT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_OPTION_COMMON_SELECT_TYPE : uint8 {
    E_OPTION_COMMON_SELECT_TYPE_DO,
    E_OPTION_COMMON_SELECT_TYPE_DONOT,
    E_OPTION_COMMON_SELECT_TYPE_AUTO,
};

