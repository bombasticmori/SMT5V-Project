#pragma once
#include "CoreMinimal.h"
#include "E_SaveListType.generated.h"

UENUM(BlueprintType)
enum class E_SaveListType : uint8 {
    E_SaveListTypeSave,
    E_SaveListTypeLoad,
};

