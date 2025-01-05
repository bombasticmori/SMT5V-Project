#pragma once
#include "CoreMinimal.h"
#include "E_STATUS_SKILL_LIST_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_STATUS_SKILL_LIST_TYPE : uint8 {
    E_STATUS_SKILL_LIST_TYPE_NORMAL,
    E_STATUS_SKILL_LIST_TYPE_AUTO,
    E_STATUS_SKILL_LIST_TYPE_NEXT,
};

