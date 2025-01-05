#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_REC_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_SKILL_REC_TYPE : uint8 {
    E_SKILL_REC_FULL,
    E_SKILL_REC_FIX_RATE,
    E_SKILL_REC_NORMAL,
};

