#pragma once
#include "CoreMinimal.h"
#include "E_PIECE_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_PIECE_TYPE : uint8 {
    E_PIECE_TYPE_ITEM,
    E_PIECE_TYPE_MAKKA,
    E_PIECE_TYPE_HP,
    E_PIECE_TYPE_MP,
    E_PIECE_TYPE_UNIT,
    E_PIECE_TYPE_GOD,
};

