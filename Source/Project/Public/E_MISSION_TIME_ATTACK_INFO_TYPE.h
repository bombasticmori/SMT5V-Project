#pragma once
#include "CoreMinimal.h"
#include "E_MISSION_TIME_ATTACK_INFO_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_MISSION_TIME_ATTACK_INFO_TYPE : uint8 {
    E_NONE,
    E_REMAIN,
    E_REPORT,
    E_REPORT_FAIL,
};

