#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_AURA_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_CHARA_AURA_TYPE : uint8 {
    AURA_NONE,
    AURA_CHARGE,
    AURA_VIGILANCE,
    AURA_KAISHIN,
    AURA_BUNSHIN,
    MAX,
};

