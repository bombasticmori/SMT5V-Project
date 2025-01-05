#pragma once
#include "CoreMinimal.h"
#include "EFireActorEventsAtPosition.generated.h"

UENUM(BlueprintType)
enum class EFireActorEventsAtPosition : uint8 {
    AtStartOfEvaluation,
    AtEndOfEvaluation,
    AfterSpawn,
};

