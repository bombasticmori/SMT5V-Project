#pragma once
#include "CoreMinimal.h"
#include "E_BTL_ACT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_ACT_TYPE : uint8 {
    E_BTL_ACT_TYPE_NORMAL,
    E_BTL_ACT_TYPE_CONFUSE,
    E_BTL_ACT_TYPE_CHARM,
    E_BTL_ACT_TYPE_BUDDY,
    E_BTL_ACT_TYPE_COUNTER,
    E_BTL_ACT_TYPE_PARTNER,
    E_BTL_ACT_TYPE_DEADSCRIPT,
    E_BTL_ACT_TYPE_WEAKDMG_AID,
};

