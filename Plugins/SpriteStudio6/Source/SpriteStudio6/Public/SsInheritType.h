#pragma once
#include "CoreMinimal.h"
#include "SsInheritType.generated.h"

UENUM(BlueprintType)
namespace SsInheritType {
    enum Type {
        Parent,
        Self,
        Num,
        Invalid = 254,
    };
}

