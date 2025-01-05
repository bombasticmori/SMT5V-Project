#pragma once
#include "CoreMinimal.h"
#include "E_UNITE_NKM_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_UNITE_NKM_TYPE : uint8 {
    E_UNITE_NKM_TYPE_NONE,
    E_UNITE_NKM_TYPE_PARTY,
    E_UNITE_NKM_TYPE_ORIGINAL,
    E_UNITE_NKM_TYPE_CUSTOM,
    E_UNITE_NKM_TYPE_UTSUSEMI,
};

