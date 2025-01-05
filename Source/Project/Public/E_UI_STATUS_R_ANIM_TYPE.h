#pragma once
#include "CoreMinimal.h"
#include "E_UI_STATUS_R_ANIM_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_UI_STATUS_R_ANIM_TYPE : uint8 {
    E_UI_STATUS_R_ANIM_TYPE_NONE,
    E_UI_STATUS_R_ANIM_TYPE_SKILL_CURSOR,
    E_UI_STATUS_R_ANIM_TYPE_SKILL_IN,
    E_UI_STATUS_R_ANIM_TYPE_SKILL_GET_OUT,
};

