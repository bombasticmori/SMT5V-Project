#pragma once
#include "CoreMinimal.h"
#include "E_LOCATION_WINDOW_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_LOCATION_WINDOW_TYPE : uint8 {
    None,
    Map,
    Facility,
    Automap,
    Largemap,
};

