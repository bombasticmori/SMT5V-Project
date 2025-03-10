#pragma once
#include "CoreMinimal.h"
#include "E_MISSION_INFO_TEXT.generated.h"

UENUM(BlueprintType)
enum class E_MISSION_INFO_TEXT : uint8 {
    E_MISSION_INFO_TEXT_NAME,
    E_MISSION_INFO_TEXT_CLIENT,
    E_MISSION_INFO_TEXT_REWARD,
    E_MISSION_INFO_TEXT_EXPLAIN,
    E_MISSION_INFO_TEXT_HELP,
    E_MISSION_INFO_TEXT_UPDATE_REPORT,
    E_MISSION_INFO_TEXT_UPDATE_COMPLETED,
    E_MISSION_INFO_TEXT_ENUM_SIZE,
};

