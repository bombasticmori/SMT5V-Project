#pragma once
#include "CoreMinimal.h"
#include "E_CAMPITEMLIST_CANSELTYPE.generated.h"

UENUM(BlueprintType)
enum class E_CAMPITEMLIST_CANSELTYPE : uint8 {
    NORMAL,
    ERROR_TYPE,
    PILLAR,
    ESTMA,
    RIBERAMA,
};

