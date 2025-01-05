#pragma once
#include "CoreMinimal.h"
#include "E_SYSTEM_MENU_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_SYSTEM_MENU_TYPE : uint8 {
    E_SYSTEM_MENU_TYPE_TOP,
    E_SYSTEM_MENU_TYPE_SAVE,
    E_SYSTEM_MENU_TYPE_LOAD,
    E_SYSTEM_MENU_TYPE_DELETE,
    E_SYSTEM_MENU_TYPE_OPTION,
    E_SYSTEM_MENU_TYPE_BACK_TITLE,
};

