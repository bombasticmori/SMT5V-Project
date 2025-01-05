#pragma once
#include "CoreMinimal.h"
#include "E_SUMMON_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_SUMMON_TYPE : uint8 {
    E_SUMMON_TYPE_EXCHANGE,
    E_SUMMON_TYPE_RETURN,
    E_SUMMON_TYPE_SUMMON,
};

