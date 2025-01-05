#pragma once
#include "CoreMinimal.h"
#include "E_SaveExistsResult.generated.h"

UENUM(BlueprintType)
enum class E_SaveExistsResult : uint8 {
    E_OK,
    E_DoesNotExist,
    E_Corrupt,
    E_UnspecifiedError,
};

