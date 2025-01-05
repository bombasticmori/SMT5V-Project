#pragma once
#include "CoreMinimal.h"
#include "E_BTL_EVT.generated.h"

UENUM(BlueprintType)
enum class E_BTL_EVT : uint8 {
    E_BTL_EVT_NONE,
    E_BTL_EVT_TRIG_ON,
    E_BTL_EVT_LOADING,
    E_BTL_EVT_READY,
    E_BTL_EVT_PLAYING,
    E_BTL_EVT_FINISHED,
};

