#pragma once
#include "CoreMinimal.h"
#include "E_FACILITY_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_FACILITY_TYPE : uint8 {
    E_FACILITY_SHOP,
    E_FACILITY_MIMAN,
    E_FACILITY_MIMAN_EXIT,
    E_FACILITY_MIMAN_HEAL_SPOT,
    E_FACILITY_MIMAN_EXCHANGE,
};

