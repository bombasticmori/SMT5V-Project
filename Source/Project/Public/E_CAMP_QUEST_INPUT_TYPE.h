#pragma once
#include "CoreMinimal.h"
#include "E_CAMP_QUEST_INPUT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_CAMP_QUEST_INPUT_TYPE : uint8 {
    NONE,
    TRIGGER,
    REPEAT,
};

