#pragma once
#include "CoreMinimal.h"
#include "ESsPlayerWidgetRenderMode.generated.h"

UENUM(BlueprintType)
namespace ESsPlayerWidgetRenderMode {
    enum Type {
        UMG_Default,
        UMG_Masked,
        UMG_OffScreen,
        UMG_S5_ScreenMask,
    };
}

