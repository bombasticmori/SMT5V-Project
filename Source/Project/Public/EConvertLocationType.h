#pragma once
#include "CoreMinimal.h"
#include "EConvertLocationType.generated.h"

UENUM(BlueprintType)
enum class EConvertLocationType : uint8 {
    AttachParent,
    OwnerActor,
};

