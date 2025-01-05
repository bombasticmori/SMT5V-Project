#pragma once
#include "CoreMinimal.h"
#include "E_SYS_INFO_ANIM.generated.h"

UENUM(BlueprintType)
enum class E_SYS_INFO_ANIM : uint8 {
    E_SYS_INFO_ANIM_NONE,
    E_SYS_INFO_ANIM_IN,
    E_SYS_INFO_ANIM_WAIT,
    E_SYS_INFO_ANIM_OUT,
};

