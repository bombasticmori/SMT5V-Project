#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_ACTION_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_CHARA_ACTION_TYPE : uint8 {
    DEATH,
    RUN_TO_UNIT,
    BACK_STEP,
    KNOCK_BACK,
    CHANGE_STATUS,
    REVIVE,
    FUSION_PREPARE,
    SUMMON,
    RETURN,
    FADE,
    SPAWN,
    RAPID_SUMMON,
    RAPID_RETURN,
    BATTLE_SUMMON,
    MAX,
};

