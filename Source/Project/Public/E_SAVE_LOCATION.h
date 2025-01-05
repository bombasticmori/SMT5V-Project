#pragma once
#include "CoreMinimal.h"
#include "E_SAVE_LOCATION.generated.h"

UENUM(BlueprintType)
enum class E_SAVE_LOCATION : uint8 {
    Default,
    m083Shinagawa,
    m030gijidou,
    CampSave,
    FieldSave,
    RyuketsuSave,
    e2140dormitory,
};

