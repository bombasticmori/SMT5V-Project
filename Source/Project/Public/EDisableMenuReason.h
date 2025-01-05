#pragma once
#include "CoreMinimal.h"
#include "EDisableMenuReason.generated.h"

UENUM(BlueprintType)
enum class EDisableMenuReason : uint8 {
    Invalid,
    Sword,
    Air,
    GimmickWind,
    Damage,
};

