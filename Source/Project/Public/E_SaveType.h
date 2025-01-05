#pragma once
#include "CoreMinimal.h"
#include "E_SaveType.generated.h"

UENUM(BlueprintType)
enum class E_SaveType : uint8 {
    E_SaveTypeGame,
    E_SaveTypeAuto,
    E_SaveTypeSystem,
    E_SaveTypeSystemLocal,
};

