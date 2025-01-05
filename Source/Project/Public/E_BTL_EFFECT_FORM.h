#pragma once
#include "CoreMinimal.h"
#include "E_BTL_EFFECT_FORM.generated.h"

UENUM(BlueprintType)
enum class E_BTL_EFFECT_FORM : uint8 {
    E_BTL_EFFECT_FORM_NORMAL,
    E_BTL_EFFECT_FORM_BEAM,
    E_BTL_EFFECT_FORM_BALL,
    E_BTL_EFFECT_FORM_ABSORB,
    E_BTL_EFFECT_FORM_ZIGZAG,
    E_BTL_EFFECT_FORM_DIRECTIONAL,
};

