#pragma once
#include "CoreMinimal.h"
#include "ESystemSE.generated.h"

UENUM(BlueprintType)
enum class ESystemSE : uint8 {
    Cursor,
    Decide,
    Cancel,
    Error,
    ActionWindowOpen,
    ActionWindowClose,
    ActionWindowDecide,
    MessageSkip,
    BattleCursor,
    BattleCursor2,
    BattleDecide,
    BattleDecide2,
    BattleCancel,
};

