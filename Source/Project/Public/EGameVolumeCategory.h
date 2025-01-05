#pragma once
#include "CoreMinimal.h"
#include "EGameVolumeCategory.generated.h"

UENUM(BlueprintType)
enum class EGameVolumeCategory : uint8 {
    BGM,
    ENV,
    SE,
    Voice,
};

