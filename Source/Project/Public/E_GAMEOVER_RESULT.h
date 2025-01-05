#pragma once
#include "CoreMinimal.h"
#include "E_GAMEOVER_RESULT.generated.h"

UENUM(BlueprintType)
enum class E_GAMEOVER_RESULT : uint8 {
    E_GAMEOVER_RESULT_NONE,
    E_GAMEOVER_RESULT_LOAD,
    E_GAMEOVER_RESULT_TITLE,
};

