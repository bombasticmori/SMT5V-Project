#pragma once
#include "CoreMinimal.h"
#include "E_TALK_QUE_ADD_RESULT.generated.h"

UENUM(BlueprintType)
enum class E_TALK_QUE_ADD_RESULT : uint8 {
    QUE_ADD_RESULT_NONE,
    QUE_ADD_RESULT_ITEM_CURE,
    QUE_ADD_RESULT_ITEM_ATTACK,
    QUE_ADD_RESULT_ITEM_RARE,
    QUE_ADD_RESULT_MONEY,
};

