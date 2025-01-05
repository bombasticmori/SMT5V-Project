#pragma once
#include "CoreMinimal.h"
#include "EGCPriority.generated.h"

UENUM(BlueprintType)
enum class EGCPriority : uint8 {
    Default,
    IfDontAfford,
    ForceFullPurge,
};

