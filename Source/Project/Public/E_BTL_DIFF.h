#pragma once
#include "CoreMinimal.h"
#include "E_BTL_DIFF.generated.h"

UENUM(BlueprintType)
enum class E_BTL_DIFF : uint8 {
    E_DAMAGE_ENEMY,
    E_HIT_PLAEYER_ATTACK,
    E_DAMAGE_TAKE_ENEMY,
    E_HIT_ENEMY_ATTACK,
    E_ESCAPE_SUCCESS,
    E_PLAEYER_CRITICAL,
    E_HIT_BST_PLAYER,
    E_HIT_BST_ENEMY,
    E_HIT_DEATH_PLAYER,
    E_HIT_DEATH_ENEMY,
    E_PLAYER_FIRST,
};

