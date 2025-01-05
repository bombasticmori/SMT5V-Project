#pragma once
#include "CoreMinimal.h"
#include "SsRenderBlendType.generated.h"

UENUM(BlueprintType)
namespace SsRenderBlendType {
    enum Type {
        Mix,
        Add,
        Num,
        Invalid = 254,
    };
}

