#pragma once
#include "CoreMinimal.h"
#include "E_PARTNER_ID.generated.h"

UENUM(BlueprintType)
enum class E_PARTNER_ID : uint8 {
    E_PARTNER_ID_LAW,
    E_PARTNER_ID_CHAOS,
    E_PARTNER_ID_MAX UMETA(Hidden),
    E_PARTNER_ID_INVALID,
    E_PARTNER_ID_INVALID_MAX UMETA(Hidden),
};

