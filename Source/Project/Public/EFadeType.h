#pragma once
#include "CoreMinimal.h"
#include "EFadeType.generated.h"

UENUM(BlueprintType)
enum class EFadeType : uint8 {
    NoFade,
    CrossFade,
    PlayAfterFadeout,
    LongCrossFade,
    PlayWithFadeout,
};

