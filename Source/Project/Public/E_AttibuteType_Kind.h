#pragma once
#include "CoreMinimal.h"
#include "E_AttibuteType_Kind.generated.h"

UENUM(BlueprintType)
enum class E_AttibuteType_Kind : uint8 {
    E_AttibuteType_Kind_None,
    E_AttibuteType_Kind_Phisics,
    E_AttibuteType_Kind_Magics,
    E_AttibuteType_Kind_All,
};

