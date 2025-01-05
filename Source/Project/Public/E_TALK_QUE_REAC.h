#pragma once
#include "CoreMinimal.h"
#include "E_TALK_QUE_REAC.generated.h"

UENUM(BlueprintType)
enum class E_TALK_QUE_REAC : uint8 {
    QUE_REAC_INVALID,
    QUE_REAC_END_FAIL,
    QUE_REAC_END_NO_PRESS,
    QUE_REAC_ACCEPT,
    QUE_REAC_NEXT,
    QUE_REAC_LEAVE,
    QUE_REAC_ETURN,
    QUE_REAC_SCOUT_SUC,
    QUE_REAC_A_PART,
};

