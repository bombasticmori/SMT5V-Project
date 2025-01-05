#pragma once
#include "CoreMinimal.h"
#include "E_JOIN_DLC_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_JOIN_DLC_TYPE : uint8 {
    ADDITIONAL_DIFFICULTY,
    CHEAT_MONEY,
    CHEAT_EXP,
    CHEAT_GLORY,
    MISSION_ARTEMIS,
    MISSION_CLEOPATRA,
    MISSION_MEPHISTO,
    MISSION_FIEND,
    JAPANESE_VOICE,
};

