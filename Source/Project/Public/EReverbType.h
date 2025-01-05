#pragma once
#include "CoreMinimal.h"
#include "EReverbType.generated.h"

UENUM(BlueprintType)
enum class EReverbType : uint8 {
    None,
    Reverb_S,
    Reverb_M,
    Reverb_L,
};

