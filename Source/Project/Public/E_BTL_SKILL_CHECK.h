#pragma once
#include "CoreMinimal.h"
#include "E_BTL_SKILL_CHECK.generated.h"

UENUM(BlueprintType)
enum class E_BTL_SKILL_CHECK : uint8 {
    E_HP_CURE,
    E_MP_CURE,
    E_BST_CURE,
    E_RECOME,
    E_KAJYANDA,
    E_CHARGE,
    E_KARN,
    E_BST,
    E_ANALYZE,
    E_DAMAGE_CUT,
    E_PROVOKE,
    E_AID_DELETE,
    E_ADD_GAUGE,
    E_PREV_TURN_AVOID,
    E_PASS,
    E_PRESS_ICON,
};

