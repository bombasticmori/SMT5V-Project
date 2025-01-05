#pragma once
#include "CoreMinimal.h"
#include "E_BTL_TALK_RET.generated.h"

UENUM(BlueprintType)
enum class E_BTL_TALK_RET : uint8 {
    E_BTL_TALK_RET_NONE,
    E_BTL_TALK_RET_CONTINUE,
    E_BTL_TALK_RET_E_ESCAPE,
    E_BTL_TALK_RET_P_ESCAPE,
};

