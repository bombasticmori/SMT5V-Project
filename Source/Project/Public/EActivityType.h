#pragma once
#include "CoreMinimal.h"
#include "EActivityType.generated.h"

UENUM(BlueprintType)
enum class EActivityType : uint8 {
    Act_None,
    Act_OldRoute,
    Act_NewRoute,
};

