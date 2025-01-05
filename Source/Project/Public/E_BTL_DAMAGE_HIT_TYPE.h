#pragma once
#include "CoreMinimal.h"
#include "E_BTL_DAMAGE_HIT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_DAMAGE_HIT_TYPE : uint8 {
    E_BTL_DAMAGE_NORMAL,
    E_BTL_DAMAGE_CRITICAL,
    E_BTL_DAMAGE_WEAK,
    E_BTL_DAMAGE_TAISEI,
    E_BTL_DAMAGE_MISS,
    E_BTL_DAMAGE_DEATHHIT,
};

