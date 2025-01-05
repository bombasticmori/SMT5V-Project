#pragma once
#include "CoreMinimal.h"
#include "SsVarianceValueRangeType.generated.h"

UENUM(BlueprintType)
namespace SsVarianceValueRangeType {
    enum Type {
        None,
        MinMax,
        PlusMinus,
    };
}

