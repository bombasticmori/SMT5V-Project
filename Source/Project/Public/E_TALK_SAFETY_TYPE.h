#pragma once
#include "CoreMinimal.h"
#include "E_TALK_SAFETY_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_TALK_SAFETY_TYPE : uint8 {
    E_NONE,
    E_GOD,
    E_MAGATSUHI,
    E_BIBLE_DEVIL,
    E_UNIQUE_SKILL,
};

