#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_ENABLE_SCENE.generated.h"

UENUM(BlueprintType)
enum class E_SKILL_ENABLE_SCENE : uint8 {
    E_SKILL_ENABLE_SCENE_NOT_USE,
    E_SKILL_ENABLE_SCENE_FIELD,
    E_SKILL_ENABLE_SCENE_BATTLE,
    E_SKILL_ENABLE_SCENE_ALL_SCENE,
};

