#pragma once
#include "CoreMinimal.h"
#include "E_CAMP_QUEST_PROGRESS_STATE.generated.h"

UENUM(BlueprintType)
enum class E_CAMP_QUEST_PROGRESS_STATE : uint8 {
    IN_PROGRESS,
    REPORTABLE,
    COMPLETED,
};

