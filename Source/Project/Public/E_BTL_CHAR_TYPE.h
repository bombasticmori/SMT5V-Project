#pragma once
#include "CoreMinimal.h"
#include "E_BTL_CHAR_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_CHAR_TYPE : uint8 {
    E_BTL_CHAR_EMPTY,
    E_BTL_CHAR_HERO,
    E_BTL_CHAR_NKM,
    E_BTL_CHAR_ENEMY,
    E_BTL_CHAR_NPC,
    E_BTL_CHAR_PARTNER,
    E_BTL_CHAR_UNION_HERO,
    E_BTL_CHAR_BUDDY,
    E_BTL_CHAR_BOY,
    E_BTL_CHAR_AOGAMI,
    E_BTL_CHAR_HAYATARO,
};

