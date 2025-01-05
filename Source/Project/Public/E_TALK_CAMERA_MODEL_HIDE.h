#pragma once
#include "CoreMinimal.h"
#include "E_TALK_CAMERA_MODEL_HIDE.generated.h"

UENUM(BlueprintType)
enum class E_TALK_CAMERA_MODEL_HIDE : uint8 {
    E_NONE,
    E_HIDE_FRIEND,
    E_HIDE_ENEMY,
    E_HIDE_BOTH,
    E_INVALID,
};

