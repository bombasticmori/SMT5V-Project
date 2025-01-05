#pragma once
#include "CoreMinimal.h"
#include "EMythTalkerType.generated.h"

UENUM(BlueprintType)
enum class EMythTalkerType : uint8 {
    System,
    Friend,
    Enemy,
};

