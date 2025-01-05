#pragma once
#include "CoreMinimal.h"
#include "E_BTL_AI_AREA.generated.h"

UENUM(BlueprintType)
enum class E_BTL_AI_AREA : uint8 {
    E_BTL_AI_AREA_ONE,
    E_BTL_AI_AREA_GROUP,
    E_BTL_AI_AREA_ALL,
    E_BTL_AI_AREA_SELF,
};

