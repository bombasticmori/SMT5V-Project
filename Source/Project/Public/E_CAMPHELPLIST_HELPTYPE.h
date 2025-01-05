#pragma once
#include "CoreMinimal.h"
#include "E_CAMPHELPLIST_HELPTYPE.generated.h"

UENUM(BlueprintType)
enum class E_CAMPHELPLIST_HELPTYPE : uint8 {
    CATEGORY_0,
    CATEGORY_1,
    CATEGORY_2,
    CATEGORY_3,
    CATEGORY_4,
    UNUSED_CATEGORY = 255,
};

