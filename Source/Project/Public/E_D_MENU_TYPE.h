#pragma once
#include "CoreMinimal.h"
#include "E_D_MENU_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_D_MENU_TYPE : uint8 {
    E_D_MENU_TYPE_NONE,
    E_D_MENU_TYPE_FUNC_OBJ,
    E_D_MENU_TYPE_CHECK_BOX,
    E_D_MENU_TYPE_JUMP_PAGE,
    E_D_MENU_TYPE_TEXT,
    E_D_MENU_TYPE_PARAM,
    E_D_MENU_TYPE_PULL_DOWN,
    E_D_MENU_TYPE_NAME_CHANGE,
};

