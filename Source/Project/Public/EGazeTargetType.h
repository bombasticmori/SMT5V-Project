#pragma once
#include "CoreMinimal.h"
#include "EGazeTargetType.generated.h"

UENUM(BlueprintType)
enum class EGazeTargetType : uint8 {
    Dummy,
    EnemyDevil,
    NPCDevil,
    NPCHuman,
    TreasureBox,
    VendingMachine,
    Miman,
    Magatsuka,
    Itsuduka,
};

