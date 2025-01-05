#pragma once
#include "CoreMinimal.h"
#include "E_MISSION_INFO_HEADER_TEXT.generated.h"

UENUM(BlueprintType)
enum class E_MISSION_INFO_HEADER_TEXT : uint8 {
    Dummy,
    RewardItem,
    RewardMoney,
    ENUM_SIZE,
};

