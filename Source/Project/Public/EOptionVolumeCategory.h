#pragma once
#include "CoreMinimal.h"
#include "EOptionVolumeCategory.generated.h"

UENUM(BlueprintType)
enum class EOptionVolumeCategory : uint8 {
    BGM,
    ENV,
    SE,
    Voice,
};

