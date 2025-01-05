#pragma once
#include "CoreMinimal.h"
#include "E_CAMERA_MAP_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_CAMERA_MAP_TYPE : uint8 {
    E_DEFAULT,
    E_DAATH,
    E_DUNGEON,
    E_TOKYO,
    E_SP_AREA1,
    E_SP_AREA2,
    E_SP_AREA3,
};

