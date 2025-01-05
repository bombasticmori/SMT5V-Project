#pragma once
#include "CoreMinimal.h"
#include "EMythProcessType.generated.h"

UENUM(BlueprintType)
enum class EMythProcessType : uint8 {
    None,
    Start,
    Item,
    End,
    EnemyTurn,
};

