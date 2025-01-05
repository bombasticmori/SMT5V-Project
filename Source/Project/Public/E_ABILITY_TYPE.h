#pragma once
#include "CoreMinimal.h"
#include "E_ABILITY_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_ABILITY_TYPE : uint8 {
    E_ABILITY_STR,
    E_ABILITY_VIT,
    E_ABILITY_MGI,
    E_ABILITY_AGI,
    E_ABILITY_LUC,
};

