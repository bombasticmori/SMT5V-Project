#pragma once
#include "CoreMinimal.h"
#include "E_OPTION_SLOT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_OPTION_SLOT_TYPE : uint8 {
    E_OPTION_SLOT_TYPE_PANEL,
    E_OPTION_SLOT_TYPE_SELECT,
    E_OPTION_SLOT_TYPE_SLIDER,
    E_OPTION_SLOT_TYPE_KEYSELECT,
    E_OPTION_SLOT_TYPE_BTNICON,
};

