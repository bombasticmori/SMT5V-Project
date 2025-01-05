#pragma once
#include "CoreMinimal.h"
#include "eDebugFlag.generated.h"

UENUM(BlueprintType)
enum class eDebugFlag : uint8 {
    None,
    DebugDraw,
    EventHitOff,
    EventViewerMode,
    EncountHitOff,
    LevelStatusLog,
    LogTextFlagOn,
    TemporaryTest1,
    TemporaryTest2,
    TemporaryTest3,
};

