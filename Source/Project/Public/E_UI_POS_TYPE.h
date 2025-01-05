#pragma once
#include "CoreMinimal.h"
#include "E_UI_POS_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_UI_POS_TYPE : uint8 {
    E_UI_POS_TYPE_LEFT,
    E_UI_POS_TYPE_CENTER,
    E_UI_POS_TYPE_RIGHT,
    E_UI_POS_TYPE_UP,
    E_UI_POS_TYPE_DOWN,
};

