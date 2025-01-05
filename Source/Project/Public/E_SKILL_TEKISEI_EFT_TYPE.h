#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_TEKISEI_EFT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_SKILL_TEKISEI_EFT_TYPE : uint8 {
    E_SKILL_TEKISEI_EFT_NONE,
    E_SKILL_TEKISEI_EFT_DAMAGE,
    E_SKILL_TEKISEI_EFT_REC,
    E_SKILL_TEKISEI_EFT_MP,
    E_SKILL_TEKISEI_EFT_RATE,
};

