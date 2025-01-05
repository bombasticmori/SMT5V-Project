#pragma once
#include "CoreMinimal.h"
#include "ESsPlayerComponentRenderMode.generated.h"

UENUM(BlueprintType)
namespace ESsPlayerComponentRenderMode {
    enum Type {
        Default,
        Masked,
        OffScreenPlane,
        OffScreenOnly,
    };
}

