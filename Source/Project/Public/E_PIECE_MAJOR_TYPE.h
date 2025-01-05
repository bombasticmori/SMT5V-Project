#pragma once
#include "CoreMinimal.h"
#include "E_PIECE_MAJOR_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_PIECE_MAJOR_TYPE : uint8 {
    E_PIECE_MAJOR_HAVE,
    E_PIECE_MAJOR_NOW,
    E_PIECE_MAJOR_INVALID,
};

