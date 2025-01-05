#pragma once
#include "CoreMinimal.h"
#include "E_CAMPSKILLLIST_CANSELTYPE.generated.h"

UENUM(BlueprintType)
enum class E_CAMPSKILLLIST_CANSELTYPE : uint8 {
    NORMAL,
    ERROR_TYPE,
    ESTMA,
    RIBERAMA,
};

