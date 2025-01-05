#pragma once
#include "CoreMinimal.h"
#include "SsPartType.generated.h"

UENUM(BlueprintType)
namespace SsPartType {
    enum Type {
        Null,
        Normal,
        Text,
        Instance,
        Armature,
        Effect,
        Mesh,
        MoveNode,
        Constraint,
        Mask,
        Joint,
        BonePoint,
        Num,
        Invalid = 254,
    };
}

