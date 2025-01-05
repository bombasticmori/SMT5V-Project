#pragma once
#include "CoreMinimal.h"
#include "E_CAMP_QUEST_USE_KEY.generated.h"

UENUM(BlueprintType)
enum class E_CAMP_QUEST_USE_KEY : uint8 {
    NONE,
    CANCEL,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    TAB_L,
    TAB_R,
    RS_UP,
    RS_DOWN,
    MAP,
    PURPOSE,
};

