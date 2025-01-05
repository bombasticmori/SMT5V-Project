#pragma once
#include "CoreMinimal.h"
#include "SsEffectNodeType.generated.h"

UENUM(BlueprintType)
namespace SsEffectNodeType {
    enum Type {
        Root,
        Emmiter,
        Particle,
        Num,
        Invalid = 254,
    };
}

