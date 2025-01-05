#pragma once
#include "CoreMinimal.h"
#include "E_MISSION_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_MISSION_TYPE : uint8 {
    E_MISSION_TYPE_NONE,
    E_MISSION_TYPE_HUNT,
    E_MISSION_TYPE_DELIVERY,
    E_MISSION_TYPE_NAKAMA,
    E_MISSION_TYPE_TRAVEL,
    E_MISSION_TYPE_RECORD,
};

