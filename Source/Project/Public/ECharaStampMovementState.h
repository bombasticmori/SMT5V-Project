#pragma once
#include "CoreMinimal.h"
#include "ECharaStampMovementState.generated.h"

UENUM(BlueprintType)
enum class ECharaStampMovementState : uint8 {
    NotLanding,
    Walk,
    Run,
    Dash,
};

