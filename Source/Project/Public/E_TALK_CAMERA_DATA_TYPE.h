#pragma once
#include "CoreMinimal.h"
#include "E_TALK_CAMERA_DATA_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_TALK_CAMERA_DATA_TYPE : uint8 {
    E_NONE,
    E_FRIEND,
    E_ENEMY,
    E_FRIEND_UP,
};

