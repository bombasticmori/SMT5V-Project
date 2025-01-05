#pragma once
#include "CoreMinimal.h"
#include "E_MAP_OBJ_BATTLE_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_MAP_OBJ_BATTLE_TYPE : uint8 {
    E_MAP_OBJ_BATTLE_TYPE_NO_OBJ,
    E_MAP_OBJ_BATTLE_TYPE_NOTHING,
    E_MAP_OBJ_BATTLE_TYPE_HIDDEN,
    E_MAP_OBJ_BATTLE_TYPE_DITHER,
};

