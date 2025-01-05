#pragma once
#include "CoreMinimal.h"
#include "E_BTL_WEAPON_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_WEAPON_TYPE : uint8 {
    E_BTL_WEAPON_NON,
    E_BTL_WEAPON_SWORD,
    E_BTL_WEAPON_GUN,
};

