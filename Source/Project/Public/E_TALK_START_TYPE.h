#pragma once
#include "CoreMinimal.h"
#include "E_TALK_START_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_TALK_START_TYPE : uint8 {
    E_TALK_START_SCOUT,
    E_TALK_START_BEGLIFE,
    E_TALK_START_MERCY,
    E_TALK_START_INTERRUPT,
};

