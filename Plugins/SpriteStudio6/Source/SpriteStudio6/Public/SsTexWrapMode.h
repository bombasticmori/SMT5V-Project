#pragma once
#include "CoreMinimal.h"
#include "SsTexWrapMode.generated.h"

UENUM(BlueprintType)
namespace SsTexWrapMode {
    enum Type {
        Clamp,
        Repeat,
        Mirror,
        Num,
        Invalid = 254,
    };
}

