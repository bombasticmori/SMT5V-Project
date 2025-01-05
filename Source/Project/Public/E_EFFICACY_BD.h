#pragma once
#include "CoreMinimal.h"
#include "E_EFFICACY_BD.generated.h"

UENUM(BlueprintType)
enum class E_EFFICACY_BD : uint8 {
    E_EFFICACY_BD_ATTACK,
    E_EFFICACY_BD_MAGIC,
    E_EFFICACY_BD_DEFENCE,
    E_EFFICACY_BD_SPEED,
};

