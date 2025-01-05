#pragma once
#include "CoreMinimal.h"
#include "E_UI_FADE_STATE.generated.h"

UENUM(BlueprintType)
enum class E_UI_FADE_STATE : uint8 {
    E_UI_FADE_STATE_NONE,
    E_UI_FADE_STATE_OUT,
    E_UI_FADE_STATE_IN,
    E_UI_FADE_STATE_FADE,
};

