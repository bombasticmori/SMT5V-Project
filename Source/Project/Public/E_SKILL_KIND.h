#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_KIND.generated.h"

UENUM(BlueprintType)
enum class E_SKILL_KIND : uint8 {
    E_SKILL_KIND_INVALID,
    E_SKILL_KIND_NORMAL,
    E_SKILL_KIND_AUTO,
};

