#pragma once
#include "CoreMinimal.h"
#include "E_BTL_TARGET_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_TARGET_TYPE : uint8 {
    E_BTL_TARGET_ONE,
    E_BTL_TARGET_GROUP,
    E_BTL_TARGET_ALL,
};

