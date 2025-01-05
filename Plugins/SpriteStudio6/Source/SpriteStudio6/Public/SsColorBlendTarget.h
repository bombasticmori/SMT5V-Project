#pragma once
#include "CoreMinimal.h"
#include "SsColorBlendTarget.generated.h"

UENUM(BlueprintType)
namespace SsColorBlendTarget {
    enum Type {
        Whole,
        Vertex,
        Num,
        Invalid = 254,
    };
}

