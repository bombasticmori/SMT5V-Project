#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_LIB_SCREEN_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_SKILL_LIB_SCREEN_TYPE : uint8 {
    E_SKILL_LIB_SCREEN_TYPE_NONE,
    E_SKILL_LIB_SCREEN_TYPE_MENU,
    E_SKILL_LIB_SCREEN_TYPE_STATUS,
    E_SKILL_LIB_SCREEN_TYPE_END,
};

