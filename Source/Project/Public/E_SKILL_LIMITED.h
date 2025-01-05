#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_LIMITED.generated.h"

UENUM(BlueprintType)
enum class E_SKILL_LIMITED : uint8 {
    E_SKILL_LIMITED_ALL,
    E_SKILL_LIMITED_WEAPON,
    E_SKILL_LIMITED_PHYSICAL,
    E_SKILL_LIMITED_NEEDLE,
    E_SKILL_LIMITED_BITE,
    E_SKILL_LIMITED_CLAW,
    E_SKILL_LIMITED_MAGIC,
};

