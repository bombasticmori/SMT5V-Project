#pragma once
#include "CoreMinimal.h"
#include "E_TALK_WANT_KIND.generated.h"

UENUM(BlueprintType)
enum class E_TALK_WANT_KIND : uint8 {
    WANT_NONE,
    WANT_ITEM,
    WANT_MONEY,
    WANT_HP,
    WANT_MP,
    WANT_MASEKI,
    WANT_MONEY_DEAL,
};

