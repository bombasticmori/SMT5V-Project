#pragma once
#include "CoreMinimal.h"
#include "EConvertScaleType.generated.h"

UENUM(BlueprintType)
enum class EConvertScaleType : uint8 {
    AttachParent,
    OwnerActor,
};

