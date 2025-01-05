#pragma once
#include "CoreMinimal.h"
#include "E_NKM_INIT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_NKM_INIT_TYPE : uint8 {
    E_NKM_INIT_TYPE_FIRST_INIT,
    E_NKM_INIT_TYPE_NKM_BOOK,
    E_NKM_INIT_TYPE_CLEAR,
};

