#pragma once
#include "CoreMinimal.h"
#include "E_ABILITYNAME_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_ABILITYNAME_TYPE : uint8 {
    E_ABILITYNAME_MAXHP,
    E_ABILITYNAME_MAXMP,
    E_ABILITYNAME_STR,
    E_ABILITYNAME_VIT,
    E_ABILITYNAME_MGI,
    E_ABILITYNAME_AGI,
    E_ABILITYNAME_LUC,
};

