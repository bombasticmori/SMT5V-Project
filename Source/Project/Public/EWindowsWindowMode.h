#pragma once
#include "CoreMinimal.h"
#include "EWindowsWindowMode.generated.h"

UENUM(BlueprintType)
enum class EWindowsWindowMode : uint8 {
    Fullscreen,
    WindowedFullscreen,
    Windowed,
};

