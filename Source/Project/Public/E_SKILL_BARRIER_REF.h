#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_BARRIER_REF.generated.h"

UENUM(BlueprintType)
enum class E_SKILL_BARRIER_REF : uint8 {
    E_SKILL_BARRIER_REF_NONE,
    E_SKILL_BARRIER_REF_RESIST,
    E_SKILL_BARRIER_REF_REFLEX,
    E_SKILL_BARRIER_REF_ABSORB,
    E_SKILL_BARRIER_REF_BLOCK,
};

