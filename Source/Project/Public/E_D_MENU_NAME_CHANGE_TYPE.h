#pragma once
#include "CoreMinimal.h"
#include "E_D_MENU_NAME_CHANGE_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_D_MENU_NAME_CHANGE_TYPE : uint8 {
    E_NAME_CHANGE_TYPE_NONE,
    E_NAME_CHANGE_TYPE_SKILL,
    E_NAME_CHANGE_TYPE_ITEM,
    E_NAME_CHANGE_TYPE_DEVIL,
    E_NAME_CHANGE_TYPE_CHARA,
    E_NAME_CHANGE_TYPE_SELF,
};

