#pragma once
#include "CoreMinimal.h"
#include "E_ITEM_KIND.generated.h"

UENUM(BlueprintType)
enum class E_ITEM_KIND : uint8 {
    E_ITEM_KIND_USE,
    E_ITEM_KIND_SKILL_GET,
    E_ITEM_KIND_UTSUSEMI,
    E_ITEM_KIND_RELIC,
    E_ITEM_KIND_IMPORTANT,
    E_ITEM_KIND_INVALID,
};

