#pragma once
#include "CoreMinimal.h"
#include "E_BTL_SIDE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_SIDE : uint8 {
    E_BTL_SIDE_PLAYER,
    E_BTL_SIDE_ENEMY,
    E_BTL_SIDE_MAX UMETA(Hidden),
    E_BTL_SIDE_NPC,
    E_BTL_SIDE_INVALID,
};

