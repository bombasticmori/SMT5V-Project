#pragma once
#include "CoreMinimal.h"
#include "E_STATUS_FLAG.generated.h"

UENUM(BlueprintType)
enum class E_STATUS_FLAG : uint8 {
    E_STATUS_FLAG_NONE,
    E_STATUS_FLAG_ANIM_WAIT,
    E_STATUS_FLAG_DEVIL_MES,
    E_STATUS_FLAG_SKILL_SEL,
    E_STATUS_FLAG_SKILL_CHANGE,
    E_STATUS_FLAG_PARAM_SET,
};

