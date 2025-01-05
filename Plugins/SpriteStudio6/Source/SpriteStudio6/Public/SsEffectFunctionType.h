#pragma once
#include "CoreMinimal.h"
#include "SsEffectFunctionType.generated.h"

UENUM(BlueprintType)
namespace SsEffectFunctionType {
    enum Type {
        Base,
        Basic,
        RndSeedChange,
        Delay,
        Gravity,
        Position,
        Rotation,
        TransRotation,
        TransSpeed,
        TangentialAcceleration,
        InitColor,
        TransColor,
        AlphaFade,
        Size,
        TransSize,
        PointGravity,
        TurnToDirectionEnabled,
        InfiniteEmitEnabled,
    };
}

