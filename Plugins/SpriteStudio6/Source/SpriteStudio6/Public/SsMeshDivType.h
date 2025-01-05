#pragma once
#include "CoreMinimal.h"
#include "SsMeshDivType.generated.h"

UENUM(BlueprintType)
namespace SsMeshDivType {
    enum Type {
        PolylineBase,
        Boxdiv,
        Num,
        Unknown,
    };
}

