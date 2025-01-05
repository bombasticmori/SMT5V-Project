#pragma once
#include "CoreMinimal.h"
#include "E_OPTION_CONTENT_FOV_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_OPTION_CONTENT_FOV_TYPE : uint8 {
    E_OPTION_CONTENT_FOV_TYPE_NARROW,
    E_OPTION_CONTENT_FOV_TYPE_STANDARD,
    E_OPTION_CONTENT_FOV_TYPE_WIDE,
};

