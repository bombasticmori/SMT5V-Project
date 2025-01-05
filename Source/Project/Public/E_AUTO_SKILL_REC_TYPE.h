#pragma once
#include "CoreMinimal.h"
#include "E_AUTO_SKILL_REC_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_AUTO_SKILL_REC_TYPE : uint8 {
    E_AUTO_SKILL_REC_NONE,
    E_AUTO_SKILL_REC_HP,
    E_AUTO_SKILL_REC_MP,
    E_AUTO_SKILL_REC_FULL,
    E_AUTO_SKILL_REC_HP_S,
    E_AUTO_SKILL_REC_MP_S,
};

