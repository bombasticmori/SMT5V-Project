#pragma once
#include "CoreMinimal.h"
#include "SsTexFilterMode.generated.h"

UENUM(BlueprintType)
namespace SsTexFilterMode {
    enum Type {
        Nearest,
        Linear,
        Num,
        Invalid = 254,
    };
}

