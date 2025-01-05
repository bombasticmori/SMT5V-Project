#pragma once
#include "CoreMinimal.h"
#include "EConvertRotationType.generated.h"

UENUM(BlueprintType)
enum class EConvertRotationType : uint8 {
    AttachParent,
    OwnerActor,
    FixedUpBillboard,
};

