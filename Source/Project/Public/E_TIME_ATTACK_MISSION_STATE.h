#pragma once
#include "CoreMinimal.h"
#include "E_TIME_ATTACK_MISSION_STATE.generated.h"

UENUM(BlueprintType)
enum class E_TIME_ATTACK_MISSION_STATE : uint8 {
    E_NONE,
    E_IN_TIME_ATTACK,
    E_AFTER_TIME_ATTACK_BEFORE_INFO,
    E_AFTER_TIME_ATTACK_AFTER_INFO,
    E_REACHED_GOAL,
};

