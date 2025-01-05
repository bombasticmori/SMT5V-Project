#pragma once
#include "CoreMinimal.h"
#include "E_STATUS_UI_VIEW_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_STATUS_UI_VIEW_TYPE : uint8 {
    E_STATUS_UI_VIEW_TYPE_NORMAL,
    E_STATUS_UI_VIEW_TYPE_TONE_DOWN,
    E_STATUS_UI_VIEW_TYPE_TONE_UP,
};

