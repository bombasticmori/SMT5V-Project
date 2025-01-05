#pragma once
#include "CoreMinimal.h"
#include "SsValueType.generated.h"

UENUM(BlueprintType)
namespace SsValueType {
    enum Type {
        Unkown,
        StringType,
        IntType,
        FloatType,
        BooleanType,
        HashType,
        ArrayType,
        Point2Type,
        ColorType,
    };
}

