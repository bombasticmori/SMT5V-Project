#pragma once
#include "CoreMinimal.h"
#include "E_EVT_ENCOUNT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_EVT_ENCOUNT_TYPE : uint8 {
    E_EVT_ENCOUNT_DEFAULT,
    E_EVT_ENCOUNT_SUB,
    E_EVT_ENCOUNT_MAOU,
    E_EVT_ENCOUNT_ROOM_BOSS,
};

